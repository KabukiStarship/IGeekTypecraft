/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /ItemGroup.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#include "ItemGroup.h"
namespace Typecraft {

ItemGroup::ItemGroup(ISC max_size) {}

ItemGroup::~ItemGroup() {}

ISC ItemGroup::GetCount() { return 0; }

ISC ItemGroup::GetSize() { return 0; }

Item* ItemGroup::GetItem(ISC index) { return items[index]; }

ISC ItemGroup::AddItem(Item* item) { return 0; }

Item* ItemGroup::RemoveItem(ISC index) { return nullptr; }

void Print() {}

}  // namespace Typecraft
