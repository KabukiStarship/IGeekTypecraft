/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /_seams/release.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_config.h>

#if SEAM == ASTARTUP_COOKBOOK_RELEASE
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace astartup { namespace cookbook { 
inline const CH1* Release (CH1* seam_log, CH1* seam_end, const CH1* args) {
#if SEAM >= ASTARTUP_COOKBOOK_RELEASE
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo fun.");

#endif
  return 0;
}
}  //< namespace cookbook
}  //< namespace astartup
