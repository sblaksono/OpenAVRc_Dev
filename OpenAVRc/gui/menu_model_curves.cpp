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


#include "../OpenAVRc.h"
#include "menu_model.h"

uint8_t s_curveChan;

int16_t curveFn(int16_t x)
{
  return applyCustomCurve(x, s_curveChan);
}

struct point_t {
  coord_t x;
  coord_t y;
};

point_t getPoint(uint8_t i)
{
  point_t result = {0, 0};
  CurveInfo crv = curveInfo(s_curveChan);
  int8_t *points = crv.crv;
  bool custom = crv.custom;
  uint8_t count = crv.points;
  if (i < count) {
    result.x = X0-1-WCHART+i*WCHART/(count/2);
    result.y = (LCD_H-1) - (100 + points[i]) * (LCD_H-1) / 200;
    if (custom && i>0 && i<count-1)
      result.x = X0-1-WCHART + (100 + (100 + points[count+i-1]) * (2*WCHART)) / 200;
  }
  return result;
}

void DrawCurve(uint8_t offset=0)
{
  DrawFunction(curveFn, offset);

  uint8_t i = 0;
  do {
    point_t point = getPoint(i);
    i++;
    if (point.x == 0) break;
    lcdDrawFilledRect(point.x-offset, point.y-1, 3, 3, SOLID, FORCE); // do markup square
  } while(1);
}

bool moveCurve(uint8_t index, int8_t shift, int8_t custom=0)
{
  if (g_model.curves[MAX_CURVES-1] + shift > NUM_POINTS-5*MAX_CURVES) {
    AUDIO_WARNING2();
    return false;
  }

  int8_t *crv = curveAddress(index);
  if (shift < 0) {
    for (uint8_t i=0; i<custom; i++)
      crv[i] = crv[2*i];
  }

  int8_t *nextCrv = curveAddress(index+1);
  memmove(nextCrv+shift, nextCrv, 5*(MAX_CURVES-index-1)+g_model.curves[MAX_CURVES-1]-g_model.curves[index]);
  if (shift < 0) memclear(&g_model.points[NUM_POINTS-1] + shift, -shift);
  while (index<MAX_CURVES)
    g_model.curves[index++] += shift;

  for (uint8_t i=0; i<custom-2; i++)
    crv[custom+i] = -100 + ((200 * (i+1) + custom/2) / (custom-1)) ;

  eeDirty(EE_MODEL);
  return true;
}

