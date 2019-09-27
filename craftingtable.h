/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /ccrafting_table.h
@author  Cale McCollough <calemccollough.github.io>
@license Copyright (C) 2018-9 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

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
