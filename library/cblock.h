/* TypeCraft - Teaching Typing through Mining and Crafting.
@link    https://github.com/kabuki-starship/kabuki-toolkit
@file    /project/typecraft/block.h
@author  Cale McCollough <cale.mccollough@gmail.com>
@license Copyright (C) 2014-2017 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

#pragma once
#include <pch.h>
#ifndef TYPECRAFT_BLOCK_H
#define TYPECRAFT_BLOCK_H

#include "citem.h"

using namespace _::data;

namespace typecraft {

/* A MineCraft block that may contain items when it breaks.
    When you break a Block in MineCraft, it may give you zero or more Item(s)
    all of the same type.
*/
class Block : public Item {
 public:
  /* Constructor creates a Block with the given count of the same Item. */
  Block(SI4 type, SI4 variant, SI4 count = 0);

  /* Gets the type of Block. */
  SI4 GetNumItems();

  /* Gets the type. */
  Item::Type Getype();

  /* Mines a block.
      @return Returns 0 if not mined and */
  SI4 Mine(Item* tool);

 private:
  SI4 strenth_,          //< Block strength.
      regeneration_;     //< How fast the block regenerates.
  Array<Item*>* items_;  //< Items contained in this block.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_BLOCK_H
