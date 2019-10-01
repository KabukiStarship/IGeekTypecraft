/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /ccrafting_table.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef TYPECRAFT_CRAFTINGTABLE_H
#define TYPECRAFT_CRAFTINGTABLE_H

#include "item.h"

namespace typecraft {

/* Crafting Table. */
class CraftingTable : public Item {
 public:
  /* Default constructs a empty CraftingTable. */
  CraftingTable();

  /* Sets the Item at the given x and y coordinate. */
  Item* GetItem(SI4 x, SI4 y);

  /* Sets the Item at the given x and y coordinate. */
  Item* SetItem(SI4 x, SI4 y, Item* block);

  /* Prints the CraftingTable to the console. */
  void Print();

 private:
  Item* blocks_[3][3];
};

}  // namespace typecraft
#endif  //< TYPECRAFT_CRAFTINGTABLE_H
