/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /inventory.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef TYPECRAFT_INVENTORY_H
#define TYPECRAFT_INVENTORY_H

#include "itemgroup.h"

namespace typecraft {

class Inventory {
 public:
  /* Constructs an Inventory with the given max size. */
  Inventory(SI4 max_size);

  /* Gets inventory count. */
  SI4 GetCount();

  /* Adds an Item. */
  SI4 AddItem(Item* item);

  /* Removes the Item with the given index.
      @param  The index of the Item to remove.
      @return Returns nullptr if the index is out of bounds and a pointer to
              the Item it removed upon success. */
  Item* RemoveItem(SI4 index);

  /* Deletes the entire Inventory. */
  void DeleteAll();

  /* Prints the Inventory to the console. */
  void Print(_::Log& log);

 private:
  ArX<ItemGroup*> items_;  //< An array of Inventory Items.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_INVENTORY_H
