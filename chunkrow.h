/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /ChunkRow.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_CHUNKROW_DECL
#define TYPECRAFT_CHUNKROW_DECL
#include "Chunk.h"
namespace Typecraft {

/* A row of Chunk(s) that can grow on the positive and negative directions.
Chunks are designed to grow in the Cartesian quadrants 1 and 2, or 3 and 4.
*/
class ChunkRow {
 public:
  enum {

  };

  ChunkRow(ISC max_size);

  /* Gets inventory count. */
  ISC GetCount();

  /* Adds a Chunk to the top of the Stack. */
  ISC AddChunk(Chunk* chunk);

  /* Gets the Chunk at the given Index.
      @return Returns null if the index is out of bounds. */
  Chunk* GetChunk(ISC index);

  /* Prints the World to the console. */
  void Print();

 private:
  ISC row_;                  //< The row number of the chunk.
  _::ArX<Chunk*> cunks_[4];  //< A stack of Chunks.
};

}  // namespace Typecraft
#endif
