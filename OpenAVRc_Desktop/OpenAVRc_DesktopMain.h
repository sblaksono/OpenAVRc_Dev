 /*
 **************************************************************************
 *                                                                        *
 *                 ____                ___ _   _____                      *
 *                / __ \___  ___ ___  / _ | | / / _ \____                 *
 *               / /_/ / _ \/ -_) _ \/ __ | |/ / , _/ __/                 *
 *               \____/ .__/\__/_//_/_/ |_|___/_/|_|\__/                  *
 *                   /_/                                                  *
 *                                                                        *
 *              This file is part of the OpenAVRc project.                *
 *                                                                        *
 *                         Based on code(s) named :                       *
 *             OpenTx - https://github.com/opentx/opentx                  *
 *             Deviation - https://www.deviationtx.com/                   *
 *                                                                        *
 *                Only AVR code here for visibility ;-)                   *
 *                                                                        *
 *   OpenAVRc is free software: you can redistribute it and/or modify     *
 *   it under the terms of the GNU General Public License as published by *
 *   the Free Software Foundation, either version 2 of the License, or    *
 *   (at your option) any later version.                                  *
 *                                                                        *
 *   OpenAVRc is distributed in the hope that it will be useful,          *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 *   GNU General Public License for more details.                         *
 *                                                                        *
 *       License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html          *
 *                                                                        *
 **************************************************************************
*/


#ifndef OpenAVRc_DESKTOPMAIN_H
#define OpenAVRc_DESKTOPMAIN_H
#include <wx/stdpaths.h>
#include <wx/filename.h>
#include <wx/fileconf.h>
#include <wx/dcclient.h>


#define LCD_W 128
#define LCD_H 64
#define SPLASHLENGHT 1026

#define TEXT_LEN  25
#define VOICETXT_FILE       "list.txt"


