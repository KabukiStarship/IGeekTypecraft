/* IGeek Typecraft @version 0.x
@link    https://github.com/KabukiStarship/IGeekTypecraft.git
@file    /Recipe.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2015-20 (C) Kabuki Starship <https://kabukistarship.com>.
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, you can obtain 
one at <https://mozilla.org/MPL/2.0/>. */

#ifndef TYPECRAFT_RECIPE_DECL
#define TYPECRAFT_RECIPE_DECL

#include "Item.h"

namespace Typecraft {

/* A Crafting Table recipe.
Recipes do not take up the entire crafting table. For this reason, the
width and height of the recipe are stored. */
class Recipe: public Item {
 public:
  /* Default constructs a empty CraftingTable. */
  Recipe();

  /* Prints the Recipe to the Console. */
  void Print();

 private:
  CHA *name_,                   //< The name of the Recipe.
      *description_;            //< A description of the Recipe.
  ISC width_,                   //< The width of the recipe in ingredients.
      height_;                  //< The height of the recipe in ingredients.
  ItemType ingredients_[3][3];  //< The ingredients.
};

}  // namespace Typecraft
#endif
