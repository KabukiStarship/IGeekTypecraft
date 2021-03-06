/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /_module_config.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once

#ifndef _MODULE_CONFIG
#define _MODULE_CONFIG 1

#include <script2/_module_config_header.inl>

#define SEAM SCRIPT2_LIST

#define ASSEMBLY_TYPE ASSEMBLE_EXE 1
#define SCRIPT2_RUN_TESTS YES_0

#define ALU_SIZE ALU_64_BIT
#define CPU_ENDIAN CPU_ENDIAN_LITTLE

#define USING_CONSOLE YES_0

#define USING_UTF8 YES_0
#define USING_UTF16 YES_0
#define USING_UTF32 YES_0
#define LARGEST_CHAR STRING_TYPE_1
#define USING_STR STRING_TYPE_1

#define USING_FP 8
#define USING_FP4 YES_0
#define USING_FP8 YES_0

#define USING_16_BYTE_POD_TYPES NO_0

#include <script2/_module_config_footer.inl>

#endif
