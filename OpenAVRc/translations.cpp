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


#include "OpenAVRc.h"

#define ISTR(x) LEN_##x TR_##x

// The non-0-terminated-strings
const pm_char STR_OPEN9X[] PROGMEM =
  ISTR(OFFON)
  ISTR(MMMINV)
  ISTR(NCHANNELS)
#if !defined(GRAPHICS)
  ISTR(VBEEPLEN)
#endif
  ISTR(VBEEPMODE)
#if defined(ROTARY_ENCODERS)
  ISTR(VRENAVIG)
#endif
#if defined(ROTARY_ENCODER_NAVIGATION)
  ISTR(VRENCODERS)
#endif
  ISTR(TRNMODE)
  ISTR(TRNCHN)
  ISTR(VTRIMINC)
  ISTR(RETA123)
#if defined(MULTIMODULE)
  ISTR(MULTIPROTOCOLS)
#endif
  ISTR(POSNEG)
  ISTR(VBLMODE)
  ISTR(VCURVEFUNC)
  ISTR(VMLTPX)
  ISTR(VMLTPX2)
  ISTR(VMIXTRIMS)
  ISTR(VCSWFUNC)
  ISTR(VFSWFUNC)
  ISTR(VFSWRESET)
  ISTR(FUNCSOUNDS)
  ISTR(VTELEMCHNS)
#if defined(FRSKY)
  ISTR(VTELEMUNIT)
  ISTR(VALARM)
  ISTR(VALARMFN)
  ISTR(VTELPROTO)
  ISTR(GPSFORMAT)
  ISTR(AMPSRC)
  ISTR(VARIOSRC)
  ISTR(VTELEMSCREENTYPE)
#endif
#if defined(TEMPLATES)
  ISTR(VTEMPLATES)
#endif
#if defined(HELI)
  ISTR(VSWASHTYPE)
#endif
  ISTR(VKEYS)
  ISTR(VSWITCHES)
  ISTR(VSRCRAW)
  ISTR(VTMRMODES)
  ISTR(DATETIME)
  ISTR(VPERSISTENT)
  ;

