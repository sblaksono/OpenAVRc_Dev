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


 /* Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */














// NON ZERO TERMINATED STRINGS
#define LEN_OFFON              "\003"
#define TR_OFFON               "OFF""ON\0"

#define LEN_MMMINV             "\003"
#define TR_MMMINV              "---""INV"

#define LEN_NCHANNELS          "\004"
#define TR_NCHANNELS           "\0014CH\0016CH\0018CH10CH12CH14CH16CH"

#define LEN_VBEEPMODE          "\005"
#define TR_VBEEPMODE           "Aucun""Alarm""NoKey""Tout\0"

#define LEN_VBEEPLEN           "\005"
#define TR_VBEEPLEN            "0====""=0===""==0==""===0=""====0"

#define LEN_VRENAVIG           "\003"
#define TR_VRENAVIG            "NonREaREb"

#define LEN_VBLMODE            TR("\004", "\011")
#define TR_VBLMODE             TR("OFF\0""Btns""Ctrl""Tous""ON\0","OFF\0     ""Touches\0 ""Controles""Tous\0    ""ON\0      ")

#define LEN_TRNMODE            "\003"
#define TR_TRNMODE             "OFF"" +="" :="

#define LEN_TRNCHN             "\003"
#define TR_TRNCHN              "CH1CH2CH3CH4"

#define LEN_UART3MODES         "\016"
#define TR_UART3MODES          "OFF\0          ""Recopie S-Port""T\200l\200m\200trie\0   ""Ecolage SBUS\0 ""Debug\0"

#define LEN_SWTYPES            "\006"
#define TR_SWTYPES             "Rien\0 ""Levier""2-POS\0""3-POS\0"

#define LEN_POTTYPES           "\017"
#define TR_POTTYPES            "Rien\0          ""Pot avec centre""Inter multi-pos""Potentiom\201tre\0"

#define LEN_SLIDERTYPES        "\006"
#define TR_SLIDERTYPES         "Rien\0 ""Slider"

#define LEN_DATETIME           "\005"
#define TR_DATETIME            "DATE:""HEURE"

#define LEN_VLCD               "\006"
#define TR_VLCD                "NormalOptrex"

#define LEN_VPERSISTENT        "\014"
#define TR_VPERSISTENT         "OFF\0        ""Vol\0        ""Reset Manuel"

#define LEN_COUNTRYCODES       TR("\002", "\006")
#define TR_COUNTRYCODES        TR("US""JP""EU", "USA\0  ""Japon\0""Europe")

#define LEN_TARANIS_PROTOCOLS  "\004"
#define TR_TARANIS_PROTOCOLS   "OFF\0""PPM\0""XJT\0""DSM2""CRSF"

#define LEN_XJT_PROTOCOLS      "\004"
#define TR_XJT_PROTOCOLS       "OFF\0""D16\0""D8\0 ""LR12"

#define LEN_DSM_PROTOCOLS      "\004"
#define TR_DSM_PROTOCOLS       "LP45""DSM2""DSMX"

#define LEN_VTRIMINC           TR("\006", "\013")
#define TR_VTRIMINC            TR("Expo\0 ""ExFin\0""Fin\0  ""Moyen\0""Gros\0 ","Exponentiel""Extra Fin\0 ""Fin\0       ""Moyen\0     ""Grossier\0  ")

#define LEN_VDISPLAYTRIMS      "\006"
#define TR_VDISPLAYTRIMS       "Non\0  ""Change""Oui\0"

#define LEN_VBEEPCOUNTDOWN     "\007"
#define TR_VBEEPCOUNTDOWN      "Aucun\0 ""Bips\0  ""Voix\0  Haptic\0"

#define LEN_VVARIOCENTER       "\006"
#define TR_VVARIOCENTER        "Tone\0 ""Silent"

#define LEN_CURVE_TYPES        "\010"
#define TR_CURVE_TYPES         "Standard""Libre\0"

#define LEN_RETA123            "\001"

  #define TR_RETA123           "DPGA123ab"

#define LEN_VPROTOS            "\006"

#if defined(PXX)
  #define TR_PXX               "PXX\0  "
#elif defined(DSM2_SERIAL)
  #define TR_PXX               "[PXX]\0"
#else
  #define TR_PXX
#endif

#if defined(DSM2_SERIAL)
  #define TR_DSM2              "LP45\0 ""DSM2\0 ""DSMX\0 "
#else
  #define TR_DSM2
#endif

#if defined(SPIMODULES)
   #define TR_SPIM               "SPIRfMod"
   #define TR_RFTUNECOARSE       INDENT "Freq.gros"
   #define TR_RFPOWER INDENT     "Puissance RF"
#endif

#if defined(MULTIMODULE)
  #define LEN_MULTIPROTOCOLS    "\006"
  #define TR_MULTIPROTOCOLS     "FlySky""Hubsan""FrSky\0""Hisky\0""V2x2\0 ""DSM\0  ""Devo\0 ""YD717\0""KN\0   ""SymaX\0""SLT\0  ""CX10\0 ""CG023\0""Bayang""ESky\0 ""MT99XX""MJXQ\0 ""Shenqi""FY326\0""SFHSS\0""J6 PRO""FQ777\0""Assan\0""Hontai""OLRS\0 ""FS 2A\0""Q2x2\0 ""Walk.\0""Q303\0 ""GW008\0""DM002\0"
  #define TR_MULTI_CUSTOM       "Custom"
#endif

