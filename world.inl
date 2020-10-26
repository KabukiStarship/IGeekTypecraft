/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /World.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */

#include "World.h"

namespace Typecraft {

World::World() {}

ISC World::GetCount() { return count_; }

ISC World::AddItem(Item* item);

Item* World::RemoveItem(ISC index);

void World::DeleteAll() {}

}  // namespace Typecraft