// The 0-terminated-strings
const pm_char STR_POPUPS[] PROGMEM = TR_POPUPS;
#if !defined(OFS_EXIT)
const pm_char STR_EXIT[] PROGMEM = TR_EXIT;
#endif
const pm_char STR_MENUWHENDONE[] PROGMEM = TR_MENUWHENDONE;
const pm_char STR_FREE[] PROGMEM = TR_FREE;
const pm_char STR_DELETEMODEL[] PROGMEM = TR_DELETEMODEL;
const pm_char STR_COPYINGMODEL[] PROGMEM = TR_COPYINGMODEL;
const pm_char STR_MOVINGMODEL[] PROGMEM = TR_MOVINGMODEL;
const pm_char STR_LOADINGMODEL[] PROGMEM = TR_LOADINGMODEL;
const pm_char STR_NAME[] PROGMEM = TR_NAME;
const pm_char STR_BITMAP[] PROGMEM = TR_BITMAP;
const pm_char STR_TIMER[] PROGMEM = TR_TIMER;
const pm_char STR_ELIMITS[] PROGMEM = TR_ELIMITS;
const pm_char STR_ETRIMS[] PROGMEM = TR_ETRIMS;
const pm_char STR_TRIMINC[] PROGMEM = TR_TRIMINC;
const pm_char STR_DISPLAY_TRIMS[] PROGMEM = TR_DISPLAY_TRIMS;
const pm_char STR_TTRACE[] PROGMEM = TR_TTRACE;
const pm_char STR_TSWITCH[] PROGMEM = TR_TSWITCH;
const pm_char STR_TTRIM[] PROGMEM = TR_TTRIM;
const pm_char STR_BEEPCTR[] PROGMEM = TR_BEEPCTR;
const pm_char STR_USE_GLOBAL_FUNCS[] PROGMEM = TR_USE_GLOBAL_FUNCS;
const pm_char STR_PROTO[] PROGMEM = TR_PROTO;
const pm_char STR_PPMFRAME[] PROGMEM = TR_PPMFRAME;
const pm_char STR_MS[] PROGMEM = TR_MS;
const pm_char STR_SWITCH[] PROGMEM = TR_SWITCH;
const pm_char STR_TRIMS[] PROGMEM = TR_TRIMS;
const pm_char STR_FADEIN[] PROGMEM = TR_FADEIN;
const pm_char STR_FADEOUT[] PROGMEM = TR_FADEOUT;
const pm_char STR_DEFAULT[] PROGMEM = TR_DEFAULT;
const pm_char STR_CHECKTRIMS[] PROGMEM = TR_CHECKTRIMS;
#ifdef HELI
const pm_char STR_SWASHTYPE[] PROGMEM = TR_SWASHTYPE;
const pm_char STR_COLLECTIVE[] PROGMEM = TR_COLLECTIVE;
const pm_char STR_AILERON[] PROGMEM = TR_AILERON;
const pm_char STR_ELEVATOR[] PROGMEM = TR_ELEVATOR;
const pm_char STR_SWASHRING[] PROGMEM = TR_SWASHRING;
const pm_char STR_ELEDIRECTION[] PROGMEM = TR_ELEDIRECTION;
const pm_char STR_AILDIRECTION[] PROGMEM = TR_AILDIRECTION;
const pm_char STR_COLDIRECTION[] PROGMEM = TR_COLDIRECTION;
#endif
const pm_char STR_MODE[] PROGMEM = TR_MODE;
#if defined(AUDIO) && defined(BUZZER)
const pm_char STR_SPEAKER[] PROGMEM = TR_SPEAKER;
const pm_char STR_BUZZER[] PROGMEM = TR_BUZZER;
#endif
const pm_char STR_NOFREEEXPO[] PROGMEM = TR_NOFREEEXPO;
const pm_char STR_NOFREEMIXER[] PROGMEM = TR_NOFREEMIXER;
const pm_char STR_INSERTMIX[] PROGMEM = TR_INSERTMIX;
const pm_char STR_EDITMIX[] PROGMEM = TR_EDITMIX;
const pm_char STR_SOURCE[] PROGMEM = TR_SOURCE;
const pm_char STR_WEIGHT[] PROGMEM = TR_WEIGHT;
const pm_char STR_EXPO[] PROGMEM = TR_EXPO;
const pm_char STR_SIDE[] PROGMEM = TR_SIDE;
const pm_char STR_DIFFERENTIAL[] PROGMEM = TR_DIFFERENTIAL;
const pm_char STR_OFFSET[] PROGMEM = TR_OFFSET;
const pm_char STR_TRIM[] PROGMEM = TR_TRIM;
const pm_char STR_DREX[] PROGMEM = TR_DREX;
const pm_char STR_CURVE[] PROGMEM = TR_CURVE;
const pm_char STR_FLMODE[] PROGMEM = TR_FLMODE;
const pm_char STR_MIXWARNING[] PROGMEM = TR_MIXWARNING;
const pm_char STR_OFF[] PROGMEM = TR_OFF;
const pm_char STR_MULTPX[] PROGMEM = TR_MULTPX;
const pm_char STR_DELAYDOWN[] PROGMEM = TR_DELAYDOWN;
const pm_char STR_DELAYUP[] PROGMEM = TR_DELAYUP;
const pm_char STR_SLOWDOWN[] PROGMEM = TR_SLOWDOWN;
const pm_char STR_SLOWUP[] PROGMEM = TR_SLOWUP;
const pm_char STR_MIXER[] PROGMEM = TR_MIXER;
const pm_char STR_CV[] PROGMEM = TR_CV;
const pm_char STR_GV[] PROGMEM = TR_GV;
const pm_char STR_ACHANNEL[] PROGMEM = TR_ACHANNEL;
const pm_char STR_RANGE[] PROGMEM = TR_RANGE;
const pm_char STR_CENTER[] PROGMEM = TR_CENTER;
const pm_char STR_BAR[] PROGMEM = TR_BAR;
const pm_char STR_ALARM[] PROGMEM = TR_ALARM;
const pm_char STR_USRDATA[] PROGMEM = TR_USRDATA;
const pm_char STR_BLADES[] PROGMEM = TR_BLADES;
const pm_char STR_SCREEN[] PROGMEM = TR_SCREEN;
const pm_char STR_SOUND_LABEL[] PROGMEM = TR_SOUND_LABEL;
const pm_char STR_LENGTH[] PROGMEM = TR_LENGTH;
#if defined(AUDIO)
const pm_char STR_SPKRPITCH[] PROGMEM = TR_SPKRPITCH;
#endif
#if defined(HAPTIC)
const pm_char STR_HAPTIC_LABEL[] PROGMEM = TR_HAPTIC_LABEL;
//const pm_char STR_HAPTICSTRENGTH[] PROGMEM = TR_HAPTICSTRENGTH;
#endif
const pm_char STR_CONTRAST[] PROGMEM = TR_CONTRAST;
const pm_char STR_ALARMS_LABEL[] PROGMEM = TR_ALARMS_LABEL;
#if defined(BATTGRAPH)
const pm_char STR_BATTERY_RANGE[] PROGMEM = TR_BATTERY_RANGE;
#endif
const pm_char STR_BATTERYWARNING[] PROGMEM = TR_BATTERYWARNING;
const pm_char STR_INACTIVITYALARM[] PROGMEM = TR_INACTIVITYALARM;
const pm_char STR_MEMORYWARNING[] PROGMEM = TR_MEMORYWARNING;
const pm_char STR_ALARMWARNING[] PROGMEM = TR_ALARMWARNING;
#if defined(ROTARY_ENCODERS)
const pm_char STR_RENAVIG[] PROGMEM = TR_RENAVIG;
#endif
//const pm_char STR_THROTTLEREVERSE[] PROGMEM = TR_THROTTLEREVERSE;
const pm_char STR_TIMER_NAME[] PROGMEM = TR_TIMER_NAME;
const pm_char STR_MINUTEBEEP[] PROGMEM = TR_MINUTEBEEP;
const pm_char STR_BEEPCOUNTDOWN[] PROGMEM = TR_BEEPCOUNTDOWN;
const pm_char STR_PERSISTENT[] PROGMEM = TR_PERSISTENT;
const pm_char STR_BACKLIGHT_LABEL[] PROGMEM = TR_BACKLIGHT_LABEL;
const pm_char STR_BLDELAY[] PROGMEM = TR_BLDELAY;

