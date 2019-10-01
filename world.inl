/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /world.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include "world.h"

namespace typecraft {

World::World() {}

SI4 World::GetCount() { return count_; }

SI4 World::AddItem(Item* item);

Item* World::RemoveItem(SI4 index);

void World::DeleteAll() {}

void World::Print(_::Log& log) {}

}  // namespace typecraft