#if defined(MULTIMODULE) || defined(SPIMODULES)
  #define TR_SUBTYPE            "SubType"
  #define TR_RFTUNEFINE         INDENT "Ajust.fr\200q"
  #define TR_TELEMETRY           "T\200l\200m\200trie"
  #define TR_MULTI_VIDFREQ       TR(INDENT "Fr\200q. vid\200o", INDENT "Fr\200quence vid\200o")
  #define TR_MULTI_RFPOWER       TR(INDENT "Puiss. RF", INDENT "Puissance RF")
  #define TR_MULTI_OPTION        TR(INDENT "Option", INDENT "Option perso")
  #define TR_MULTI_SERVOFREQ     TR(INDENT "Fr\200q.servo", INDENT "Fr\200quence servos")
  #define TR_AUTOBIND      TR(INDENT "Bind auto", INDENT "Bind automatique")
  #define TR_MULTI_DSM_AUTODTECT TR(INDENT "Autod\200t.", INDENT "Autod\200tection")
  #define TR_MULTI_LOWPOWER      TR(INDENT "Basse puis.", INDENT "Mode basse puiss.")

#endif





#define LEN_POSNEG             "\003"
#define TR_POSNEG              "POS""NEG"


#define LEN_VCURVEFUNC         "\003"
#define TR_VCURVEFUNC          "---""x>0""x<0""|x|""f>0""f<0""|f|"

#define LEN_VMLTPX             TR("\010", "\013")
#define TR_VMLTPX              TR("Ajoute\0 ""Multipl.""Remplace", "Additionner""Multiplier\0""Remplacer\0")

#define LEN_VMLTPX2            "\002"
#define TR_VMLTPX2             "+=""*="":="

#define LEN_VMIXTRIMS          "\003"
#define TR_VMIXTRIMS           "OFF""ON\0""Dir""Prf""Gaz""Ail"

  #define TR_CSWTIMER          "Temp\0"
  #define TR_CSWSTICKY         "Bist\0"
    #define TR_CSWRANGE
    #define TR_CSWSTAY



#define LEN_VCSWFUNC           "\005"
#define TR_VCSWFUNC            "---\0 " "a=x\0 " "a\173x\0 ""a>x\0 ""a<x\0 " TR_CSWRANGE "|a|>x""|a|<x""ET\0  ""OU\0  ""OUX\0 " TR_CSWSTAY "a=b\0 ""a>b\0 ""a<b\0 ""^}x\0 ""|^|}x" TR_CSWTIMER TR_CSWSTICKY

#define LEN_VFSWFUNC           "\015"

#if defined(VARIO)
  #define TR_VVARIO            "Vario\0       "
#else
  #define TR_VVARIO            "[Vario]\0     "
#endif

#if defined(AUDIO)
  #define TR_SOUND             "Jouer son\0   "
#else
  #define TR_SOUND             "Bip\0         "
#endif

#if defined(HAPTIC)
  #define TR_HAPTIC            "Vibreur\0     "
#else
  #define TR_HAPTIC            "[Vibreur]\0   "
#endif

#if defined(VOICE)
    #define TR_PLAY_TRACK      "Jouer fich\0  "
  #define TR_PLAY_BOTH         "Jouer les 2\0 "
  #define TR_PLAY_VALUE        "Lire valeur\0 "
#else
  #define TR_PLAY_TRACK        "[Jouer fich.]"
  #define TR_PLAY_BOTH         "[Jouer les 2]"
  #define TR_PLAY_VALUE        "[Lire valeur]"
#endif

#define TR_SF_BG_MUSIC        "Musique\0     ""Pause Musique"

#if defined(SDCARD)
  #define TR_SDCLOGS           "Logs SD\0     "
#else
  #define TR_SDCLOGS           "[Logs SD]\0   "
#endif

#if defined(GVARS)
  #define TR_ADJUST_GVAR       "Ajuster\0     "
#else
  #define TR_ADJUST_GVAR       "[AjusteGV]\0  "
#endif

  #define TR_SF_PLAY_SCRIPT   "[Lua]\0       "

#if defined(DEBUG)
  #define TR_SF_TEST          "Test\0        "
#else
  #define TR_SF_TEST
#endif

#if   defined(OVERRIDE_CHANNEL_FUNCTION)
  #define TR_SF_SAFETY        "Rempl.\0      "
#else
  #define TR_SF_SAFETY        "---\0         "
#endif

  #define TR_SF_SCREENSHOT

#define TR_SF_RESERVE         "[reserve]\0   "

  #define TR_VFSWFUNC          TR_SF_SAFETY "Ecolage\0     ""Trim instant.""Remise \202 0\0  " TR_ADJUST_GVAR TR_SOUND TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_VVARIO TR_HAPTIC TR_SDCLOGS "R\200tro\200cl.\0   " TR_SF_TEST

#define LEN_VFSWRESET          TR("\004", "\012")

#if defined(FRSKY)
  #define TR_FSW_RESET_TELEM   TR("T\200lm", "T\200l\200mesure")
  #define TR_MODELISON         INDENT "Le mod\201le est allum\200"
#else
  #define TR_FSW_RESET_TELEM
#endif

#if ROTARY_ENCODERS == 2
  #define TR_FSW_RESET_ROTENC  TR("ERa\0""ERb\0", "Enc.Rot.A\0""Enc.Rot.B\0")
#elif ROTARY_ENCODERS == 1
  #define TR_FSW_RESET_ROTENC  TR("EncR", "Enc.Rot\0  ")
#else
  #define TR_FSW_RESET_ROTENC
#endif

  #define TR_FSW_RESET_TIMERS  "Chr1""Chr2"

#define TR_VFSWRESET           TR(TR_FSW_RESET_TIMERS "Tout" TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC, TR_FSW_RESET_TIMERS "Tout\0     " TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC)