#if defined(PWM_BACKLIGHT)
const pm_char STR_BLONBRIGHTNESS[] PROGMEM = TR_BLONBRIGHTNESS;
const pm_char STR_BLOFFBRIGHTNESS[] PROGMEM = TR_BLOFFBRIGHTNESS;
#endif

const pm_char STR_SPLASHSCREEN[] PROGMEM = TR_SPLASHSCREEN;
const pm_char STR_THROTTLEWARNING[] PROGMEM = TR_THROTTLEWARNING;
const pm_char STR_SWITCHWARNING[] PROGMEM = TR_SWITCHWARNING;
#ifdef FRSKY
const pm_char STR_TIMEZONE[] PROGMEM = TR_TIMEZONE;
const pm_char STR_ADJUST_RTC[] PROGMEM = TR_ADJUST_RTC;
const pm_char STR_GPS[] PROGMEM = TR_GPS;
const pm_char STR_GPSCOORD[] PROGMEM = TR_GPSCOORD;
const pm_char STR_VARIO[] PROGMEM = TR_VARIO;
const pm_char STR_PITCH_AT_ZERO[] PROGMEM = TR_PITCH_AT_ZERO;
const pm_char STR_PITCH_AT_MAX[] PROGMEM = TR_PITCH_AT_MAX;
const pm_char STR_REPEAT_AT_ZERO[] PROGMEM = TR_REPEAT_AT_ZERO;
const pm_char STR_MODELISON[] PROGMEM = TR_MODELISON;
#endif
const pm_char STR_RXCHANNELORD[] PROGMEM = TR_RXCHANNELORD;
const pm_char STR_STICKS[] PROGMEM = TR_STICKS;
const pm_char STR_SWITCHES_DELAY[] PROGMEM = TR_SWITCHES_DELAY;
const pm_char STR_SLAVE[] PROGMEM = TR_SLAVE;
const pm_char STR_MODESRC[] PROGMEM = TR_MODESRC;
const pm_char STR_MULTIPLIER[] PROGMEM = TR_MULTIPLIER;
const pm_char STR_CAL[] PROGMEM = TR_CAL;
const pm_char STR_VTRIM[] PROGMEM = TR_VTRIM;
const pm_char STR_BG[] PROGMEM = TR_BG;
const pm_char STR_MENUTOSTART[] PROGMEM = TR_MENUTOSTART;
const pm_char STR_SETMIDPOINT[] PROGMEM = TR_SETMIDPOINT;
const pm_char STR_MOVESTICKSPOTS[] PROGMEM = TR_MOVESTICKSPOTS;
const pm_char STR_RXBATT[] PROGMEM = TR_RXBATT;
const pm_char STR_TX[] PROGMEM = TR_TXnRX;
const pm_char STR_ACCEL[] PROGMEM = TR_ACCEL;
const pm_char STR_NODATA[] PROGMEM = TR_NODATA;
const pm_char STR_TOTTM1TM2THRTHP[] PROGMEM = TR_TOTTM1TM2THRTHP;
const pm_char STR_US[] PROGMEM = TR_US;
const pm_char STR_MENUTORESET[] PROGMEM = TR_MENUTORESET;
const pm_char STR_PPM_TRAINER[] PROGMEM = TR_PPM_TRAINER;
const pm_char STR_CH[] PROGMEM = TR_CH;
const pm_char STR_MODEL[] PROGMEM = TR_MODEL;
const pm_char STR_FP[] PROGMEM = TR_FP;
const pm_char STR_MIX[] PROGMEM = TR_MIX;
const pm_char STR_EEPROMLOWMEM[] PROGMEM = TR_EEPROMLOWMEM;
const pm_char STR_ALERT[] PROGMEM = TR_ALERT;
const pm_char STR_PRESSANYKEYTOSKIP[] PROGMEM = TR_PRESSANYKEYTOSKIP;
const pm_char STR_THROTTLENOTIDLE[] PROGMEM = TR_THROTTLENOTIDLE;
const pm_char STR_ALARMSDISABLED[] PROGMEM = TR_ALARMSDISABLED;
const pm_char STR_PRESSANYKEY[] PROGMEM = TR_PRESSANYKEY;
const pm_char STR_BADEEPROMDATA[] PROGMEM = TR_BADEEPROMDATA;
const pm_char STR_EEPROMFORMATTING[] PROGMEM = TR_EEPROMFORMATTING;
const pm_char STR_EEPROMOVERFLOW[] PROGMEM = TR_EEPROMOVERFLOW;
const pm_char STR_TRIMS2OFFSETS[] PROGMEM = TR_TRIMS2OFFSETS;
const pm_char STR_MENURADIOSETUP[] PROGMEM = TR_MENURADIOSETUP;

