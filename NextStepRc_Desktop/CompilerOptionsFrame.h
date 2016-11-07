#ifndef COMPILEROPTIONSFRAME_H
#define COMPILEROPTIONSFRAME_H

//(*Headers(CompilerOptionsFrame)
#include <wx/stattext.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

//wxString Ini_Filename;

extern wxString PCB;
extern wxString LCD;
extern wxString VOICE;
extern wxString EXT;
extern bool AUDIO;
extern bool HELI;
extern wxString TTS;
extern wxString TRANSLATIONS;
extern wxString NAVIGATION;
extern wxString FRSKY_HUB;
extern wxString HAPTIC;
extern wxString PPM_UNIT;
extern bool GAUGES;
extern bool GPS;
extern bool VARIO;
extern bool RTCLOCK;
extern bool SPORT_FILE_LOG;
extern bool PPM;
extern bool PXX;
extern bool DSM2;

class CompilerOptionsFrame: public wxFrame
{
	public:

		CompilerOptionsFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~CompilerOptionsFrame();

		//wxFileConfig* configFile;

		//(*Declarations(CompilerOptionsFrame)
		wxCheckBox* CheckBoxSD_CARD;
		wxCheckBox* CheckBoxPXX;
		wxCheckBox* CheckBoxPPM;
		wxStaticText* StaticText2;
		wxCheckBox* CheckBoxGAUGES;
		wxStaticText* StaticText6;
		wxStaticBox* StaticBoxPROTOCOL;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxCheckBox* CheckBoxAUDIO;
		wxStaticText* StaticText3;
		wxStaticBox* StaticBox1;
		wxChoice* Choice7;
		wxCheckBox* CheckBoxDSM2;
		wxButton* ButtonEXIT;
		wxCheckBox* CheckBoxGPS;
		wxButton* ButtonCOMPILE;
		wxCheckBox* CheckBoxVARIO;
		wxChoice* ChoicePPM_UNIT ;
		wxChoice* ChoiceEXT;
		wxCheckBox* CheckBoxFASOFFSET;
		wxCheckBox* CheckBoxSPORT_FILE_LOG;
		wxCheckBox* CheckBoxHELI;
		wxCheckBox* CheckBoxHUB;
		wxChoice* ChoiceLCD;
		wxChoice* ChoiceVOICE;
		wxStaticText* StaticText4;
		wxButton* ButtonADVANCED;
		wxChoice* ChoicePCB;
		wxCheckBox* CheckBoxRTCLOCK;
		//*)

	protected:

		//(*Identifiers(CompilerOptionsFrame)
		static const long ID_STATICBOX2;
		static const long ID_STATICBOX1;
		static const long ID_CHOICE1;
		static const long ID_CHOICE3;
		static const long ID_CHECKBOX9;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX7;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT3;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_CHECKBOX4;
		static const long ID_CHECKBOX5;
		static const long ID_CHECKBOX6;
		static const long ID_CHECKBOX8;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE4;
		static const long ID_CHECKBOX12;
		static const long ID_CHOICE6;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE7;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON3;
		static const long ID_CHECKBOX10;
		static const long ID_CHECKBOX11;
		static const long ID_CHECKBOX13;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(CompilerOptionsFrame)
		void OnCheckListBox1Toggled(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnCheckBox1Click(wxCommandEvent& event);
		void OnCheckBox2Click(wxCommandEvent& event);
		void OnCheckBox3Click(wxCommandEvent& event);
		void OnCheckBox11Click(wxCommandEvent& event);
		void OnCheckBox10Click(wxCommandEvent& event);
		void OnChoice3Select(wxCommandEvent& event);
		void OnChoice5Select(wxCommandEvent& event);
		void OnChoice4Select(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnCheckBox5Click(wxCommandEvent& event);
		void OnCheckBox8Click(wxCommandEvent& event);
		void OnCheckBox4Click(wxCommandEvent& event);
		void OnCheckBox6Click(wxCommandEvent& event);
		void OnCheckBox9Click(wxCommandEvent& event);
		void OnChoice6Select(wxCommandEvent& event);
		void OnCheckBox12Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnLCDSelect(wxCommandEvent& event);
		void SaveConfig();
		void LoadConfig();
		void OnVOICESelect1(wxCommandEvent& event);
		void OnChoicePCBSelect(wxCommandEvent& event);
		void OnChoiceEXTSelect(wxCommandEvent& event);
		void OnChoicePPM_UNITSelect(wxCommandEvent& event);
		void OnAUDIOClick(wxCommandEvent& event);
		void OnCheckBoxAUDIOClick(wxCommandEvent& event);
		void OnCheckBoxRTCLOCKClick(wxCommandEvent& event);
		void OnButtonCOMPILEClick(wxCommandEvent& event);
		void OnButtonEXITClick(wxCommandEvent& event);
		void OnCheckBox2Click1(wxCommandEvent& event);
		void OnCheckBox3Click1(wxCommandEvent& event);
		void OnCheckBox1Click1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
