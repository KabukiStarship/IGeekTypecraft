/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /inventory.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include "inventory.h"

namespace typecraft {

Inventory::Inventory(SI4 max_size) {}

SI4 Inventory::GetCount() { return 0; }

SI4 Inventory::AddItem(Item* item) { return 0; }

Item* Inventory::RemoveItem(SI4 index) { return 0; }

void Inventory::DeleteAll() {}

void Inventory::Print() {}

}  // namespace typecraft
