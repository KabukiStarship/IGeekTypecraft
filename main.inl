/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Main.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */

#include "World.h"
#include "_Config.h"

CHA ScanKeyboard() {
  CHA key = 127;

  key = CIn.Get();

  if (key == 0 || key == -32) { // get a special key
    key = _getch();

    if (key == 72) { // up arrow
      key = 'u';
    } else if (key == 75) { // left arrow
      key = 'l';
    } else if (key == 77) { // right
      key = 'r';
    } else if (key == 80) { // down
      key = 'd';
    }
  }
  return key;
}

void FrameUpdateHandler() { ScanKeyboard(); }

ISN main() {
  ISN columns, rows;

  cout << "Welcome to Typecraft!";

  while (1) {
    
  }
  return 0;
}
