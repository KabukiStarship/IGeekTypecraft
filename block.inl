/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /block.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include "block.h"

namespace typecraft {

Block::Block(SI4 type, SI4 variant, SI4 count) {}

SI4 Block::GetNumItems() { return items->GetCount(); }

ItemType Block::Getype() { return type_; }

SI4 Block::Mine(Item* tool) { return 0; }

}  // namespace typecraft
