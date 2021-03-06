/********************************************************************** 
  This file is part of OpenPop

  OpenPop is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  OpenPop is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OpenPop.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/

#ifndef _GAME_TRIBE_H_
#define _GAME_TRIBE_H_

#include "Spell_Type.h"
#include "Spell.h"

namespace Game
{

class Tribe
{
public:
	uint8			mID;		//1 - Dakini, 2 - Chumara etc.

	Spell			mSpells[SPELL_COUNT];

	Tribe();
	~Tribe();
};

}

#endif