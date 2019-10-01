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
#ifndef TYPECRAFT_ITEMGROUP_H
#define TYPECRAFT_ITEMGROUP_H

#include "item.h"

namespace typecraft {

class ItemGroup {
 public:
  /* Constructs an ItemGroup with the given max_size. */
  ItemGroup(SI4 max_size);

  /* Destructor */
  ~ItemGroup();

  /* Gets the inventory count. */
  SI4 GetCount();

  /* Gets the max size of the Inventory. */
  SI4 GetSize();

  /* Gets the Item at the given index. */
  Item* GetItem(SI4 index);

  /* Adds the Item at the given index.
  @param  item Th Item to add.
  @return Returns -1 if the Inventory is full. */
  SI4 AddItem(Item* item);

  /* Removes the Item at the given index.
  @param  The index of the Item to remove.
  @return Returns nullptr if the Index is out of bounds. */
  Item* RemoveItem(SI4 index);

  /* Prints the ItemGroup to the console. */
  void Print();

 private:
  _::ArX<Item*> items_;  //< An array of Inventory Items.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_ITEMGROUP_H
