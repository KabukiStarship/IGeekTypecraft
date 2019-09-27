/* Unseenia: Typecraft (C)(R) @version 0.x
@link    https://github.com/kabuki-starship/typecraft.git
@file    /block.cc
@author  Cale McCollough <calemccollough.github.io>
@license Copyright (C) 2018-9 Cale McCollough <calemccollough.github.io>;
All right reserved (R). Licensed under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at www.apache.org/licenses/LICENSE-2.0.
Unless required by applicable law or agreed to in writing, software distributed
under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License. */

#include "block.h"

namespace typecraft {

Block::Block(SI4 type, SI4 variant, SI4 count) {}

SI4 Block::GetNumItems() { return items->GetCount(); }

ItemType Block::Getype() { return type_; }

SI4 Block::Mine(Item* tool) { return 0; }

}  // namespace typecraft
