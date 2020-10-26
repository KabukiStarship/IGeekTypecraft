/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Spawn.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_SPAWN_DECL
#define TYPECRAFT_SPAWN_DECL
#include "Item.h"
namespace Typecraft {

class Spawn : public Item {
 public:
  /* Constructs a Spawn of the given key. */
  Spawn(const CHA* name);

  /* Gets the type. */
  ISC GetType();

  /* Sets the type. */
  const CHA* Setype(ISC type);

  /* Mines a block. */
  void Mine();

 private:
  ISC type_;  //< What type of Spawn it is.
};

}  // namespace Typecraft
#endif