const pm_char STR_FAS_OFFSET[] PROGMEM = TR_FAS_OFFSET;

#if defined(SPIMODULES)
const pm_char STR_SPIM[] PROGMEM = TR_SPIM;
const pm_char STR_RFPOWER[] PROGMEM = TR_RFPOWER;
#endif
#if defined(MULTIMODULE)
const pm_char STR_MULTI_CUSTOM[] PROGMEM = TR_MULTI_CUSTOM;
#endif
#if defined(MULTIMODULE) || defined(SPIMODULES)
const pm_char STR_SUBTYPE[] PROGMEM = TR_SUBTYPE;
const pm_char STR_MULTI_VIDFREQ[] PROGMEM = TR_MULTI_VIDFREQ;
const pm_char STR_RFTUNEFINE[] PROGMEM = TR_RFTUNEFINE;
//const pm_char STR_RFTUNECOARSE[] PROGMEM = TR_RFTUNECOARSE;
const pm_char STR_TELEMETRY[] PROGMEM = INDENT TR_TELEMETRY;
const pm_char STR_MULTI_RFPOWER[] PROGMEM = TR_MULTI_RFPOWER;
const pm_char STR_MULTI_SERVOFREQ[] PROGMEM = TR_MULTI_SERVOFREQ;
const pm_char STR_MULTI_OPTION[] PROGMEM = TR_MULTI_OPTION;
const pm_char STR_MULTI_DSM_AUTODTECT[] PROGMEM = TR_MULTI_DSM_AUTODTECT;
const pm_char STR_AUTOBIND[] PROGMEM = TR_AUTOBIND;
const pm_char STR_MULTI_LOWPOWER[] PROGMEM = TR_MULTI_LOWPOWER;
#endif