void menuModelCurveOne(uint8_t event)
{
  TITLE(STR_MENUCURVE);
  lcdDrawNumberNAtt(PSIZE(TR_MENUCURVE)*FW+1, 0, s_curveChan+1, INVERS|LEFT);

  CurveInfo crv = curveInfo(s_curveChan);

  switch(event) {
  case EVT_ENTRY:
    s_editMode = 1;
    break;
    CASE_EVT_ROTARY_BREAK
  case EVT_KEY_BREAK(KEY_ENTER):
    if (s_editMode <= 0)
      menuHorizontalPosition = 0;
    if (s_editMode == 1 && crv.custom)
      s_editMode = 2;
    else
      s_editMode = 1;
    break;
  case EVT_KEY_LONG(KEY_ENTER):
    if (s_editMode <= 0) {
      if (int8_t(++menuHorizontalPosition) > 4)
        menuHorizontalPosition = -4;
      for (uint8_t i=0; i<crv.points; i++)
        crv.crv[i] = (i-(crv.points/2)) * int8_t(menuHorizontalPosition) * 50 / (crv.points-1);
      eeDirty(EE_MODEL);
      killEvents(event);
    }
    break;
  case EVT_KEY_BREAK(KEY_EXIT):
    if (s_editMode > 0) {
      if (--s_editMode == 0)
        menuHorizontalPosition = 0;
    } else {
      popMenu();
    }
    break;

  /* CASE_EVT_ROTARY_LEFT */
  case EVT_KEY_REPT(KEY_LEFT):
  case EVT_KEY_FIRST(KEY_LEFT):
    if (s_editMode==1 && menuHorizontalPosition>0) menuHorizontalPosition--;
    if (s_editMode <= 0) {
      if (crv.custom) {
        moveCurve(s_curveChan, -crv.points+2);
      } else if (crv.points > MIN_POINTS) {
        moveCurve(s_curveChan, -1, (crv.points+1)/2);
      } else {
        AUDIO_WARNING2();
      }
      return;
    }
    break;

  /* CASE_EVT_ROTARY_RIGHT */
  case EVT_KEY_REPT(KEY_RIGHT):
  case EVT_KEY_FIRST(KEY_RIGHT):
    if (s_editMode==1 && menuHorizontalPosition<(crv.points-1)) menuHorizontalPosition++;
    if (s_editMode <= 0) {
      if (!crv.custom) {
        moveCurve(s_curveChan, crv.points-2, crv.points);
      } else if (crv.points < MAX_POINTS) {
        if (moveCurve(s_curveChan, 1)) {
          for (int8_t i=crv.points+crv.points-2; i>=0; i--) {
            if (i%2)
              crv.crv[i] = (crv.crv[i/2] + crv.crv[1+i/2]) / 2;
            else
              crv.crv[i] = crv.crv[i/2];
          }
        }
      } else {
        AUDIO_WARNING2();
      }
    }
    break;
  }

  lcdDrawTextLeft(7*FH, STR_TYPE);
  uint8_t attr = (s_editMode <= 0 ? INVERS : 0);
  lcdDrawNumberNAtt(5*FW-2, 7*FH, crv.points, LEFT|attr);
  lcdDrawTextAtt(lcdLastPos, 7*FH, crv.custom ? PSTR("pt'") : PSTR("pt"), attr);

  DrawCurve();

  if (s_editMode>0) {
    uint8_t i = menuHorizontalPosition;
    point_t point = getPoint(i);

    if (s_editMode==1 || !BLINK_ON_PHASE) {
      // do selection square
      lcdDrawFilledRect(point.x-1, point.y-2, 5, 5, SOLID, FORCE);
      lcdDrawFilledRect(point.x, point.y-1, 3, 3, SOLID);
    }

    int8_t x = -100 + 200*i/(crv.points-1);
    if (crv.custom && i>0 && i<crv.points-1) x = crv.crv[crv.points+i-1];
    lcdDrawText(7, 2*FH, PSTR("x="));
    lcdDrawNumberNAtt(7+2*FW, 2*FH, x, LEFT);
    lcdDrawText(7, 3*FH, PSTR("y="));
    lcdDrawNumberNAtt(7+2*FW, 3*FH, crv.crv[i], LEFT);
    lcdDrawRect(3, 1*FH+4, 7*FW-2, 3*FH-2);

    if (p1valdiff || event==EVT_KEY_FIRST(KEY_DOWN) || event==EVT_KEY_FIRST(KEY_UP) || event==EVT_KEY_REPT(KEY_DOWN) || event==EVT_KEY_REPT(KEY_UP))
      CHECK_INCDEC_MODELVAR(event, crv.crv[i], -100, 100);  // edit Y on up/down

    if (i>0 && i<crv.points-1 && s_editMode==2 && (event==EVT_KEY_FIRST(KEY_LEFT) || event==EVT_KEY_FIRST(KEY_RIGHT) || event==EVT_KEY_REPT(KEY_LEFT) || event==EVT_KEY_REPT(KEY_RIGHT)))
      CHECK_INCDEC_MODELVAR(event, crv.crv[crv.points+i-1], i==1 ? -99 : crv.crv[crv.points+i-2]+1, i==crv.points-2 ? 99 : crv.crv[crv.points+i]-1);  // edit X on left/right
  }
}

#if defined(GVARS)
#define CURVE_SELECTED() (sub >= 0 && sub < MAX_CURVES)
#define GVAR_SELECTED()  (sub >= MAX_CURVES)
#else
#define CURVE_SELECTED() (sub >= 0)
#endif

void menuModelCurvesAll(uint8_t event)
{
  SIMPLE_MENU(STR_MENUCURVES, menuTabModel, e_CurvesAll, 1+MAX_CURVES);

  int8_t  sub = menuVerticalPosition - 1;

  switch (event) {
#if defined(ROTARY_ENCODER_NAVIGATION)
  case EVT_ROTARY_BREAK:
#endif
  case EVT_KEY_FIRST(KEY_RIGHT):
  case EVT_KEY_FIRST(KEY_ENTER):
    if (CURVE_SELECTED() && !READ_ONLY()) {
      s_curveChan = sub;
      pushMenu(menuModelCurveOne);
    }
    break;
  }

  for (uint8_t i=0; i<LCD_LINES-1; i++) {
    coord_t y = MENU_HEADER_HEIGHT + 1 + i*FH;
    uint8_t k = i + menuVerticalOffset;
    uint8_t attr = (sub == k ? INVERS : 0);
    {
      lcdDrawStringWithIndex(0, y, STR_CV, k+1, attr);
    }
  }

  if (CURVE_SELECTED()) {
    s_curveChan = sub;
    DrawCurve(23);
  }
}
