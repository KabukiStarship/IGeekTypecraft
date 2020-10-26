/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /World.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_WORLD_DECL
#define TYPECRAFT_WORLD_DECL
#include "Chunk.h"
namespace Typecraft {

/* A Typecraft World.
All world's start out as a N x N Square Matrix. Once a player gets one maximum
view distance from an unexplored Chunk, a new chunk is added onto the map.

# Example

```AsciiArt
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
  ISC GetCount();

  /* Adds an Item. */
  ISC AddItem(Item* item);

  /* Removes the Item with the given index.
  @param  The index of the Item to remove.
  @return Returns nullptr if the index is out of bounds and a pointer to
  the Item it removed upon success. */
  Item* RemoveItem(ISC index);

  /* Deletes the entire World. */
  void DeleteAll();

  /* Prints the World to the console. */
  void Print();

 private:
  const CHA* name_;  //< The World's name.
  ISC difficulty_;   //< The difficulty level.
  Chunk* zone;       //< The current Chunk the PLayer is in.
  ArX<Chunk*>
      quad_[4];  //< The 4 Quadrant Chunks ordered like a Cartesian plane.
};

}  // namespace Typecraft
#endif
