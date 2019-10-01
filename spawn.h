/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /spawn.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>
#ifndef TYPECRAFT_SPAWN_H
#define TYPECRAFT_SPAWN_H

#include "item.h"

namespace typecraft {

class Spawn : public Item {
 public:
  /* Constructs a Spawn of the given key. */
  Spawn(const CH1* name);

  /* Gets the type. */
  SI4 GetType();

  /* Sets the type. */
  const CH1* Setype(SI4 type);

  /* Mines a block. */
  void Mine();

 private:
  SI4 type_;  //< What type of Spawn it is.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_SPAWN_H
