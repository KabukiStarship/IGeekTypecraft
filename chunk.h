/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /cchunk.h
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

#ifndef TYPECRAFT_CHUNK_H
#define TYPECRAFT_CHUNK_H

#include "block.h"
#include "entity.h"

namespace typecraft {

class Chunk {
 public:
  enum {
    kSize = 16,     //< The width and height of a Chunk in Block(s).
    kHeight = 256,  //< The height of a Chunk in Block(s).
  };

  /* A chunk of Clocks. */
  Chunk();

  /* Gets the X coordinate. */
  inline SI4 GetX();

  /* Gets the Y coordinate. */
  inline SI4 GetY();

  /* Gets the Y coordinate. */
  inline SI4 GetZ();

  /* Gets inventory count. */
  inline Block* GetBlock(SI4 x_, SI4 y_, SI4 z_);

  /* Adds set's the block at the given index. */
  inline BOL SetBlock(Block* block, SI4 const x, SI4 y, SI4 z);

 private:
  SI4 x_,                 //< The farthest x position to the left.
      y_,                 //< The farthest y position to the fight.
      z_;                 //< The lowest z value.
  ArX<Item*> items_;      //< The Item(s) in the Chunk.
  ArX<Entity*> entities;  //< The Entity(s) in the Chunk.
  Block* blocks_[kSize][kSize][kHeight];
  //< The Block(s) in the Chunk.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_CHUNK_H
