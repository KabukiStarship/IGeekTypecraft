/* TypeCraft - Teaching Typing through Mining and Crafting.
@link    https://github.com/kabuki-starship/kabuki-toolkit
@file    /project/typecraft/cchunkrow.h
@author  Cale McCollough <cale.mccollough@gmail.com>
@license Copyright (C) 2014-2017 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

#pragma once
#include <pch.h>
#ifndef TYPECRAFT_CHUNKROW_H
#define TYPECRAFT_CHUNKROW_H

#include "cchunk.h"

namespace typecraft {

/* A row of Chunk(s) that can grow on the positive and negative directions.
    Chunks are designed to grow in the Cartesian quadrants 1 and 2, or 3 and 4.
*/
class ChunkRow {
 public:
  enum {

  };

  ChunkRow(SI4 max_size);

  /* Gets inventory count. */
  SI4 GetCount();

  /* Adds a Chunk to the top of the Stack. */
  SI4 AddChunk(Chunk* chunk);

  /* Gets the Chunk at the given Index.
      @return Returns null if the index is out of bounds. */
  Chunk* GetChunk(SI4 index);

  /* Prints the World to the console. */
  void Print();

 private:
  SI4 row_;                  //< The row number of the chunk.
  _::ArX<Chunk*> cunks_[4];  //< A stack of Chunks.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_CHUNKROW_H