#define LEN_FUNCSOUNDS         TR("\004", "\006")
#define TR_FUNCSOUNDS          TR("Bp1\0""Bp2\0""Bp3\0""Wrn1""Wrn2""Chee""Rata""Tick""Sirn""Ring""SciF""Robt""Chrp""Tada""Crck""Alrm", "Beep1 ""Beep2 ""Beep3 ""Warn1 ""Warn2 ""Cheep ""Ratata""Tick  ""Siren ""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""AlmClk")

#define LEN_VTELEMCHNS         TR("\004", "\005")

  #define TR_TELEM_RESERVE
  #define TR_TELEM_TIME
  #define TR_SWR
  #define TR_RX_BATT
  #define TR_A3_A4
  #define TR_A3_A4_MIN

#define TR_ASPD_MAX            TR("ViA+", "VitA+")

  #define TR_TELEM_RSSI_RX     TR("Rx\0 ", "Rx\0  ")

  #define TR_TELEM_TIMERS      TR("Chr1""Chr2", "Chr1\0""Chr2\0")

  #define TR_VTELEMCHNS        "---\0""Batt" TR_TELEM_TIME TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_TIMERS TR_SWR "Tx\0 " TR_TELEM_RSSI_RX TR_RX_BATT "A1\0 ""A2\0 " TR_A3_A4 "Alt\0""Rpm\0""Carb""T1\0 ""T2\0 ""Vit\0""Dist""AltG""Elem""Velm""Vfas""Cour""Cnsm""Puis""AccX""AccY""AccZ""Cap\0""VitV""VitA""dET\0" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "A1-\0""A2-\0" TR_A3_A4_MIN "Alt-""Alt+""Rpm+""T1+\0""T2+\0""Vit+""Dst+" TR_ASPD_MAX "Elm-""Els-""Vfs-""Cur+""Pui+" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "Acc\0""Tmps"

#define LENGTH_UNIT_IMP        "ft\0"
#define SPEED_UNIT_IMP         "mph"
#define LENGTH_UNIT_METR       "m\0 "
#define SPEED_UNIT_METR        "kmh"

  #if defined(IMPERIAL_UNITS)
    #define LENGTH_UNIT        LENGTH_UNIT_IMP
    #define SPEED_UNIT         SPEED_UNIT_IMP
  #else
    #define LENGTH_UNIT        LENGTH_UNIT_METR
    #define SPEED_UNIT         SPEED_UNIT_METR
  #endif
  #define LEN_VTELEMUNIT       "\003"
  #define TR_VTELEMUNIT        "V\0 ""A\0 ""m/s""-\0 " SPEED_UNIT LENGTH_UNIT "@\0 ""%\0 ""mA\0""mAh""W\0 "

#define STR_V                  (STR_VTELEMUNIT+1)
#define STR_A                  (STR_VTELEMUNIT+4)

#define LEN_VALARM             "\004"
#define TR_VALARM              "----""Jaun""Oran""Roug"

#define LEN_VALARMFN           "\001"
#define TR_VALARMFN            "<>"

#define LEN_VTELPROTO          "\007"
#define TR_VTELPROTO           "Aucun  ""Hub\0   ""WSHHigh""S.Port\0"

  #define LEN_AMPSRC           TR("\003", "\005")
  #define TR_AMPSRC            TR("---""A1\0""A2\0""FAS""Cel", "---\0 ""A1\0  ""A2\0  ""FAS\0 ""Elem.")

#define LEN_VARIOSRC           "\005"
#if defined(FRSKY_SPORT)
  #define TR_VARIOSRC          "Vario""A1\0  ""A2\0  ""dTE\0 "
#else
  #define TR_VARIOSRC          "Alti\0""Alti+""Vario""A1\0  ""A2\0"
#endif

  #define LEN_VTELEMSCREENTYPE "\004"
  #define TR_VTELEMSCREENTYPE  "Val.""Bars"

#define LEN_GPSFORMAT          "\004"
#define TR_GPSFORMAT           "DMS\0""NMEA"

#define LEN2_VTEMPLATES        15
#define LEN_VTEMPLATES         "\017"
#define TR_VTEMPLATES          "Suppr Mixages\0 ""4 Voies simple\0""Coupure Gaz\0   ""Empennage V\0   ""Elevon\\Delta\0  ""eCCPM\0         ""Conf. H\200lico\0  ""Test Servo\0    "

#define LEN_VSWASHTYPE         "\004"
#define TR_VSWASHTYPE          "--- ""120 ""120X""140 ""90\0"

#define LEN_VKEYS              "\005"
#define TR_VKEYS               TR("Menu\0""Exit\0""Bas\0 ""Haut\0""Droit""Gauch", "Menu\0""Exit\0""Enter""Page\0""Plus\0""Minus")

#define LEN_VRENCODERS         "\003"
#define TR_VRENCODERS          "REa""REb"

#define LEN_VSWITCHES          "\003"
#define LEN_VSRCRAW            "\004"

#define TR_STICKS_VSRCRAW      TR("Dir\0""Prf\0""Gaz\0""Ail\0", "\307Dir""\307Prf""\307Gaz""\307Ail")
#define TR_TRIMS_VSRCRAW       TR("TrmD""TrmP""TrmG""TrmA", "\313Dir""\313Prf""\313Gaz""\313Ail")

  #define TR_POTS_VSRCRAW      "P1\0 ""P2\0 ""P3\0 "
  #define TR_SW_VSRCRAW        "3POS"
  #define TR_9X_3POS_SWITCHES  "ID0""ID1""ID2"

  #define TR_LOGICALSW         "L1\0""L2\0""L3\0""L4\0""L5\0""L6\0""L7\0""L8\0""L9\0""L10""L11""L12""L13""L14""L15""L16""L17""L18""L19""L20"

