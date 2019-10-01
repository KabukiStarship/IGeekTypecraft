/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /game.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef TYPECRAFT_GAME_H
#define TYPECRAFT_GAME_H

#include "entity.h"
#include "world.h"

namespace typecraft {

class Game {
 public:
  /* Creates a new games with the default settings. */
  Game();

 private:
  SI4 x_,  //< The screen x coordinate.
      y_,  //< The screen y coordinate.
      z_;  //< The screen z coordinate.

  Entity* player_;  //< The player under control.
  World* world_;    //< The current world.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_GAME_H
