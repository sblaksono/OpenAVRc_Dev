#include "MixerFrame.h"
#include "OpenAVRc_SimulatorMain.h"

#include <wx/msgdlg.h>
#include <wx/arrstr.h>
#include <wx/string.h>

wxString mixStr = "";
extern wxString modeStr = "";


class GVARSClass {
public:
    const static char* gvarText[];
};
const char* GVARSClass::gvarText[] = { "GV1", "GV2", "GV3", "GV4", "GV5"};


class INPUTClass {
public:
    const static char* inputText[];
};

const char* INPUTClass::inputText[] = { "Dir\t","Prf\t","Gaz\t","Ail\t","POT1","POT2","POT3",
            "REa\t","REb\t","MAX\0","CYC1","CYC2","CYC3",
            "TrmD","TrmP","TrmG","TrmA","3POS",
            "THR","RUD","ELE","AIL\t","GEA","TRN",
            "L1\t","L2\t","L3\t","L4\t","L5\t","L6\t","L7\t","L8\t","L9\t","L10","L11","L12"};


//(*InternalHeaders(MixerFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(MixerFrame)
const long MixerFrame::ID_TEXTCTRL1 = wxNewId();
const long MixerFrame::ID_TEXTCTRL2 = wxNewId();
const long MixerFrame::ID_PANEL1 = wxNewId();
const long MixerFrame::ID_TIMERREFRESHFRAME = wxNewId();
//*)

BEGIN_EVENT_TABLE(MixerFrame,wxFrame)
	//(*EventTable(MixerFrame)
	//*)
END_EVENT_TABLE()

