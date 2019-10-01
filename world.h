/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /world.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef INCLUDED_TYPECRAFT_WORLD
#define INCLUDED_TYPECRAFT_WORLD

#include "chunk.h"

using namespace _::data;

namespace typecraft {

/* A Typecraft World.

All world's start out as a N x N Square Matrix. Once a player gets one maximum
view distance from an unexplored Chunk, a new chunk is added onto the map.

# Example

```
                         x=0
-N  |==|==|==|==|==|==|==|==|==|==|==|==|==|==|==| +N
    |
    |                         +==+
    |                         |  |
    |                         +==+
    |                         |  |
    |  +==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
    |  +==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |        |  |  |  |  |  |  |  |  |  |  |
    |        +==+==+==+==+==+==+==+==+==+==+
    |        |  |  |  |  |  |  |  |  |  |  |
    |        +==+==+==+==+==+==+==+==+==+==+
y=0 |        |  |  |  |  |  |  |  |  |  |  |
    |        +==+==+==+==+==+==+==+==+==+==+
    |  +==+==+==+==+==+==+==+==+==+==+==+==+==+
    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
    |  +==+==+==+==+==+==+==+==+==+==+==+==+==+
    |              +==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |              |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
    |              +==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |              |  |
    |              +==+
    |              |  |
    |        +==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |        |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
    |        +==+==+==+==+==+==+==+==+==+==+==+==+==+==+
    |                +==+
    |                |  |
    |                +==+
```

*/
class World {
 public:
  enum {
    kHeight = 256,  //< The height of a MineCraft world: 256.
  };

  /* Constructs a world with the default size. */
  World();

  /* Gets inventory count. */
  SI4 GetCount();

  /* Adds an Item. */
  SI4 AddItem(Item* item);

  /* Removes the Item with the given index.
  @param  The index of the Item to remove.
  @return Returns nullptr if the index is out of bounds and a pointer to
  the Item it removed upon success. */
  Item* RemoveItem(SI4 index);

  /* Deletes the entire World. */
  void DeleteAll();

  /* Prints the World to the console. */
  void Print();

 private:
  const CH1* name_;  //< The World's name.
  SI4 difficulty_;   //< The difficulty level.
  Chunk* zone;       //< The current Chunk the PLayer is in.
  ArX<Chunk*>
      quad_[4];  //< The 4 Quadrant Chunks ordered like a Cartesian plane.
};

}  // namespace typecraft
#endif
