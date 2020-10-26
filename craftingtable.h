/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /CraftingTable.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_CRAFTINGTABLE_DECL
#define TYPECRAFT_CRAFTINGTABLE_DECL
#include "Item.h"
namespace Typecraft {
/* Crafting Table. */
class CraftingTable : public Item {
 public:
  /* Default constructs a empty CraftingTable. */
  CraftingTable();

  /* Sets the Item at the given x and y coordinate. */
  Item* GetItem(ISC x, ISC y);

  /* Sets the Item at the given x and y coordinate. */
  Item* SetItem(ISC x, ISC y, Item* block);

  /* Prints the CraftingTable to the console. */
  void Print();

 private:
  Item* blocks_[3][3];
};

}  // namespace Typecraft
#endif