#define TR_TRIMS_SWITCHES      TR("tDg""tDd""tPb""tPh""tGb""tGh""tAg""tAd", "\313Dg""\313Dd""\313Pb""\313Ph""\313Gb""\313Gh""\313Ag""\313Ad")

  #define TR_ROTARY_ENCODERS   "REa\0""REb\0"
  #define TR_ROTENC_SWITCHES   "REA""REB""REN"

  #define TR_PHYS_SWITCHES     "THR""RUD""ELE""AIL""GEA""TRN"

#define TR_ON_ONE_SWITCHES     "ON\0""Un"

  #define TR_EXTRA_3POS_SWITCHES  "XD0""XD1""XD2"

  #define TR_VSWITCHES         "---" TR_9X_3POS_SWITCHES TR_PHYS_SWITCHES TR_TRIMS_SWITCHES TR_ROTENC_SWITCHES TR_EXTRA_3POS_SWITCHES TR_LOGICALSW TR_ON_ONE_SWITCHES

#if defined(HELI)
  #define TR_CYC_VSRCRAW       "CYC1""CYC2""CYC3"
#else
  #define TR_CYC_VSRCRAW       "[C1]""[C2]""[C3]"
#endif

  #define TR_EXTRA_VSRCRAW

#define TR_VSRCRAW             "---\0" TR_STICKS_VSRCRAW TR_POTS_VSRCRAW TR_ROTARY_ENCODERS "MAX\0" TR_CYC_VSRCRAW TR_TRIMS_VSRCRAW TR_SW_VSRCRAW TR_EXTRA_VSRCRAW

#define LEN_VTMRMODES          "\003"
#define TR_VTMRMODES           "OFF""ON\0""GZs""GZ%""GZt"

#define LEN_VTRAINERMODES      "\022"
#define TR_VTRAINERMODES       "Ma\203tre/Jack\0      ""El\201ve/Jack\0       ""Ma\203tre/SBUS Module""Ma\203tre/CPPM Module""Ma\203tre/Batterie\0"

#define LEN_VFAILSAFE          "\011"
#define TR_VFAILSAFE           TR("Pas d\200f.\0""Maintien\0""Pr\200d\200f.\0 ""Pas d'imp""R\200cepteur", "Pas d\200f.\0""Maintien\0""Pr\200d\200fini""Pas d'imp""R\200cepteur")

#if defined(MAVLINK)
  #define LEN_MAVLINK_BAUDS    "\006"
  #define TR_MAVLINK_BAUDS     "4800  ""9600  ""14400 ""19200 ""38400 ""57600 ""76800 ""115200"
  #define LEN_MAVLINK_AC_MODES "\011"
  #define TR_MAVLINK_AC_MODES  "Stabilize""Acro     ""Alt Hold ""Auto     ""Guided   ""Loiter   ""RTL      ""Circle   ""Pos Hold ""Land     ""OF Loiter""Toy A    ""Toy M    ""INVALID  "
  #define LEN_MAVLINK_AP_MODES "\015"
  #define TR_MAVLINK_AP_MODES  "Manual       ""Circle       ""Stabilize    ""Training     ""Fly by Wire A""Fly by Wire A""Auto         ""RTL          ""Loiter       ""Guided       ""Initialising ""INVALID      "
#endif

#define LEN_VSENSORTYPES       "\012"
#define TR_VSENSORTYPES        "Perso\0    ""Calcul\200\0  "

#define LEN_VFORMULAS          "\010"
#define TR_VFORMULAS           "Addition""Moyenne\0""Min\0    ""Max\0    ""Multipl.""Totalise""El\200ment\0""Consomm.""Distance"

#define LEN_VPREC              "\004"
#define TR_VPREC               "0.--""0.0 ""0.00"

#define LEN_VCELLINDEX         "\007"
#define TR_VCELLINDEX          "Mini.\0 ""1\0     ""2\0     ""3\0     ""4\0     ""5\0     ""6\0     ""Maxi.\0 ""Diff.\0 "

// ZERO TERMINATED STRINGS
  #define INDENT                 "\001"
  #define LEN_INDENT             1
  #define INDENT_WIDTH           (FW/2)
  #define BREAKSPACE           " "

  #define TR_ENTER             "[MENU]"

#define TR_EXIT                "[EXIT]"

  #define TR_POPUPS            TR_ENTER "\010" TR_EXIT
  #define OFS_EXIT             sizeof(TR_ENTER)

#define TR_MENUWHENDONE        CENTER "\006" TR_ENTER " QUAND PRET"
#define TR_FREE                "disp"
#define TR_DELETEMODEL         "SUPPRIMER" BREAKSPACE "MODELE"
#define TR_COPYINGMODEL        "Copie..."
#define TR_MOVINGMODEL         "D\200placement..."
#define TR_LOADINGMODEL        "Chargement..."
#define TR_NAME                "Nom"
#define TR_MODELNAME           TR("Nom mod\201le", "Nom du mod\201le")
#define TR_PHASENAME           "Nom phase"
#define TR_MIXNAME             TR("Nom mix.", "Nom du mixeur")
#define TR_INPUTNAME           "Nom entr\200e"
#define TR_EXPONAME          "Nom expo"
#define TR_BITMAP              "Image du mod\201le"
#define TR_TIMER               "Chrono "
#define TR_ELIMITS             TR("Limites \200t.", "Limites \200tendues")
#define TR_ETRIMS              TR("Trims \200t.", "Trims \200tendus")
#define TR_TRIMINC             TR("Pas Trim", "Pas des trims")
#define TR_DISPLAY_TRIMS       TR("Aff. trims", "Affichage Trims")
#define TR_TTRACE              TR("Source Gaz", INDENT "Source")
#define TR_TSWITCH             "Switch Gaz"
#define TR_TTRIM               TR("Trim gaz", INDENT "Trim ralenti uniq.")
#define TR_BEEPCTR             TR("Bips centr", "Bips centrage")
#define TR_USE_GLOBAL_FUNCS    TR("Fonc. glob.", "Fonctions Globales")
#define TR_PROTO               TR(INDENT "Proto.", INDENT "Protocole")
  #define TR_PPMFRAME          "Trame PPM"
