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


#ifndef audio_h
#define audio_h


//audio
#define AUDIO_QUEUE_LENGTH (8)  // 8 seems to suit most alerts
#define BEEP_DEFAULT_FREQ  (70)
#define BEEP_OFFSET        (10)
#define BEEP_KEY_UP_FREQ   (BEEP_DEFAULT_FREQ+5)
#define BEEP_KEY_DOWN_FREQ (BEEP_DEFAULT_FREQ-5)

class audioQueue
{
public:

  audioQueue();

  void play(uint8_t tFreq, uint8_t tLen, uint8_t tPause, uint8_t tFlags=0);
  void pause(uint8_t tLen);

  inline bool busy()
  {
    return (toneTimeLeft > 0);
  }

  void event(uint8_t e, uint8_t f=BEEP_DEFAULT_FREQ);

  inline void driver()
  {
    if (toneFreq) {
      toneCounter += toneFreq;
      if ((toneCounter & 0x80) == 0x80)
        buzzerOn();
      else
        buzzerOff();
    }
  }

  // heartbeat is responsibile for issueing the audio tones and general square waves
  // it is essentially the life of the class.
  void heartbeat();

  inline bool empty()
  {
    return (t_queueRidx == t_queueWidx);
  }

protected:
  inline uint8_t getToneLength(uint8_t tLen);

private:
  uint8_t t_queueRidx;
  uint8_t t_queueWidx;

  uint8_t toneFreq;
  int8_t toneFreqIncr;
  uint8_t toneTimeLeft;
  uint8_t tonePause;

  // vario has less priority
  uint8_t tone2Freq;
  uint8_t tone2TimeLeft;

  // queue arrays
  uint8_t queueToneFreq[AUDIO_QUEUE_LENGTH];
  int8_t queueToneFreqIncr[AUDIO_QUEUE_LENGTH];
  uint8_t queueToneLength[AUDIO_QUEUE_LENGTH];
  uint8_t queueTonePause[AUDIO_QUEUE_LENGTH];
  uint8_t queueToneRepeat[AUDIO_QUEUE_LENGTH];

  uint8_t toneCounter;

};

extern audioQueue audio;

void audioDefevent(uint8_t e);

#if defined(AUDIO) && defined(BUZZER)
#define AUDIO_BUZZER(a, b)  do { a; b; } while(0)
#elif defined(AUDIO)
#define AUDIO_BUZZER(a, b)  a
#else
#define AUDIO_BUZZER(a, b)  b
#endif

#if defined(VOICE)
#define VOICE_AUDIO_BUZZER(v, a, b)  v
#else
#define VOICE_AUDIO_BUZZER(v, a, b)  AUDIO_BUZZER(a, b)
#endif

#define AUDIO_KEYPAD_UP()        AUDIO_BUZZER(audioDefevent(AU_KEYPAD_UP), beep(0))
#define AUDIO_KEYPAD_DOWN()      AUDIO_BUZZER(audioDefevent(AU_KEYPAD_DOWN), beep(0))
#define AUDIO_MENUS()            AUDIO_BUZZER(audioDefevent(AU_MENUS), beep(0))
#define AUDIO_WARNING1()         AUDIO_BUZZER(audioDefevent(AU_WARNING1), beep(3))
#define AUDIO_WARNING2()         AUDIO_BUZZER(audioDefevent(AU_WARNING2), beep(2))
#define AUDIO_ERROR()            AUDIO_BUZZER(audioDefevent(AU_ERROR), beep(4))
#define AUDIO_TADA()             VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TADA),audioDefevent(AU_INACTIVITY),)
#define AUDIO_BYE()
#define AUDIO_TX_BATTERY_LOW()   VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TX_BATTERY_LOW), audioDefevent(AU_TX_BATTERY_LOW), beep(4))
#define AUDIO_INACTIVITY()       VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_INACTIVITY), audioDefevent(AU_INACTIVITY), beep(3))
#define AUDIO_ERROR_MESSAGE(e)   VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT((e)), audioDefevent(AU_ERROR), beep(4))
#define AUDIO_TIMER_MINUTE(t)    VOICE_AUDIO_BUZZER(playDuration(t), audioDefevent(AU_WARNING1), beep(2))
#define AUDIO_TIMER_30()         VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TIMER_30), audioDefevent(AU_TIMER_30), { beepAgain=2; beep(2); })
#define AUDIO_TIMER_20()         VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TIMER_20), audioDefevent(AU_TIMER_20), { beepAgain=1; beep(2); })
#define AUDIO_TIMER_LT10(m, x)   AUDIO_BUZZER(audioDefevent(AU_TIMER_LT10), beep(2))
#define AUDIO_TIMER_00(m)        AUDIO_BUZZER(audioDefevent(AU_TIMER_00), beep(3))
#define AUDIO_MIX_WARNING(x)     AUDIO_BUZZER(audioDefevent(AU_MIX_WARNING_1+x-1), beep(1))
#define AUDIO_POT_MIDDLE()       AUDIO_BUZZER(audioDefevent(AU_POT_MIDDLE), beep(2))
#define AUDIO_VARIO_UP()         audioDefevent(AU_KEYPAD_UP)
#define AUDIO_VARIO_DOWN()       audioDefevent(AU_KEYPAD_DOWN)
#define AUDIO_TRIM_MIDDLE(f)     AUDIO_BUZZER(audio.event(AU_TRIM_MIDDLE, f), beep(2))
#define AUDIO_TRIM_END(f)        AUDIO_BUZZER(audioDefevent(f), beep(2))
#define AUDIO_TRIM(event, f)     AUDIO_BUZZER(audio.event(AU_TRIM_MOVE, f), { if (!IS_KEY_FIRST(event)) warble = true; beep(1); })
#define AUDIO_PLAY(p)            audio.event(p)
#define AUDIO_VARIO(f, t)        audio.play(f, t, 0, PLAY_BACKGROUND)

#define AUDIO_DRIVER()           audio.driver()
#define AUDIO_HEARTBEAT()        audio.heartbeat()
#define IS_AUDIO_BUSY()          audio.busy()
#define AUDIO_RESET()
#define AUDIO_FLUSH()

#define PLAY_PHASE_OFF(phase)
#define PLAY_PHASE_ON(phase)
#define PLAY_SWITCH_MOVED(sw)
#define PLAY_LOGICAL_SWITCH_OFF(sw)
#define PLAY_LOGICAL_SWITCH_ON(sw)
#define PLAY_MODEL_NAME()        VOICE_AUDIO_BUZZER(PUSH_CUSTOM_PROMPT(AU_MODEL_NAME_NUM_FILE,0); PUSH_CUSTOM_PROMPT(AU_MODEL_NAME_NUM_FILE + 1 + g_eeGeneral.currModel,0),,)
#define PLAY_TELEMETRY_GET()     VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TELEMETRY_GET),,)
#define PLAY_TELEMETRY_LOSS()    VOICE_AUDIO_BUZZER(PUSH_SYSTEM_PROMPT(AU_TELEMETRY_LOSS),,)

#endif
