/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /inventory.cc
@author  Cale McCollough <calemccollough.github.io>
@license Copyright (C) 2018-9 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

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