#define TR_MS                  "ms"
#define TR_SWITCH              TR("Inter", "Interrupteur")
#define TR_TRIMS               "Trims"
#define TR_FADEIN              "Fondu ON"
#define TR_FADEOUT             "Fondu OFF"
#define TR_DEFAULT             "(d\200faut)"
#define TR_CHECKTRIMS          "\006V\200rif\012Trims"
#define OFS_CHECKTRIMS         (9*FW)
#define TR_SWASHTYPE           TR("Type de Plat.", "Type de plateau")
#define TR_COLLECTIVE          TR("Collectif", "Source collectif")
#define TR_AILERON             "Source cyc. lat."
#define TR_ELEVATOR            "Source cyc. lon."
#define TR_SWASHRING           TR("Limite Cycl.", "Limite du cyclique")
#define TR_ELEDIRECTION        TR("Inv. longitud.", "Inversion longitudinal")
#define TR_AILDIRECTION        TR("Inv. lat\200ral", "Inversion lat\200ral")
#define TR_COLDIRECTION        TR("Inv. collectif", "Inversion collectif")
#define TR_MODE                INDENT "Mode"
#define TR_NOFREEEXPO          "Max expos atteint!"
#define TR_NOFREEMIXER         "Max mixages atteint!"
#define TR_INSERTMIX           "INSERER MIXAGE"
#define TR_EDITMIX             "EDITER MIXAGE"
#define TR_SOURCE              INDENT "Source"
#define TR_WEIGHT              "Ratio"
#define TR_EXPO                TR("Expo", "Exponentiel")
#define TR_SIDE                "Cot\200"
#define TR_DIFFERENTIAL        "Diff\200rentiel"
#define TR_OFFSET              INDENT "D\200calage"
#define TR_TRIM                "Trim"
#define TR_DREX                "DRex"
#define DREX_CHBOX_OFFSET      30
#define TR_CURVE               "Courbe"
#define TR_FLMODE              TR("Phase", "Phases")
#define TR_MIXWARNING          "Alerte"
#define TR_OFF                 "OFF"
#define TR_MULTPX              "Op\200ration"
#define TR_DELAYDOWN           "Retard bas"
#define TR_DELAYUP             "Retard haut"
#define TR_SLOWDOWN            "Ralenti bas"
#define TR_SLOWUP              "Ralenti haut"
#define TR_MIXER               "MIXEUR"
#define TR_CV                  "CB"
#define TR_GV                  "VG"
#define TR_ACHANNEL            "A"
#define TR_RANGE               INDENT "Plage"
#define TR_CENTER              INDENT "Center"
#define TR_BAR                 "Barre"
#define TR_ALARM               INDENT "Alarme"
#define TR_USRDATA             "Donn\200es"
#define TR_BLADES              INDENT "Pales"
#define TR_SCREEN              "Ecran "
#define TR_SOUND_LABEL         "Son"
#define TR_LENGTH              INDENT "Dur\200e"
#define TR_BEEP_LENGTH         INDENT "Dur\200e bips"
#define TR_SPKRPITCH           INDENT "Tonalit\200"
#define TR_HAPTIC_LABEL        "Vibreur"
#define TR_HAPTICSTRENGTH      INDENT "Force"
#define TR_CONTRAST            "Contraste"
#define TR_ALARMS_LABEL        "Alarmes"
#define TR_BATTERY_RANGE       "Plage batterie"
#define TR_BATTERYWARNING      TR(INDENT "Batterie", INDENT "Batterie faible")
#define TR_INACTIVITYALARM     INDENT "Inactivit\200"
#define TR_MEMORYWARNING       INDENT "M\200moire pleine"
#define TR_ALARMWARNING        TR(INDENT "Silence", INDENT "Sons d\200sactiv\200s")
#define TR_RENAVIG             "Navig EncRot"
#define TR_THROTTLE_LABEL      "Gaz"
#define TR_THROTTLEREVERSE     TR("Inv. gaz", INDENT "Inversion gaz")
#define TR_TIMER_NAME          INDENT "Nom"
#define TR_MINUTEBEEP          TR(INDENT "Bip min.", INDENT "Annonces minutes")
#define TR_BEEPCOUNTDOWN       TR(INDENT "Bip fin", INDENT "Compte \202 rebours")
#define TR_PERSISTENT          TR(INDENT "Persist.", INDENT "Persistant")
#define TR_BACKLIGHT_LABEL     "R\200tro\200clairage"
#define TR_BLDELAY             INDENT "Dur\200e"
#define TR_BLONBRIGHTNESS      INDENT "Luminosit\200 ON"
#define TR_BLOFFBRIGHTNESS     INDENT "Luminosit\200 OFF"
#define TR_BLCOLOR             INDENT "Couleur"
#define TR_SPLASHSCREEN        "Logo d'accueil"
#define TR_THROTTLEWARNING     TR("Alerte gaz", INDENT "Alerte gaz")
#define TR_SWITCHWARNING       TR("Alerte int", INDENT "Pos. interrupteurs")
#define TR_POTWARNING          TR("Alerte pot", INDENT "Pos. potentios")
#define TR_TIMEZONE            "Fuseau horaire"
#define TR_ADJUST_RTC          "Ajust. heure auto"
#define TR_GPS                 "GPS"
#define TR_RXCHANNELORD        TR("Ordre voies RX","Ordre des voies pr\200f\200r\200")
#define TR_STICKS              "Manches"
#define TR_POTS                "Pot."
#define TR_SWITCHES_DELAY      "D\200lai inters son"
#define TR_SLAVE               "El\201ve"
#define TR_MODESRC             "Mode\006% Source"
#define TR_MULTIPLIER          "Multiplieur"
#define TR_CAL                 "Cal"
#define TR_VTRIM               "Trim- +"
#define TR_BG                  "BG:"
  #define TR_MENUTOSTART       CENTER"\006" TR_ENTER " POUR DEBUT"
  #define TR_SETMIDPOINT       CENTER"\010REGLER NEUTRES"
  #define TR_MOVESTICKSPOTS    CENTER"\004BOUGER STICKS/POTS"
