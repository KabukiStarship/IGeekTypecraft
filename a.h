/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /a.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_module_config.h>

#ifndef INCLUDED_TYPECRAFT_A
#define INCLUDED_TYPECRAFT_A 1

#include <script2/room.hpp>

namespace typecraft {

/* The A in A*B.
 */
struct A : public _::Room {
 public:
  A() : A(1024) {}
};

}  // namespace typecraft
#endif
