#include "MixerFrame.h"
#include "OpenAVRc_SimulatorMain.h"

#include <wx/msgdlg.h>

wxString mixStr = "";
extern wxString modeStr = "";


#define data g_model.mixData

//class GVARSClass {
//public:
  //  const static char* gvarText[];
//};
//const char* GVARSClass::gvarText[] = { "GV1", "GV2", "GV3", "GV4", "GV5"};


class INPUTClass {
public:
    const static char* inputText[];
};

const char* INPUTClass::inputText[] = { "Dir\t","Prf\t","Gaz\t","Ail\t",
            "POT1","POT2","POT3",
            "REa\t","REb\t",
            "MAX\0",
            "CYC1","CYC2","CYC3",
            "TrmD","TrmP","TrmG","TrmA",
            "3POS","THR","RUD","ELE\t","AIL\t","GEA","TRN",
            "L1\t","L2\t","L3\t","L4\t","L5\t","L6\t","L7\t","L8\t","L9\t","L10\t","L11\t","L12\t",
            "TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8",
            "CH1","CH2","CH3","CH4","CH5","CH6","CH7","CH8","CH9","CH10","CH11","CH12","CH13","CH14","CH15","CH16"};


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
	SetClientSize(wxSize(778,287));
	Mixer = new wxPanel(this, ID_PANEL1, wxPoint(256,200), wxSize(818,248), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Mixerline1 = new wxTextCtrl(Mixer, ID_TEXTCTRL1, _("Texte"), wxPoint(0,32), wxSize(816,256), wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Headerline = new wxTextCtrl(Mixer, ID_TEXTCTRL2, _("Texte"), wxPoint(0,0), wxSize(816,32), wxTE_NO_VSCROLL|wxTE_READONLY|wxTE_RICH|wxTE_LEFT, wxDefaultValidator, _T("ID_TEXTCTRL2"));
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

//////////////////////// TOOLS FOR FLIGHT MODES ////////////////

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
  if (strTarget.Mid(1,1) == "1") modeStr.Append("__"); else modeStr.Append("1_");
  if (strTarget.Mid(2,1) == "1") modeStr.Append("__"); else modeStr.Append("2_");
  if (strTarget.Mid(3,1) == "1") modeStr.Append("__"); else modeStr.Append("3_");
  if (strTarget.Mid(4,1) == "1") modeStr.Append("__"); else modeStr.Append("4_");
  if (strTarget.Mid(5,1) == "1") modeStr.Append("__"); else modeStr.Append("5");
  return modeStr;
}


 void MixerFrame::FillMixerFrame()
{
  wxString Header = "\t\t\tMix\tOffset\tSwitch\tDiff\tCurve\tModes\t\tTrim\tDR/Expo\tDlay(u/d)Speed(u/d)\tWarn\n";
  Headerline->SetValue(Header);
  wxString mixerL;
  wxString txt;

  for( uint8_t i = 0; i < NUM_CHNOUT; i++ ) {
    mixerL = "";
    mixStr1 = "";
    //------------------------------------- OUTPUT CHANNEL-------------------------------------
      if (((data[i].weight) == 0) && ((data[i].weightMode) != 1)) continue;
      if (i == 0) mixStr1 = mixStr1 + "OUT " + wxString::Format(wxT("%i"),(data[i].destCh) + 1)+ " = ";
      else if ((data[i].destCh) > (data[i-1].destCh)){
      mixStr1 = mixStr1 + "\n" +"OUT " + wxString::Format(wxT("%i"),(data[i].destCh) + 1)+ " = ";
      }
      else mixStr1 = mixStr1 + "\t";

    //---------------------------------------OPERATOR--------------------------------------
    mixStr2 = "";
    if ((data[i].mltpx) == 2) mixStr2 = "Over ";
    else if ((data[i].mltpx) == 1) mixStr2 = "Mult ";
    else if ((data[i].mltpx) == 0) mixStr2 = "Add  ";// operator OK

    //---------------------------------------SOURCE-----------------------------------
    mixStr4 = "";
    int indx = (data[i].srcRaw);
    mixStr4 = mixStr4 + INPUTClass::inputText[indx-1] + "\t";

    //for (int j = 0; j < 3; j++){
    //if (TR_SOURCE[j + 3 * indx] == '\0') continue;
    //mixStr4 = mixStr4 + TR_SOURCE[j + 3 * indx];
    //}
      //mixStr = mixStr + TR_VSRCRAW[j + 4 * indx];
    //}

    //---------------------------------------------WEIGHT-------------------------------------------
    mixStr6 = "";
    mixStr7 = "mix7";
    int weight = (data[i].weight);
    int8_t mode = (data[i].weightMode);
    wxString percent = "%";

    if ((mode == 1) && (weight >= 0)){
      mixStr6 = mixStr6 + STR_GV;
      weight = weight + 1;
      percent = "";
    }
    else if ((mode == 0) && (weight < 0)){
      mixStr6 = mixStr6 + "-" + STR_GV;
      weight = abs(weight);
      percent = "";
    }
    mixStr7 = wxString::Format(wxT("%i"),weight) + percent + "\t";


    //---------------------------------------------OFFSET-----------------------------------------------
    mixStr8 = "";
    mixStr9 = "---\t";
    int8_t offset = (data[i].offset);
    mode = (data[i].offsetMode);
    percent = "%";

    if ((mode == 1) && (offset >= 0)){
      mixStr8 = mixStr8 + STR_GV;
      offset = offset + 1;
      percent = "";
    }
    else if ((mode == 0) && (offset < 0)){
      mixStr8 = mixStr8 + "-" + STR_GV;
      offset = abs(offset);
      percent = "";
    }
    mixStr9 = wxString::Format(wxT("%i"),offset) + percent + "\t";

    //---------------------------------------------SWITCHES-----------------------------------------------

    wxString mixStr10 = "";
    wxString mixStr11 = "";

    int idx = (data[i].swtch);
    if (idx < 0){
      mixStr10 = "!";
      idx = abs(idx);
    }

    for (int j = 0; j < 3; j++){
      if (STR_VSWITCHES[1 + j + 3 * idx] == '\0') continue;
      mixStr11.Append(STR_VSWITCHES[1 + j + 3 * idx]);
    }
    mixStr11.Append("\t");

    //----------------------------------------------------CURVE-----------------------------------------

    mixStr14 = "";
    int ind = (data[i].curveParam);
    if ((data[i].curveMode) == 0){
      if (ind > 122){
        ind = - ind + 128;
        mixStr14 = "-";
        mixStr14 = mixStr14 + STR_GV + wxString::Format(wxT("%i"),ind);
      }
      else if (ind < -123){
        ind = ind + 129;
        mixStr14 = STR_GV + wxString::Format(wxT("%i"),ind);
      }
      else mixStr14 = mixStr14 + wxString::Format(wxT("%i"),ind) +"%";
      mixStr14.Append("\t\t");
    }

    else {
      ind = (data[i].curveParam);
      mixStr14.Append("\t");
      if (ind < 0){
        mixStr14.Append("!");
        ind = -ind + CURVE_BASE-1;
      }
      if(ind < CURVE_BASE){
        for (int j = 0; j < 3; j++){
          mixStr14 = mixStr14 + TR_VCURVEFUNC[ j + 3 * (ind)];
        }
      }
      else mixStr14 = mixStr14 + STR_CV + wxString::Format(wxT("%i"),ind-6);

      mixStr14.Append("\t");
    }

    //---------------------------------------------FLIGHT MODES-------------------------------------------------------
    mixStr16 = "";
    ConvertToBinary(data[i].flightModes,mixStr16);
    modeStr = verlen(modeStr);
    mixStr16 = modeStr + "\t";
    modeStr ="";

    //-----------------------------------------------TRIM-----------------------------------------------

    const char * TRIMS[] = { "Ail", "Thr", "Ele", "Rud", "On", "---"};// This shall be somewhere with translation.

    mixStr18 = "";
    indx = (data[i].carryTrim);
    if (((data[i].srcRaw) > 4) && (indx == 0)) indx = 1;// TRIM OFF if input is not a stick

    mixStr18.Append(TRIMS[indx + 4]);
    mixStr18.Append("\t");

    //-----------------------------------------------DUAL RATE /EXPO-------------------------------------------
    mixStr19 = "";
    mixStr19 = mixStr19 + wxString::Format(wxT("%i"),(data[i].noExpo)) + "\t";
    //-----------------------------------------DELAY/SLOW---------------------------------------------
    mixStr20 = "";
    mixStr20 = mixStr20 + "(" + wxString::Format(wxT("%i"),(data[i].delayUp / 2));
    mixStr20 = mixStr20 + "," + wxString::Format(wxT("%i"),((data[i].delayUp % 2) * 5));
    mixStr20 = mixStr20 + "/" + wxString::Format(wxT("%i"),(data[i].delayDown / 2));
    mixStr20 = mixStr20 + "," + wxString::Format(wxT("%i"),((data[i].delayDown % 2) * 5)) + ")\t";
    mixStr20 = mixStr20 + "(" + wxString::Format(wxT("%i"),(data[i].speedUp / 2));
    mixStr20 = mixStr20 + "," + wxString::Format(wxT("%i"),((data[i].speedUp % 2) * 5));
    mixStr20 = mixStr20 + "/" + wxString::Format(wxT("%i"),(data[i].speedDown / 2));
    mixStr20 = mixStr20 + "," + wxString::Format(wxT("%i"),((data[i].speedDown % 2) * 5)) + ")\t\t";
    //-------------------------------------------------------------------------------------------------------
    mixStr22 = "";
    mixStr22 = mixStr22 + wxString::Format(wxT("%i"),(data[i].mixWarn));// IS THIS NECESSARY FOR THIS SCREEN ??
    //-------------------------------------------------------------------------------------------------------

    //wxString mixStr24 = "";
    //mixStr24 = " " + wxString::Format(wxT("%i"),(data[i].spare));

    mixerL = mixStr1 +mixStr2 +mixStr4 +mixStr6 +mixStr7 +mixStr8 +mixStr9 +mixStr10 +mixStr11 +mixStr14 +mixStr16
            +mixStr18 +mixStr19 +mixStr20 +mixStr22 ;

    txt.Append(mixerL + "\n");
  }
  Mixerline1->SetValue(txt);
}

void MixerFrame::OnTimerRefreshFrameTrigger(wxTimerEvent& event)
{
  FillMixerFrame();
}
