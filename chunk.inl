/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Chunk.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#include "Chunk.h"
namespace Typecraft {

Chunk::Chunk() {}

ISC Chunk::GetX() { return x_; }

ISC Chunk::GetY() { return y_; }

ISC Chunk::GetZ() { return z_; }

Block* Chunk::GetBlock(ISC x, ISC y, ISC z) {
  if (x < 0) return nullptr;
  if (y < 0) return nullptr;
  if (z < 0) return nullptr;
  if (x >= kSize) return nullptr;
  if (y >= kSize) return nullptr;
  if (z >= kHeight) return nullptr;
  return blocks_[x][y][z];
}

void Chunk::SetBlock(Block* block, ISC const x, ISC y, ISC z) {
  if (x < 0) return;
  if (y < 0) return;
  if (z < 0) return;
  if (x >= kSize) return;
  if (y >= kSize) return;
  if (z >= kHeight) return;
  blocks_[x][y][z]->Change(block);
}

}  // namespace Typecraft
