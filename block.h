/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /block.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>

#ifndef UNSEENIA_TYPECRAFT_BLOCK
#define UNSEENIA_TYPECRAFT_BLOCK

#include "item.h"

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
