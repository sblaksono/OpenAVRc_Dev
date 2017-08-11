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


#ifndef pulses_avr_h
#define pulses_avr_h

extern uint8_t s_current_protocol;
uint16_t *ppm2MHzRPtr;
extern uint8_t *pulses2MHzWPtr;

extern uint16_t nextMixerEndTime;

extern uint8_t moduleFlag;

#define MAX_MIXER_DELTA (50*16) /* 50ms max as an interval between 2 mixer calculations */
#define SETUP_PULSES_DURATION 1000 // 500us

extern uint16_t dt;


//#ifdef SBUS_PROTOCOL
//#define PULSES_WORD_SIZE  115	// 72=((2+2*6)*10)/2+2
//#define PULSES_BYTE_SIZE  (PULSES_WORD_SIZE * 2)
//#else
#define PULSES_WORD_SIZE  72		// 72=((2+2*6)*10)/2+2
// 72 (A 16 Channel PPM frame has 34 timing events + 1 int terminator).
#define PULSES_BYTE_SIZE  (PULSES_WORD_SIZE * 2)
//#endif

union p2mhz_t
{
  uint16_t pword[PULSES_WORD_SIZE];
  uint8_t  pbyte[PULSES_BYTE_SIZE];  // 144

//  uint8_t packet[40]; // protocol global packet
} pulses2MHz;

//#define PULSES_SIZE 144
// TODO Initialisation
//uint8_t pulses2MHz[PULSES_SIZE] = {0}; // TODO check this length, pulled from er9x, perhaps too big.
//uint8_t * pulses2MHzRPtr = pulses2MHz;


void setupPulses();
void setupPulsesPPM(uint8_t proto);
void DSM2_Init();
void DSM2_Done();

FORCEINLINE bool pulsesStarted();
FORCEINLINE void pausePulses();
FORCEINLINE void resumePulses();


#define SEND_FAILSAFE_NOW()
#define SEND_FAILSAFE_1S()

#endif
/*eof*/