MixerFrame::MixerFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(MixerFrame)
	Create(parent, wxID_ANY, _("Mixeur"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxVSCROLL|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
	SetClientSize(wxSize(738,308));
	Mixer = new wxPanel(this, ID_PANEL1, wxPoint(256,200), wxSize(1104,320), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Mixerline1 = new wxTextCtrl(Mixer, ID_TEXTCTRL1, _("Texte"), wxPoint(0,32), wxSize(736,272), wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Headerline = new wxTextCtrl(Mixer, ID_TEXTCTRL2, _("Texte"), wxPoint(0,0), wxSize(736,32), wxTE_NO_VSCROLL|wxTE_READONLY|wxTE_RICH|wxTE_LEFT, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TimerRefreshFrame.SetOwner(this, ID_TIMERREFRESHFRAME);
	TimerRefreshFrame.Start(500, false);

	Connect(ID_TIMERREFRESHFRAME,wxEVT_TIMER,(wxObjectEventFunction)&MixerFrame::OnTimerRefreshFrameTrigger);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&MixerFrame::OnClose);
	//*)

  FillMixerFrame();
}

MixerFrame::~MixerFrame()
{
	//(*Destroy(MixerFrame)
	//*)
}

void MixerFrame::OnClose(wxCloseEvent& event)
{
  Destroy();
}

////////////////////////TOOLS FOR FLIGHT MODES////////////////

void ConvertToBinary(int n, wxString) //model flight modes in binary
{
  if (n / 2 != 0) {
    ConvertToBinary((n / 2), modeStr);
  }
  modeStr = modeStr + (wxString::Format(wxT("%d"),n % 2));
}

wxString verlen(const wxString &strSource)//reverse flight modes binary and change on screen presentation.
{
  wxString strTarget;
  for ( wxString::const_reverse_iterator it = strSource.rbegin(); it != strSource.rend(); ++it ){
    strTarget.Append( *it );
  }
  if (strTarget.Mid(0,1) == "1") modeStr = "__"; else modeStr = "0_";
  if (strTarget.Mid(1,1) == "1") modeStr = modeStr + "__"; else modeStr = modeStr + "1_";
  if (strTarget.Mid(2,1) == "1") modeStr = modeStr + "__"; else modeStr = modeStr + "2_";
  if (strTarget.Mid(3,1) == "1") modeStr = modeStr + "__"; else modeStr = modeStr + "3_";
  if (strTarget.Mid(4,1) == "1") modeStr = modeStr + "__"; else modeStr = modeStr + "4_";
  if (strTarget.Mid(5,1) == "1") modeStr = modeStr + "__"; else modeStr = modeStr + "5";
  //return strTarget;
  return modeStr;
}
///////////////////////////END OF TOOLS TO FLIGHT MODES/////////////


 void MixerFrame::FillMixerFrame()
 {
  wxString Header = "\t\t\tMix\tOffset\tSwitch\tDiff\tCurve\tModes\t\tTrim\tDlay(u/d)Speed(u/d)\tWarning\n";
  Headerline->SetValue(Header);

  wxString mixStr = "";
  for( int i = 0; i < NUM_CHNOUT; i++ ) {
  //-------------------------------------CHANNEL-------------------------------------
    if (((g_model.mixData[i].weight) == 0) && (g_model.mixData[i].weightMode == 0)) continue;
    if ((i == 0) || ((g_model.mixData[i].destCh) > (g_model.mixData[i-1].destCh))){
      mixStr = mixStr + "\n" + "OUT " + wxString::Format(wxT("%i"),(g_model.mixData[i].destCh) + 1)+ " = ";
    }
    else mixStr = mixStr + "\t";// Destination channel OK
//------------------------------------------------------------------------------------

//---------------------------------------OPERATOR---------------------------------------
    if ((g_model.mixData[i].mltpx) == 2) mixStr = mixStr + "Over ";
    else if ((g_model.mixData[i].mltpx) == 1) mixStr = mixStr + "Mult ";
    else if ((g_model.mixData[i].mltpx) == 0) mixStr = mixStr + "Add  ";// operator OK
//--------------------------------------------------------------------------------------

//---------------------------------------INPUT CHANNEL-----------------------------------

    //mixStr = mixStr + "in " + wxString::Format(wxT("%i"),(g_model.mixData[i].srcRaw));
  int indx = (g_model.mixData[i].srcRaw);
  mixStr = mixStr + INPUTClass::inputText[indx-1] + "\t";


    //int indx = (g_model.mixData[i].srcRaw);
  /*  //for (int j = 0; j < 4; j++){
           //mixStr = mixStr + TR_VSRCRAW[j + 4 * indx];
         //}
    //mixStr = mixStr + "\t"; //trailing \0 cuts our mixStr.



    if (indx == MIXSRC_FIRST_POT-4) mixStr = mixStr + "Rud input" + "\t";
    else if (indx == MIXSRC_FIRST_POT - 3) mixStr = mixStr + "Ele input" + "\t";
    else if (indx == MIXSRC_FIRST_POT - 2) mixStr = mixStr + "Thr input" + "\t";
    else if (indx == MIXSRC_FIRST_POT - 1) mixStr = mixStr + "Ail input" + "\t";

    else if (indx == MIXSRC_FIRST_POT) mixStr = mixStr + "P1\t\t";
    else if (indx == MIXSRC_FIRST_POT + 1) mixStr = mixStr + "P2\t\t";
    else if (indx == MIXSRC_FIRST_POT + 2) mixStr = mixStr + "P3\t\t";

    else if (indx == MIXSRC_LAST_ROTARY_ENCODER - 1) mixStr = mixStr + "REa\t\t";//review as per PERSONAMES.
    else if (indx == MIXSRC_LAST_ROTARY_ENCODER) mixStr = mixStr + "REb\t\t";

    else if (indx == MIXSRC_LAST_ROTARY_ENCODER + 1) mixStr = mixStr + "MAX\t\t";

    else if (indx == MIXSRC_FIRST_HELI) mixStr = mixStr + "CYC1";
    else if (indx == MIXSRC_FIRST_HELI + 1) mixStr = mixStr + "CYC2";
    else if (indx == MIXSRC_FIRST_HELI + 2) mixStr = mixStr + "CYC3";

    else if (indx == MIXSRC_FIRST_TRIM) mixStr = mixStr + "TrimRud";
    else if (indx == MIXSRC_FIRST_TRIM + 1) mixStr = mixStr + "TrimEle";
    else if (indx == MIXSRC_FIRST_TRIM + 2) mixStr = mixStr + "TrimThr";
    else if (indx == MIXSRC_FIRST_TRIM + 3) mixStr = mixStr + "TrimAil";

    else if (indx == MIXSRC_FIRST_SWITCH) mixStr = mixStr + "3POS"; //TR_9X_3POS_SWITCHES ????????????

 //#define TR_VSRCRAW             "---\0" TR_STICKS_VSRCRAW TR_POTS_VSRCRAW TR_ROTARY_ENCODERS "MAX\0" TR_CYC_VSRCRAW TR_TRIMS_VSRCRAW TR_SW_VSRCRAW TR_EXTRA_VSRCRAW
 //#define TR_STICKS_VSRCRAW      TR("Dir\0""Prf\0""Gaz\0""Ail\0", "\307Dir""\307Prf""\307Gaz""\307Ail")



    //else if (indx == MIXSRC_FIRST_SWITCH) mixStr = mixStr + TR_9X_3POS_SWITCHES[indx] + "\t"; //????????????
    ////////////////////////////////////////continue from here////////////////////////////
    //PHYSICAL SWITCHES   MIXSRC_FIRST_SWITCH
    //LOGICAL SWITCHES
    //TRAINER
    //CHANNELS
    //GVARS
    //TELEMETRY

    else (mixStr = mixStr + wxString::Format(wxT("%i"),(g_model.mixData[i].srcRaw))) + "\t";
    // TODO create a wxarraystring or similar to combine Mixsources and TR_PHYS_SWITCHES.
*/
//----------------------------------------------------------------------------------------------
//---------------------------------------------WEIGHT-------------------------------------------

 int8_t weight = (g_model.mixData[i].weight);
 int8_t mode = (g_model.mixData[i].weightMode);
 wxString percent = "%";

 if ((mode == 1) && (weight >= 0)){
   mixStr = mixStr + TR_GV;
   weight =weight + 1;
   percent ="";
 }
 else if ((mode == 0) && (weight < 0)){
   mixStr = mixStr + "-" + TR_GV;
   weight =abs (weight);
   percent = "";
 }
 mixStr = mixStr + wxString::Format(wxT("%i"),weight) + percent +"\t";

 //STR_GV

//---------------------------------------------OFFSET-----------------------------------------------

 int8_t offset = (g_model.mixData[i].offset);
 mode = (g_model.mixData[i].offsetMode);
 percent = "%";

 if ((mode == 1) && (offset >= 0)){
   mixStr = mixStr + "VG";
   offset =offset + 1;
   percent ="";
 }
 else if ((mode == 0) && (offset < 0)){
   mixStr = mixStr + "-VG";
   offset =abs (offset);
   percent = "";
 }
 mixStr = mixStr + wxString::Format(wxT("%i"),offset) + percent + "\t";
//----------------------------------------------------------------------------------------------------

//---------------------------------------------SWITCHES-----------------------------------------------

    #define TR_LOGICALSW         "L1 ""L2 ""L3 ""L4 ""L5 ""L6 ""L7 ""L8 ""L9 ""L10""L11""L12"

  //TODO Review this. Will not work if the values of "L" are redefined.

    int idx = (g_model.mixData[i].swtch);
    if (idx < 0){
      mixStr = mixStr + "No";
      idx = abs(idx);
    }
    for (int j = 0; j < 3; j++){
           mixStr = mixStr + TR_VSWITCHES[j + 3 * idx];
         }
    mixStr = mixStr + "\t";

    #define TR_LOGICALSW         "L1\0""L2\0""L3\0""L4\0""L5\0""L6\0""L7\0""L8\0""L9\0""L10""L11""L12"

//--------------------------------------------------------------------------------------------------------------------

  #define TR_VCURVEFUNC          "---""x>0""x<0""|x|""f>0""f<0""|f|""CB1""CB2""CB3""CB4""CB5""CB6""CB7""CB8"

  if ((g_model.mixData[i].curveMode) == 0) mixStr = mixStr + wxString::Format(wxT("%i"),(g_model.mixData[i].curveParam)) + "%\t\t";
  else {
        mixStr = mixStr + "\t";
         for (int j = 0; j < 3; j++){
          mixStr = mixStr + TR_VCURVEFUNC[j + 3 * (g_model.mixData[i].curveParam)];
        }
        mixStr = mixStr + "\t";

        //mixStr = mixStr + wxString::Format(wxT("%i"),(g_model.mixData[i].curveParam)) + "\t";
  }

  #define TR_VCURVEFUNC          "---""x>0""x<0""|x|""f>0""f<0""|f|"

    //mixStr = mixStr +       "NOEXPO " + wxString::Format(wxT("%i"),(g_model.mixData[i].noExpo)) + ",";// Should be on this screen ??

//---------------------------------------------FLIGHT MODES-------------------------------------------------------
    ConvertToBinary(g_model.mixData[i].flightModes,mixStr);// TODO improve the output to make it comprehensible.
    modeStr = verlen(modeStr);
    //if (modeStr == "") modeStr = "All";
    mixStr = mixStr + modeStr + "\t";
    modeStr ="";
//-----------------------------------------------------------------------------------------------------------------

//-----------------------------------------------TRIM--------------------------------------------------
    indx = (g_model.mixData[i].carryTrim); //Trim ok
    if ((indx) == 1) mixStr = mixStr + "Off" + "\t";
    else if ((indx) == 0) mixStr = mixStr + "On" + "\t";
    else if ((indx) == -1) mixStr = mixStr + "RUD" + "\t";
    else if ((indx) == -2) mixStr = mixStr + "ELE" + "\t";
    else if ((indx) == -3) mixStr = mixStr + "THR" + "\t";
    else if ((indx) == -4) mixStr = mixStr + "AIL" + "\t";
//-------------------------------------------------------------------------------------------------------

    mixStr = mixStr + "(" + wxString::Format(wxT("%i"),(g_model.mixData[i].delayUp / 2));
    mixStr = mixStr + "," + wxString::Format(wxT("%i"),((g_model.mixData[i].delayUp % 2) * 5));
    mixStr = mixStr + "/" + wxString::Format(wxT("%i"),(g_model.mixData[i].delayDown / 2));
    mixStr = mixStr + "," + wxString::Format(wxT("%i"),((g_model.mixData[i].delayDown % 2) * 5)) + ")\t";
    mixStr = mixStr + "(" + wxString::Format(wxT("%i"),(g_model.mixData[i].speedUp / 2));
    mixStr = mixStr + "," + wxString::Format(wxT("%i"),((g_model.mixData[i].speedUp % 2) * 5));
    mixStr = mixStr + "/" + wxString::Format(wxT("%i"),(g_model.mixData[i].speedDown / 2));
    mixStr = mixStr + "," + wxString::Format(wxT("%i"),((g_model.mixData[i].speedDown % 2) * 5)) + ")\t\t";
//-------------------------------------------------------------------------------------------------------
    mixStr = mixStr + wxString::Format(wxT("%i"),(g_model.mixData[i].mixWarn)) + "\n";// IS THIS NECESSARY FOR THIS SCREEN ??
//-------------------------------------------------------------------------------------------------------
    //mixStr = mixStr + " " + wxString::Format(wxT("%i"),(g_model.mixData[i].spare));

  }
  Mixerline1->SetValue(mixStr);
 }





void MixerFrame::OnTimerRefreshFrameTrigger(wxTimerEvent& event)
{
  FillMixerFrame();
}
