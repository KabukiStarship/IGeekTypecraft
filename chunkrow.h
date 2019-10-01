/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /chunk_row.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef TYPECRAFT_CHUNKROW_H
#define TYPECRAFT_CHUNKROW_H

#include "chunk.h"

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