//(*Headers(OpenAVRc_DesktopFrame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/listbox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class OpenAVRc_DesktopFrame: public wxFrame
{
public:

    OpenAVRc_DesktopFrame(wxWindow* parent,wxWindowID id = -1);
    virtual ~OpenAVRc_DesktopFrame();


private:

    //(*Handlers(OpenAVRc_DesktopFrame)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnavrdudeSelected(wxCommandEvent& event);
    void OnProgrammerSelected(wxCommandEvent& event);
    void OnreadmodelsSelected(wxCommandEvent& event);
    void OnreadfirmwareSelected(wxCommandEvent& event);
    void OnEcrirelesFuseesSelected(wxCommandEvent& event);
    void OnEcrirelebootloaderSelected(wxCommandEvent& event);
    void OnWriteModelToRadioSelected(wxCommandEvent& event);
    void OnWriteFirmwareToRadioSelected(wxCommandEvent& event);
    void OnSimulateurClick2(wxCommandEvent& event);
    void OnATMEGA2560CompilerSelected(wxCommandEvent& event);
    void LoadConfig(wxString temp);
    void SaveConfig();
    void RestoreDefaultSplash();
    void OnClose(wxCloseEvent& event);
    void OnListBoxConfigDClick(wxCommandEvent& event);
    void OnMenuNewconfigSelected(wxCommandEvent& event);
    void OnMenuDeleteActiveConfigSelected(wxCommandEvent& event);
    void OnMenuJQ6500_PCBSelected(wxCommandEvent& event);
    void OnMenuVOICE_AUDIO_PCBSelected(wxCommandEvent& event);
    void DrawLbmSplash();
    void OnPanelSplashPaint(wxPaintEvent& event);
    void OnButtonSplashDefaultClick(wxCommandEvent& event);
    void OnButtonPersoClick(wxCommandEvent& event);
    void OnEDITEURClick(wxCommandEvent& event);
    void OnButtonGenerateurClick(wxCommandEvent& event);
    void OnButtonCarteSDClick(wxCommandEvent& event);
    void OnChoiceLangueSelect(wxCommandEvent& event);
    void OnMenuChoiceVoiceSelected(wxCommandEvent& event);
    void OnMenuItem9Selected(wxCommandEvent& event);
    void OnEcrirelebootloaderF_RAMSelected(wxCommandEvent& event);
    void OnButtonSimuFramClick(wxCommandEvent& event);
    void OnButtonSimuSTDClick(wxCommandEvent& event);
    //*)

    //(*Identifiers(OpenAVRc_DesktopFrame)
    static const long ID_STATICBOXSPLASH;
    static const long ID_STATICBOXCONFIG;
    static const long ID_BUTTONSIMUSTD;
    static const long ID_BUTTONSIMUFRAM;
    static const long ID_LISTBOXCONFIG;
    static const long ID_SPLASH;
    static const long ID_BUTTONPERSO;
    static const long ID_BUTTONSPLASHDEFAULT;
    static const long ID_STATICBOX1;
    static const long ID_CHOICE1;
    static const long ID_STATICTEXT1;
    static const long ID_BUTTON2;
    static const long ID_BUTTON4;
    static const long ID_PANEL1;
    static const long ID_MENUITEMNEWCONFIG;
    static const long ID_MENUDELETEACTIVECONFIG;
    static const long idMenuQuit;
    static const long ID_MENUITEM1;
    static const long ID_MENUVOICECHOICE;
    static const long ID_MENUITEM3;
    static const long ID_MENUITEM5;
    static const long ID_MENUITEM4;
    static const long ID_MENUITEM6;
    static const long ID_MENUITEM9;
    static const long ID_MENUITEM10;
    static const long ID_MENUITEM13;
    static const long ID_MENUITEM7;
    static const long ID_MENUCOMPILOMATIC;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM8;
    static const long ID_MENUITEM12;
    static const long ID_MENUITEM15;
    static const long ID_MENUITEM2;
    static const long idMenuAbout;
    static const long ID_STATUSBAR1;
    //*)

    //(*Declarations(OpenAVRc_DesktopFrame)
    wxButton* ButtonSimuFram;
    wxButton* ButtonPerso;
    wxButton* ButtonSimuSTD;
    wxMenuItem* MenuItem7;
    wxMenuItem* MenuDeleteActiveConfig;
    wxPanel* PanelSplash;
    wxMenuItem* MenuItem5;
    wxButton* ButtonSplashDefault;
    wxMenu* MenuHtmlDoc;
    wxMenu* Menu3;
    wxButton* ButtonEditeur;
    wxMenuItem* MenuItem4;
    wxChoice* ChoiceLangue;
    wxMenuItem* MenuItem11;
    wxMenuItem* MenuItem15;
    wxStaticBox* StaticBoxSplash;
    wxPanel* Panel1;
    wxStaticText* StaticText1;
    wxMenuItem* MenuItem13;
    wxStaticBox* StaticBox1;
    wxMenu* MenuItem8;
    wxMenuItem* MenuItem10;
    wxButton* ButtonCarteSD;
    wxMenuItem* MenuItem12;
    wxMenuBar* MenuBar_main;
    wxMenuItem* MenuItem3;
    wxMenu* Menu7;
    wxListBox* ListBoxConfig;
    wxMenuItem* Menu5;
    wxStatusBar* StatusBar_main;
    wxStaticBox* StaticBoxConfig;
    wxMenuItem* ATMEGA2560Compiler;
    wxMenuItem* MenuItem6;
    wxMenuItem* MenuChoiceVoice;
    wxMenuItem* MenuItem9;
    wxMenuItem* MenuNewconfig;
    wxMenu* Menu4;
    //*)

    wxFileConfig* configFile;
    wxString Ini_Filename;
    wxString Profil;
    wxArrayString SavedConfig;

    wxString defaut;

    DECLARE_EVENT_TABLE()
};

#endif // OpenAVRc_DESKTOPMAIN_H