const pm_char STR_MENUDATEANDTIME[] PROGMEM = TR_MENUDATEANDTIME;
//const pm_char STR_FREERAMINB[] PROGMEM = "Free Ram\037\124b";

const pm_char STR_MENUTRAINER[] PROGMEM = TR_MENUTRAINER;
const pm_char STR_MENUGLOBALFUNCS[] PROGMEM = TR_MENUGLOBALFUNCS;
const pm_char STR_MENUVERSION[] PROGMEM = TR_MENUVERSION;
const pm_char STR_MENUDIAG[] PROGMEM = TR_MENUDIAG;
const pm_char STR_MENUANA[] PROGMEM = TR_MENUANA;
const pm_char STR_MENUCALIBRATION[] PROGMEM = TR_MENUCALIBRATION;

const pm_char STR_MENUMODELSEL[] PROGMEM = TR_MENUMODELSEL;
const pm_char STR_MENUSETUP[] PROGMEM = TR_MENUSETUP;
const pm_char STR_MENUFLIGHTPHASE[] PROGMEM = TR_MENUFLIGHTPHASE;
const pm_char STR_MENUFLIGHTPHASES[] PROGMEM = TR_MENUFLIGHTPHASES;

#ifdef HELI
const pm_char STR_MENUHELISETUP[] PROGMEM = TR_MENUHELISETUP;
#endif

const pm_char STR_MENUINPUTS[] PROGMEM = TR_MENUINPUTS;
const pm_char STR_MENULIMITS[] PROGMEM = TR_MENULIMITS;
const pm_char STR_MENUCURVES[] PROGMEM = TR_MENUCURVES;
const pm_char STR_MENUCURVE[] PROGMEM = TR_MENUCURVE;
const pm_char STR_MENULOGICALSWITCH[] PROGMEM = TR_MENULOGICALSWITCH;
const pm_char STR_MENULOGICALSWITCHES[] PROGMEM = TR_MENULOGICALSWITCHES;
const pm_char STR_MENUCUSTOMFUNC[] PROGMEM = TR_MENUCUSTOMFUNC;


#if defined(FRSKY)
const pm_char STR_MENUTELEMETRY[] PROGMEM = TR_MENUTELEMETRY;
const pm_char STR_LIMIT[] PROGMEM = TR_LIMIT;
#endif

#if defined(TEMPLATES)
const pm_char STR_MENUTEMPLATES[] PROGMEM = TR_MENUTEMPLATES;
#endif

const pm_char STR_MENUSTAT[] PROGMEM = TR_MENUSTAT;
const pm_char STR_MENUDEBUG[] PROGMEM = TR_MENUDEBUG;
const pm_char STR_MENUGLOBALVARS[] PROGMEM = TR_MENUGLOBALVARS;


const pm_char STR_INVERT_THR[] PROGMEM = TR_INVERT_THR;
const pm_char STR_AND_SWITCH[] PROGMEM = TR_AND_SWITCH;
const pm_char STR_SF[] PROGMEM = TR_SF;
const pm_char STR_GF[] PROGMEM = TR_GF;

const pm_char STR_SHUTDOWN[] PROGMEM = TR_SHUTDOWN;
const pm_char STR_SAVEMODEL[] PROGMEM = TR_SAVEMODEL;


const pm_char STR_BATT_CALIB[] PROGMEM = TR_BATT_CALIB;

#if defined(FRSKY)
const pm_char STR_MINRSSI[] PROGMEM = TR_MINRSSI;
const pm_char STR_LATITUDE[] PROGMEM = TR_LATITUDE;
const pm_char STR_LONGITUDE[] PROGMEM = TR_LONGITUDE;
const pm_char STR_VOLTAGE[] PROGMEM = TR_VOLTAGE;
const pm_char STR_CURRENT[] PROGMEM = TR_CURRENT;
#endif


