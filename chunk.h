/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /chunk.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

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
