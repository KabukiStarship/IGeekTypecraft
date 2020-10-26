/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Inventory.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */

#include "Inventory.h"

namespace Typecraft {

Inventory::Inventory(ISC max_size) {}

ISC Inventory::GetCount() { return 0; }

ISC Inventory::AddItem(Item* item) { return 0; }

Item* Inventory::RemoveItem(ISC index) { return 0; }

void Inventory::DeleteAll() {}

void Inventory::Print() {}

}  // namespace Typecraft