#if defined(NAVIGATION_MENUS)
const pm_char STR_SELECT_MODEL[] PROGMEM = TR_SELECT_MODEL;
const pm_char STR_CREATE_MODEL[] PROGMEM = TR_CREATE_MODEL;
const pm_char STR_COPY_MODEL[] PROGMEM = TR_COPY_MODEL;
const pm_char STR_MOVE_MODEL[] PROGMEM = TR_MOVE_MODEL;
const pm_char STR_DELETE_MODEL[] PROGMEM = TR_DELETE_MODEL;
const pm_char STR_EDIT[] PROGMEM = TR_EDIT;
const pm_char STR_INSERT_BEFORE[] PROGMEM = TR_INSERT_BEFORE;
const pm_char STR_INSERT_AFTER[] PROGMEM = TR_INSERT_AFTER;
const pm_char STR_COPY[] PROGMEM = TR_COPY;
const pm_char STR_MOVE[] PROGMEM = TR_MOVE;
const pm_char STR_PASTE[] PROGMEM = TR_PASTE;
const pm_char STR_INSERT[] PROGMEM = TR_INSERT;
const pm_char STR_DELETE[] PROGMEM = TR_DELETE;
const pm_char STR_RESET_FLIGHT[] PROGMEM = TR_RESET_FLIGHT;
const pm_char STR_RESET_TIMER1[] PROGMEM = TR_RESET_TIMER1;
const pm_char STR_RESET_TIMER2[] PROGMEM = TR_RESET_TIMER2;
const pm_char STR_RESET_TIMER3[] PROGMEM = TR_RESET_TIMER3;
const pm_char STR_RESET_TELEMETRY[] PROGMEM = TR_RESET_TELEMETRY;
const pm_char STR_STATISTICS[] PROGMEM = TR_STATISTICS;
const pm_char STR_SAVE_TIMERS[] PROGMEM = TR_SAVE_TIMERS;
#endif

const pm_char STR_RESET_BTN[] PROGMEM = TR_RESET_BTN;

#if defined(SDCARD)
const pm_char STR_INCOMPATIBLE[] PROGMEM = TR_INCOMPATIBLE;
const pm_char STR_BACKUP_MODEL[] PROGMEM = TR_BACKUP_MODEL;
const pm_char STR_RESTORE_MODEL[] PROGMEM = TR_RESTORE_MODEL;
const pm_char STR_SDCARD_ERROR[] PROGMEM = TR_SDCARD_ERROR;
const pm_char STR_NO_SDCARD[] PROGMEM = TR_NO_SDCARD;
const pm_char STR_SDCARD_FULL[] PROGMEM = TR_SDCARD_FULL;
const pm_char STR_LOGS_PATH[] PROGMEM = LOGS_PATH;
const pm_char STR_LOGS_EXT[] PROGMEM = LOGS_EXT;
const pm_char STR_MODELS_PATH[] PROGMEM = MODELS_PATH;
const pm_char STR_MODELS_EXT[] PROGMEM = MODELS_EXT;
#endif

const pm_char STR_WARNING[] PROGMEM = TR_WARNING;
const pm_char STR_EEPROMWARN[] PROGMEM = TR_EEPROMWARN;
const pm_char STR_EEPROM_CONVERTING[] PROGMEM = TR_EEPROM_CONVERTING;
const pm_char STR_THROTTLEWARN[] PROGMEM = TR_THROTTLEWARN;
const pm_char STR_ALARMSWARN[] PROGMEM = TR_ALARMSWARN;
const pm_char STR_SWITCHWARN[] PROGMEM = TR_SWITCHWARN;
const pm_char STR_FAILSAFEWARN[] PROGMEM = TR_FAILSAFEWARN;
const pm_char STR_NO_FAILSAFE[] PROGMEM = TR_NO_FAILSAFE;
const pm_char STR_KEYSTUCK[] PROGMEM = TR_KEYSTUCK;

