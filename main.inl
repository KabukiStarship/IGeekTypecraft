/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /main.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include "../Library/world.h"
#include "_module_config.h"

CH1 ScanKeyboard() {
  CH1 key = 127;

  key = _getch();

  if (key == 0 || key == -32)  // get a special key
  {
    key = _getch();

    if (key == 72)  // up arrow
    {
      key = 'u';
    } else if (key == 75)  // left arrow
    {
      key = 'l';
    } else if (key == 77)  // right
    {
      key = 'r';
    } else if (key == 80)  // down
    {
      key = 'd';
    }
  }
  return key;
}

void FrameUpdateHandler() { ScanKeyboard(); }

SI4 main() {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  SI4 columns, rows;

  cout << "Welcome to Typecraft!";

  while (1) {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
  }
  return 0;
}