#define TR_RXBATT              "Batt.RX"
#define TR_TXnRX               "Tx:\0Rx:"
#define OFS_RX                 4
#define TR_ACCEL               "Acc:"
#define TR_NODATA              CENTER "NO DATA"
#define TR_TOTTM1TM2THRTHP     "\037\146SES\036TM1\037\146TM2\036GAZ\037\146GZ%"
#define TR_US                  "us"
#define TR_MENUTORESET         CENTER TR_ENTER" pour reset"
#define TR_PPM_TRAINER         "TR"
#define TR_CH                  "CH"
#define TR_MODEL               "MODELE"
#define TR_FP                  "PV"
#define TR_MIX                 "MIX"
#define TR_EEPROMLOWMEM        "EEPROM pleine!"
#define TR_ALERT               "\014ALERTE"
#define TR_PRESSANYKEYTOSKIP   "Touche pour ignorer"
#define TR_THROTTLENOTIDLE     "Gaz pas \202 z\200ro"
#define TR_ALARMSDISABLED      "Alarmes D\200sactiv\200es"
#define TR_PRESSANYKEY         TR("Touche pour continuer", "Touche pour continuer")
#define TR_BADEEPROMDATA       "EEPROM corrompue"
#define TR_EEPROMFORMATTING    "Formatage EEPROM"
#define TR_EEPROMOVERFLOW      "D\200passement EEPROM"
#define TR_MENURADIOSETUP      "CONFIG RADIO"
#define TR_MENUDATEANDTIME     "DATE ET HEURE"
#define TR_MENUTRAINER         "ECOLAGE"
#define TR_MENUGLOBALFUNCS     "FONCTIONS GLOBALES"
#define TR_MENUVERSION         "VERSION"
#define TR_MENUDIAG            TR("INTERS", "TEST INTERRUPTEURS")
#define TR_MENUANA             TR("ANAS", "ENTREES ANALOGIQUES")
#define TR_MENUCALIBRATION     "CALIBRATION"
#define TR_TRIMS2OFFSETS       "\005Trims => Subtrims"
#define TR_MENUMODELSEL        "MODELES"
#define TR_MENUSETUP           TR("CONF. MODELE", "CONFIGURATION")
#define TR_MENUFLIGHTPHASE     "PHASE DE VOL"
#define TR_MENUFLIGHTPHASES    "PHASES DE VOL"
#define TR_MENUHELISETUP       TR("CONF.HELI", "CONFIGURATION HELICO")

  #define TR_MENUINPUTS        "DR/EXPO"
  #define TR_MENULIMITS        "LIMITES"