const pm_char STR_SPEAKER_VOLUME[] PROGMEM = TR_SPEAKER_VOLUME;
const pm_char STR_LCD[] PROGMEM = TR_LCD;
const pm_char STR_FUNC[] PROGMEM = TR_FUNC;
const pm_char STR_V1[] PROGMEM = TR_V1;
const pm_char STR_V2[] PROGMEM = TR_V2;
const pm_char STR_DURATION[] PROGMEM = TR_DURATION;
const pm_char STR_DELAY[] PROGMEM = TR_DELAY;
const pm_char STR_SD_CARD[] PROGMEM = TR_SD_CARD;
const pm_char STR_SDHC_CARD[] PROGMEM = TR_SDHC_CARD;
const pm_char STR_NO_SOUNDS_ON_SD[] PROGMEM = TR_NO_SOUNDS_ON_SD;
const pm_char STR_NO_MODELS_ON_SD[] PROGMEM = TR_NO_MODELS_ON_SD;
const pm_char STR_NO_BITMAPS_ON_SD[] PROGMEM = TR_NO_BITMAPS_ON_SD;
const pm_char STR_NO_SCRIPTS_ON_SD[] PROGMEM = TR_NO_SCRIPTS_ON_SD;
const pm_char STR_SCRIPT_SYNTAX_ERROR[] PROGMEM = TR_SCRIPT_SYNTAX_ERROR;
const pm_char STR_SCRIPT_PANIC[] PROGMEM = TR_SCRIPT_PANIC;
const pm_char STR_SCRIPT_KILLED[] PROGMEM = TR_SCRIPT_KILLED;
const pm_char STR_SCRIPT_ERROR[] PROGMEM = TR_SCRIPT_ERROR;
const pm_char STR_PLAY_FILE[] PROGMEM = TR_PLAY_FILE;
const pm_char STR_ASSIGN_BITMAP[] PROGMEM = TR_ASSIGN_BITMAP;
const pm_char STR_EXECUTE_FILE[] PROGMEM = TR_EXECUTE_FILE;
const pm_char STR_DELETE_FILE[] PROGMEM = TR_DELETE_FILE;
const pm_char STR_COPY_FILE[] PROGMEM = TR_COPY_FILE;
const pm_char STR_RENAME_FILE[] PROGMEM = TR_RENAME_FILE;
const pm_char STR_SD_INFO[] PROGMEM = TR_SD_INFO;
const pm_char STR_SD_FORMAT[] PROGMEM = TR_SD_FORMAT;
const pm_char STR_REMOVED[] PROGMEM = TR_REMOVED;
const pm_char STR_NA[] PROGMEM = TR_NA;
const pm_char STR_HARDWARE[] PROGMEM = TR_HARDWARE;
const pm_char STR_FORMATTING[] PROGMEM = TR_FORMATTING;
const pm_char STR_TEMP_CALIB[] PROGMEM = TR_TEMP_CALIB;
const pm_char STR_TIME[] PROGMEM = TR_TIME;
const pm_char STR_BAUDRATE[] PROGMEM = TR_BAUDRATE;
const pm_char STR_SD_INFO_TITLE[] PROGMEM = TR_SD_INFO_TITLE;
const pm_char STR_SD_TYPE[] PROGMEM = TR_SD_TYPE;
const pm_char STR_SD_SPEED[] PROGMEM = TR_SD_SPEED;
const pm_char STR_YEAR[] PROGMEM = "Year:";
const pm_char STR_SD_SIZE[] PROGMEM = TR_SD_SIZE;
const pm_char STR_TYPE[] PROGMEM = TR_TYPE;
const pm_char STR_GLOBAL_VARS[] PROGMEM = TR_GLOBAL_VARS;
const pm_char STR_GLOBAL_V[] PROGMEM = TR_GLOBAL_V;
const pm_char STR_GLOBAL_VAR[] PROGMEM = TR_GLOBAL_VAR;
const pm_char STR_OWN[] PROGMEM = TR_OWN;
const pm_char STR_ROTARY_ENCODER[] PROGMEM = TR_ROTARY_ENCODER;
const pm_char STR_DATE[] PROGMEM = TR_DATE;
const pm_char STR_CHANNELS_MONITOR[] PROGMEM = TR_CHANNELS_MONITOR;
const pm_char STR_MIXERS_MONITOR[] PROGMEM = TR_MIXERS_MONITOR;
const pm_char STR_PATH_TOO_LONG[] PROGMEM = TR_PATH_TOO_LONG;
const pm_char STR_VIEW_TEXT[] PROGMEM = TR_VIEW_TEXT;
const pm_char STR_FLASH_BOOTLOADER[] PROGMEM = TR_FLASH_BOOTLOADER;
const pm_char STR_FLASH_INTERNAL_MODULE[] PROGMEM = TR_FLASH_INTERNAL_MODULE;
const pm_char STR_FLASH_EXTERNAL_DEVICE[] PROGMEM = TR_FLASH_EXTERNAL_DEVICE;
const pm_char STR_WRITING[] PROGMEM = TR_WRITING;
const pm_char STR_CONFIRM_FORMAT[] PROGMEM = TR_CONFIRM_FORMAT;
const pm_char STR_EEBACKUP[] PROGMEM = TR_EEBACKUP;
const pm_char STR_FACTORYRESET[] PROGMEM = TR_FACTORYRESET;
const pm_char STR_BLCOLOR[]  PROGMEM = TR_BLCOLOR;
const pm_char STR_DUMMY[]  PROGMEM = INDENT"***";
const pm_char STR_POWEROFF[]  PROGMEM = TR_POWEROFF;
const pm_char STR_RFID[]  PROGMEM = "RFID  :";
const pm_char STR_BIND[]  PROGMEM = "    -BIND-     ";

