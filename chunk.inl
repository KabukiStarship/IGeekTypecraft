/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /inventory.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include <_module_config.h>
#include "chunk.h"

namespace typecraft {

Chunk::Chunk() {}

SI4 Chunk::GetX() { return x_; }

SI4 Chunk::GetY() { return y_; }

SI4 Chunk::GetZ() { return z_; }

Block* Chunk::GetBlock(SI4 x, SI4 y, SI4 z) {
  if (x < 0) return nullptr;
  if (y < 0) return nullptr;
  if (z < 0) return nullptr;
  if (x >= kSize) return nullptr;
  if (y >= kSize) return nullptr;
  if (z >= kHeight) return nullptr;
  return blocks_[x][y][z];
}

void Chunk::SetBlock(Block* block, SI4 const x, SI4 y, SI4 z) {
  if (x < 0) return;
  if (y < 0) return;
  if (z < 0) return;
  if (x >= kSize) return;
  if (y >= kSize) return;
  if (z >= kHeight) return;
  blocks_[x][y][z]->Change(block);
}

}  // namespace typecraft
