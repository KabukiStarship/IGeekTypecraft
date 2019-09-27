/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /game.h
@author  Cale McCollough <calemccollough.github.io>
@license Copyright (C) 2018-9 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

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