#if defined(SPIMODULES)
const pm_char STR_mW[]  PROGMEM = "mW";
#endif

#if MENUS_LOCK == 1
const pm_char STR_UNLOCKED[] PROGMEM = TR_UNLOCKED;
const pm_char STR_MODS_FORBIDDEN[] PROGMEM = TR_MODS_FORBIDDEN;
#endif

#if defined(DSM2_SERIAL) || defined(SPIMODULES) || defined(MULTIMODULE)
const pm_char STR_MODULE_RANGE[] PROGMEM = TR_MODULE_RANGE;
const pm_char STR_MODULE_BIND[] PROGMEM = TR_MODULE_BIND;
const pm_char STR_RXNUM[] PROGMEM = TR_RXNUM;
const pm_char STR_DSM_PROTOCOLS[] PROGMEM = TR_DSM_PROTOCOLS;
#endif

#if defined(X_ANY)
const pm_char STR_X_ANY[] PROGMEM = TR_X_ANY;
const pm_char STR_ACTIVED[] PROGMEM = INDENT TR_ACTIVED;
const pm_char STR_NUMBER[] PROGMEM = TR_NUMBER;
const pm_char STR_CHANNEL[] PROGMEM = INDENT TR_CHANNEL;
const pm_char STR_NB_REPEAT[] PROGMEM = INDENT TR_NB_REPEAT;
const pm_char STR_SWITCHES[] PROGMEM = INDENT TR_SWITCHES;
const pm_char STR_ANGLE_SENSOR[] PROGMEM = INDENT TR_ANGLE_SENSOR;
const pm_char STR_POTS[] PROGMEM = INDENT TR_POTS;
#endif

// New Debug Menu
const pm_char STR_COMPUTE[] PROGMEM = "Compute";
const pm_char STR_MIN[] PROGMEM = "Min";
const pm_char STR_MAX[] PROGMEM = "Max";
const pm_char STR_PROTOCOL[] PROGMEM = "Protocol\037\162us";
const pm_char STR_GUIBUILD[] PROGMEM = "Gui Build\037\162ms";
const pm_char STR_LCDDRAW[] PROGMEM = "Lcd Send\037\162ms";
const pm_char STR_MIXERlowcase[] PROGMEM = "Mixer\037\162ms";
const pm_char STR_FREESRAM[] PROGMEM = "Free Sram\037\170b";

#if defined(RTCLOCK)
const pm_char STR_TXTEMP[] PROGMEM = TR_TXTEMP;
#endif
