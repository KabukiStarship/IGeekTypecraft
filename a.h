/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /A.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#include <_Config.h>
#ifndef TYPECRAFT_A_DECL
#define TYPECRAFT_A_DECL
#include <Script2/Room.hpp>
namespace Typecraft {

/* The A in A*B. */
struct A : public _::Room {
 public:
  A() : A(1024) {}
};

}  // namespace Typecraft
#endif
