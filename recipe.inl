/* Unseenia: Typecraft @version 0.x
@link    https://github.com/kabuki-starship/unseenia.typecraft.git
@file    /crafting_table.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright 2015-9 (C) Kabuki Starship <kabukistarship.com>; all rights 
reserved (R). This Source Code Form is subject to the terms of the Mozilla 
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#ifndef TYPECRAFT_RECIPE_H
#define TYPECRAFT_RECIPE_H

#include "item.h"

namespace typecraft {

/* A Crafting Table recipe.
Recipes do not take up the entire crafting table. For this reason, the
width and height of the recipe are stored.
*/
class Recipe : public Item {
 public:
  /* Default constructs a empty CraftingTable. */
  Recipe();

  /* Prints the Recipe to the Console. */
  void Print();

 private:
  CH1 *name_,                  //< The name of the Recipe.
      *description_;            //< A description of the Recipe.
  SI4 width_,                   //< The width of the recipe in ingredients.
      height_;                  //< The height of the recipe in ingredients.
  ItemType ingredients_[3][3];  //< The ingredients.
};

}  // namespace typecraft
#endif  //< TYPECRAFT_RECIPE_H
