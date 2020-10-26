/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Inventory.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_INVENTORY_H
#define TYPECRAFT_INVENTORY_H
//
#include "ItemGroup.h"
namespace Typecraft {
class Inventory {
 public:
  /* Constructs an Inventory with the given max size. */
  Inventory(ISC max_size);

  /* Gets inventory count. */
  ISC GetCount();

  /* Adds an Item. */
  ISC AddItem(Item* item);

  /* Removes the Item with the given index.
      @param  The index of the Item to remove.
      @return Returns nullptr if the index is out of bounds and a pointer to
              the Item it removed upon success. */
  Item* RemoveItem(ISC index);

  /* Deletes the entire Inventory. */
  void DeleteAll();

  /* Prints the Inventory to the console. */
  void Print(_::Log& log);

 private:
  ArX<ItemGroup*> items_;  //< An array of Inventory Items.
};

}  // namespace Typecraft
#endif