#define TR_MENUCURVES          "COURBES"
#define TR_MENUCURVE           "COURBE"
#define TR_MENULOGICALSWITCH   "INTER LOG."
#define TR_MENULOGICALSWITCHES TR("INTERS LOG.", "INTERS LOGIQUES")
#define TR_MENUCUSTOMFUNC      TR("FONCTIONS SPEC.", "FONCTIONS SPECIALES")
#define TR_MENUCUSTOMSCRIPTS   "SCRIPTS PERSOS"
#define TR_MENUCUSTOMSCRIPT    "SCRIPT PERSO"
#define TR_MENUTELEMETRY       "TELEMESURE"
#define TR_MENUTEMPLATES       "GABARITS"
#define TR_MENUSTAT            TR("STATS", "STATISTIQUES")
#define TR_MENUDEBUG           "DEBUG"
#define TR_RXNUM               TR(INDENT "NumRx", INDENT "No. r\200cepteur")
#define TR_SYNCMENU            "Sync [MENU]"
#define TR_LIMIT               INDENT "Limite"
#define TR_MINRSSI             "RSSI Min."
#define TR_LATITUDE            "Latitude"
#define TR_LONGITUDE           "Longitude"
#define TR_GPSCOORD            TR("Coordonn\200es", "Coordonn\200es GPS")
#define TR_VARIO               TR("Vario", "Variom\201tre")
#define TR_PITCH_AT_ZERO       INDENT "Tonalit\200 au z\200ro"
#define TR_PITCH_AT_MAX        INDENT "Tonalit\200 au max"
#define TR_REPEAT_AT_ZERO      TR(INDENT "Interv. au z\200ro", INDENT "Intervalle au z\200ro")
#define TR_POWEROFF            "\006ETEINDRE ?"
#define TR_SHUTDOWN            "ARRET EN COURS"
#define TR_SAVEMODEL           "Sauvegarde ..."
#define TR_BATT_CALIB          "Calib. Batterie"
#define TR_CURRENT_CALIB       "Calib. Courant"
#define TR_VOLTAGE             TR(INDENT "Tension",INDENT "Source Tension")
#define TR_CURRENT             TR(INDENT "Courant",INDENT "Source Courant")
#define TR_SELECT_MODEL        "S\200lect. Mod\201le"
#define TR_CREATE_MODEL        "Cr\200er Mod\201le"
#define TR_COPY_MODEL          "Copier Mod\201le"
#define TR_MOVE_MODEL          "D\200placer Mod\201le"
#define TR_BACKUP_MODEL        "Archiver Mod\201le"
#define TR_DELETE_MODEL        "Supprimer Mod\201le"
#define TR_RESTORE_MODEL       "Restaurer Mod\201le"
#define TR_SDCARD_ERROR        "Erreur carte SD"
#define TR_NO_SDCARD           "Carte SD muette"
#define TR_SDCARD_FULL         "Carte SD pleine"
#define TR_INCOMPATIBLE        "Incompatible"
#define TR_WARNING             "ALERTE"
#define TR_EEPROMWARN          "EEPROM"
#define TR_EEPROM_CONVERTING   "Conversion EEPROM"
#define TR_THROTTLEWARN        "GAZ"
#define TR_ALARMSWARN          "SON"
#define TR_SWITCHWARN          TR("INTERS","CONTROLES")
#define TR_FAILSAFEWARN        "FAILSAFE"
#define TR_NO_FAILSAFE         "Failsafe pas d\200f."
#define TR_KEYSTUCK            "Touche bloqu\200e"
#define TR_INVERT_THR          "Inverser Gaz?"
#define TR_SPEAKER_VOLUME      INDENT "Volume"
#define TR_LCD                 "Afficheur"
#define TR_BRIGHTNESS          INDENT "Luminosit\200"
#define TR_CPU_TEMP            "Temp. CPU\016>"
#define TR_CPU_CURRENT         "Courant\022>"
#define TR_CPU_MAH             "Consomm."
#define TR_COPROC              "CoProc."
#define TR_COPROC_TEMP         "Temp. MB \016>"
#define TR_CAPAWARNING         INDENT "Capacit\200 Basse"
#define TR_TEMPWARNING         INDENT "Surchauffe"
#define TR_FUNC                TR("Fonc", "Fonction")
#define TR_V1                  "V1"
#define TR_V2                  "V2"
#define TR_DURATION            "Dur\200e"
#define TR_DELAY               "D\200lai"
#define TR_SD_CARD             "Carte SD"
#define TR_SDHC_CARD           "Carte SD-HC"
#define TR_NO_SOUNDS_ON_SD     "Aucun son sur SD"
#define TR_NO_MODELS_ON_SD     "Aucun mod\201le SD"
#define TR_NO_BITMAPS_ON_SD    "Aucun Bitmap SD"
#define TR_NO_SCRIPTS_ON_SD    "Aucun Script SD"
#define TR_SCRIPT_SYNTAX_ERROR "Script syntax error"
#define TR_SCRIPT_PANIC        "Script panic"
#define TR_SCRIPT_KILLED       "Script killed"
#define TR_SCRIPT_ERROR        "Unknown error"
#define TR_PLAY_FILE           "Lire"
#define TR_DELETE_FILE         "Supprimer"
#define TR_COPY_FILE           "Copier"
#define TR_RENAME_FILE         "Renommer"
#define TR_ASSIGN_BITMAP       "S\200lectionner image"
#define TR_EXECUTE_FILE        "Ex\200cuter"
#define TR_REMOVED             " supprim\200"
#define TR_SD_INFO             "Information"
#define TR_SD_FORMAT           "Formater"
#define TR_NA                  "N/D"
#define TR_HARDWARE            "MATERIEL"
#define TR_FORMATTING          "Formatage..."
#define TR_TEMP_CALIB          "Calib. temp"
#define TR_TIME                "Heure"
#if defined(IMPERIAL_UNITS)
#define TR_TXTEMP              "Temp. radio\037\164@F"
#else
#define TR_TXTEMP              "Temp. radio\037\164@C"
#endif
#define TR_BAUDRATE            "Baudrate BT"
#define TR_SD_INFO_TITLE       "INFO SD"
#define TR_SD_TYPE             "Type:"
#define TR_SD_SPEED            "Vitesse:"
#define TR_SD_SECTORS          "Secteurs:"
#define TR_SD_SIZE             "Taille:"
#define TR_TYPE                INDENT "Type"
#define TR_GLOBAL_VARS         "Variables Globales"
#define TR_GLOBAL_V            "V. GLOBALES"
#define TR_GLOBAL_VAR          "Variable globale"
#define TR_MENUGLOBALVARS      "VARIABLES GLOBALES"
#define TR_OWN                 "Pers"
#define TR_DATE                "Date"
#define TR_ROTARY_ENCODER      "Enc.Rot."
#define TR_CHANNELS_MONITOR    "MONITEUR CANAUX"
#define TR_MIXERS_MONITOR      "MONITEUR MIXAGES "
#define TR_PATH_TOO_LONG       "Chemin trop long"
#define TR_VIEW_TEXT           "Voir texte"
#define TR_FLASH_BOOTLOADER    "Flasher BootLoader"
#define TR_FLASH_EXTERNAL_DEVICE "Flasher module externe"
#define TR_FLASH_INTERNAL_MODULE "Flasher module interne"
#define TR_WRITING             "\032Ecriture..."
#define TR_CONFIRM_FORMAT      "Confirmer Formatage?"
#define TR_INTERNALRF          "HF interne"
#define TR_EXTERNALRF          "HF externe"
#define TR_FAILSAFE            TR(INDENT "Failsafe", INDENT "Type failsafe")
#define TR_FAILSAFESET         "REGLAGES FAILSAFE"
#define TR_MENUSENSOR          "CAPTEUR"
#define TR_COUNTRYCODE         TR("Zone g\200o.","Zone g\200ographique")
#define TR_VOICELANG           TR("Langue voix", "Langue annonces vocales")
#define TR_UNITSSYSTEM         "Unit\200s"
#define TR_EDIT                "Editer"
#define TR_INSERT_BEFORE       "Ins\200rer avant"
#define TR_INSERT_AFTER        "Ins\200rer apr\201s"
#define TR_COPY                "Copier"
#define TR_MOVE                "D\200placer"
#define TR_PASTE               "Coller"
#define TR_DELETE              "Supprimer"
#define TR_INSERT              "Ins\200rer"
#define TR_RESET_FLIGHT        TR("R\200init. vol", "R\200initialiser vol")
#define TR_RESET_TIMER1        TR("R\200init. Timer1", "R\200initialiser Timer1")
#define TR_RESET_TIMER2        TR("R\200init. Timer2", "R\200initialiser Timer2")
#define TR_RESET_TIMER3        TR("R\200init. Timer3", "R\200initialiser Timer3")
#define TR_RESET_TELEMETRY     TR("R\200init. T\200l\200m.", "R\200init. T\200l\200mesure")
#define TR_STATISTICS          "Statistiques"
#define TR_SAVE_TIMERS         "Garder Timers"
#define TR_ABOUT_US            "A propos"
#define TR_AND_SWITCH          "ET suppl."
#define TR_SF                  "FS"
#define TR_GF                  "FG"
#define TR_SPEAKER             INDENT "Haut-p."
#define TR_BUZZER              INDENT "Bipeur"
#define TR_BYTES               "bytes"
#define TR_MODULE_BIND         TR("[Bnd]", "[Bind]")
#define TR_MODULE_RANGE        TR("[Prt]", "[Port.]")
#define TR_RESET_BTN           "[RAZ]"
#define TR_SET                 "[D\200f]"
#define TR_TRAINER             "Ecolage"
#define TR_ANTENNAPROBLEM      CENTER "Antenne radio d\200fectueuse!"
#define TR_MODELIDUSED         TR("ID d\200j\202 affect\200", "No de mod\201le d\200j\202 utilis\200")
#define TR_MODULE              INDENT "Type de module"
#define TR_TELEMETRY_TYPE      TR("Type t\200lm.", "Type t\200l\200mesure")
#define TR_TELEMETRY_SENSORS   "Capteurs"
#define TR_VALUE               "Valeur"
#define TR_TOPLCDTIMER         "Timer LCD haut"
#define TR_UNIT                "Unit\200"
#define TR_TELEMETRY_NEWSENSOR TR(INDENT"Nouveau capteur...", INDENT "Ajout d'un nouveau capteur...")
#define TR_CHANNELRANGE        TR(INDENT "Canaux", INDENT "Plage de canaux")
#define TR_LOWALARM            INDENT "Alarme basse"
#define TR_CRITICALALARM       INDENT "Alarme critique"
#define TR_ENABLE_POPUP        "Activer Popup"
#define TR_DISABLE_POPUP       "D\200sactiver Popup"
#define TR_CURVE_PRESET        "Courbe standard..."
#define TR_PRESET              "Pente"
#define TR_MIRROR              "Miroir"
#define TR_CLEAR               "Effacer"
#define TR_RESET               "R\200initialiser"
#define TR_RESET_SUBMENU       "R\200initialiser..."
#define TR_COUNT               "Nb points"
#define TR_PT                  "pt"
#define TR_PTS                 "pts"
#define TR_SMOOTH              "Lissage"
#define TR_COPY_STICKS_TO_OFS  "Manche vers subtrim"
#define TR_COPY_TRIMS_TO_OFS   "Trim vers subtrim"
#define TR_INCDEC              "Inc/D\200crementer"
#define TR_GLOBALVAR           "Var. Globale"
#define TR_MIXSOURCE           "Source mixeur"
#define TR_CONSTANT            "Constante"
#define TR_PERSISTENT_MAH      TR(INDENT "Enr. mAh", INDENT "Enregistrer mAh")
#define TR_PREFLIGHT           "V\200rifications avant vol"
#define TR_CHECKLIST           TR(INDENT "Notes", INDENT "Afficher notes")
#define TR_FAS_OFFSET          TR(INDENT "Corr FAS", INDENT "Correction FAS")
#define TR_UART3MODE           "Port s\200rie"
#define TR_SCRIPT              "Script"
#define TR_INPUTS              "Entr\200es"
#define TR_OUTPUTS             "Sorties"
#define TR_EEBACKUP            "\004[ENTER Long]: Sauvegarder l'EEPROM"
#define TR_FACTORYRESET        "\016[MENU Long]: RAZ d'usine"

#if defined(X_ANY)
  #define TR_X_ANY                        "X ANY"
  #define TR_ACTIVED                      "Actif"
  #define TR_NUMBER                       "Num\200ro"
  #define TR_CHANNEL                      "Voie "
  #define TR_NB_REPEAT                    "Nb r\200p\200tition "
  #define TR_SWITCHES                     "Sw. "
  #define TR_ANGLE_SENSOR                 "0:360"
#endif
