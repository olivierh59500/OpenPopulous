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

#ifndef _GRAPHICS_HFXDEFS_H_
#define _GRAPHICS_HFXDEFS_H_

namespace Graphics
{
	enum HFX_SPRITES
	{
		HFX_SPRITE_SPELL_SHOT_BLUE				= 54,
		HFX_SPRITE_SPELL_SHOT_EMPTY,
		HFX_SPRITE_SPELL_SHOT_RED				= 65,
		HFX_SPRITE_SPELL_SHOT_EMPTY_TEMP,

		HFX_SPRITE_BUTTON_SHOT_SPELL_ARMAGEDDON	= 354,
		HFX_SPRITE_BUTTON_SHOT_SPELL_BLAST,
		HFX_SPRITE_BUTTON_SHOT_SPELL_LIGHTNING,
		HFX_SPRITE_BUTTON_SHOT_SPELL_TORNADO,
		HFX_SPRITE_BUTTON_SHOT_SPELL_SWARM,
		HFX_SPRITE_BUTTON_SHOT_SPELL_INVISIBILLITY,
		HFX_SPRITE_BUTTON_SHOT_SPELL_HYPNOTISE,
		HFX_SPRITE_BUTTON_SHOT_SPELL_FIRESTORM,
		HFX_SPRITE_BUTTON_SHOT_SPELL_GHOST_ARMY,
		HFX_SPRITE_BUTTON_SHOT_SPELL_ERODE,
		HFX_SPRITE_BUTTON_SHOT_SPELL_SWAMP,
		HFX_SPRITE_BUTTON_SHOT_SPELL_LANDBRIDGE,
		HFX_SPRITE_BUTTON_SHOT_SPELL_ANGEL_OF_DEATH,
		HFX_SPRITE_BUTTON_SHOT_SPELL_EARTHQUAKE,
		HFX_SPRITE_BUTTON_SHOT_SPELL_FLATTEN,
		HFX_SPRITE_BUTTON_SHOT_SPELL_VOLCANO,
		HFX_SPRITE_BUTTON_SHOT_SPELL_CONVERT,
		HFX_SPRITE_BUTTON_SHOT_SPELL_TELEPORT,

		HFX_SPRITE_BUTTON_SPELL_ARMAGEDDON,
		HFX_SPRITE_BUTTON_SPELL_BLAST,
		HFX_SPRITE_BUTTON_SPELL_LIGHTNING,
		HFX_SPRITE_BUTTON_SPELL_TORNADO,
		HFX_SPRITE_BUTTON_SPELL_SWARM,
		HFX_SPRITE_BUTTON_SPELL_INVISIBILLITY,
		HFX_SPRITE_BUTTON_SPELL_HYPNOTISE,
		HFX_SPRITE_BUTTON_SPELL_FIRESTORM,
		HFX_SPRITE_BUTTON_SPELL_GHOST_ARMY,
		HFX_SPRITE_BUTTON_SPELL_ERODE,
		HFX_SPRITE_BUTTON_SPELL_SWAMP,
		HFX_SPRITE_BUTTON_SPELL_LANDBRIDGE,
		HFX_SPRITE_BUTTON_SPELL_ANGEL_OF_DEATH,
		HFX_SPRITE_BUTTON_SPELL_EARTHQUAKE,
		HFX_SPRITE_BUTTON_SPELL_FLATTEN,
		HFX_SPRITE_BUTTON_SPELL_VOLCANO,
		HFX_SPRITE_BUTTON_SPELL_CONVERT,
		HFX_SPRITE_BUTTON_SPELL_TELEPORT,




		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_NW	= 510,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_NE,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_SW,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_SE,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_N,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_S,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_W,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_E,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_2_C,

		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_NW,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_NE,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_SW,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_SE,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_N,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_S,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_W,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_E,
		HFX_SPRITE_SPELL_BUTTON_TEMPORARY_C,

		HFX_SPRITE_BUTTON_UNIT_SHAMAN			= 664,
		HFX_SPRITE_BUTTON_DOWN_UNIT_SHAMAN,
		HFX_SPRITE_BUTTON_UNIT_BRAVE,
		HFX_SPRITE_BUTTON_DOWN_UNIT_BRAVE,
		HFX_SPRITE_BUTTON_UNIT_WARRIOR,
		HFX_SPRITE_BUTTON_DOWN_UNIT_WARRIOR,
		HFX_SPRITE_BUTTON_UNIT_FIREWARRIOR,
		HFX_SPRITE_BUTTON_DOWN_UNIT_FIREWARRIOR,
		HFX_SPRITE_BUTTON_UNIT_PREACHER,
		HFX_SPRITE_BUTTON_DOWN_UNIT_PREACHER,
		HFX_SPRITE_BUTTON_UNIT_SPY,
		HFX_SPRITE_BUTTON_DOWN_UNIT_SPY,

		HFX_SPRITE_TAB_BUILDINGS,
		HFX_SPRITE_TAB_DOWN_BUILDINGS,
		HFX_SPRITE_TAB_SPELLS,
		HFX_SPRITE_TAB_DOWN_SPELLS,
		HFX_SPRITE_TAB_UNITS,
		HFX_SPRITE_TAB_DOWN_UNITS,

		HFX_SPRITE_DISCOVERY_SPELL_SHIELD,

		HFX_SPRITE_MINIMAP_NW					= 690,
		HFX_SPRITE_MINIMAP_NE,
		HFX_SPRITE_MINIMAP_SW,
		HFX_SPRITE_MINIMAP_SE,
		HFX_SPRITE_MINIMAP_N,
		HFX_SPRITE_MINIMAP_S,
		HFX_SPRITE_MINIMAP_W,
		HFX_SPRITE_MINIMAP_E,

		HFX_SPRITE_MINIMAP_BACKGROUND			= 700,

		HFX_SPRITE_PANEL_1_NW,
		HFX_SPRITE_PANEL_1_NE,
		HFX_SPRITE_PANEL_1_N,
		HFX_SPRITE_PANEL_1_E,
		HFX_SPRITE_PANEL_1_W,
		HFX_SPRITE_PANEL_1_C,

		HFX_SPRITE_PANEL_2_NW,
		HFX_SPRITE_PANEL_2_NE,
		HFX_SPRITE_PANEL_2_N,
		HFX_SPRITE_PANEL_2_E,
		HFX_SPRITE_PANEL_2_W,
		HFX_SPRITE_PANEL_2_C,

		HFX_SPRITE_PANEL_3_NW,
		HFX_SPRITE_PANEL_3_NE,
		HFX_SPRITE_PANEL_3_SW,
		HFX_SPRITE_PANEL_3_SE,
		HFX_SPRITE_PANEL_3_N,
		HFX_SPRITE_PANEL_3_S,
		HFX_SPRITE_PANEL_3_W,
		HFX_SPRITE_PANEL_3_E,
		HFX_SPRITE_PANEL_3_C,

		HFX_SPRITE_TAB_BACK_NW					= 740,
		HFX_SPRITE_TAB_BACK_NE,
		HFX_SPRITE_TAB_BACK_SW,
		HFX_SPRITE_TAB_BACK_SE,
		HFX_SPRITE_TAB_BACK_N,
		HFX_SPRITE_TAB_BACK_S,
		HFX_SPRITE_TAB_BACK_W,
		HFX_SPRITE_TAB_BACK_E,
		HFX_SPRITE_TAB_BACK_C,

		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_NW,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_NE,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_SW,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_SE,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_N,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_S,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_W,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_E,
		HFX_SPRITE_TAB_BACK_HIGHLIGHTED_C,

		HFX_SPRITE_TAB_FRONT_NW,
		HFX_SPRITE_TAB_FRONT_NE,
		HFX_SPRITE_TAB_FRONT_SW,
		HFX_SPRITE_TAB_FRONT_SE,
		HFX_SPRITE_TAB_FRONT_N,
		HFX_SPRITE_TAB_FRONT_S,
		HFX_SPRITE_TAB_FRONT_W,
		HFX_SPRITE_TAB_FRONT_E,
		HFX_SPRITE_TAB_FRONT_C,

		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_NW,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_NE,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_SW,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_SE,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_N,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_S,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_W,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_E,
		//HFX_SPRITE_TAB_FRONT_HIGHLIGHTED_C,

		HFX_SPRITE_SPELL_BUTTON_NW		= 821,
		HFX_SPRITE_SPELL_BUTTON_NE,
		HFX_SPRITE_SPELL_BUTTON_SW,
		HFX_SPRITE_SPELL_BUTTON_SE,
		HFX_SPRITE_SPELL_BUTTON_N,
		HFX_SPRITE_SPELL_BUTTON_S,
		HFX_SPRITE_SPELL_BUTTON_W,
		HFX_SPRITE_SPELL_BUTTON_E,
		HFX_SPRITE_SPELL_BUTTON_C,

		HFX_SPRITE_MINIGLOBE_OFF				= 875,
		HFX_SPRITE_MINIGLOBE_OFF_TO_ON,
		HFX_SPRITE_MINIGLOBE_ON,
		HFX_SPRITE_MINIGLOBE_ON_TO_OFF,

		HFX_SPRITE_BLUE_ENEMY_ICON_NW,
		HFX_SPRITE_BLUE_ENEMY_ICON_NE,
		HFX_SPRITE_BLUE_ENEMY_ICON_SW,
		HFX_SPRITE_BLUE_ENEMY_ICON_SE,
		HFX_SPRITE_BLUE_ENEMY_ICON_N,
		HFX_SPRITE_BLUE_ENEMY_ICON_S,
		HFX_SPRITE_BLUE_ENEMY_ICON_W,
		HFX_SPRITE_BLUE_ENEMY_ICON_E,
		HFX_SPRITE_BLUE_ENEMY_ICON_C,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_NW,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_NE,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_SW,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_SE,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_N,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_S,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_W,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_E,
		HFX_SPRITE_BLUE_HIGHLIGHTED_ICON_C,
		HFX_SPRITE_BLUE_ALLY_ICON_NW,
		HFX_SPRITE_BLUE_ALLY_ICON_NE,
		HFX_SPRITE_BLUE_ALLY_ICON_SW,
		HFX_SPRITE_BLUE_ALLY_ICON_SE,
		HFX_SPRITE_BLUE_ALLY_ICON_N,
		HFX_SPRITE_BLUE_ALLY_ICON_S,
		HFX_SPRITE_BLUE_ALLY_ICON_W,
		HFX_SPRITE_BLUE_ALLY_ICON_E,
		HFX_SPRITE_BLUE_ALLY_ICON_C,

		HFX_SPRITE_RED_ENEMY_ICON_NW,
		HFX_SPRITE_RED_ENEMY_ICON_NE,
		HFX_SPRITE_RED_ENEMY_ICON_SW,
		HFX_SPRITE_RED_ENEMY_ICON_SE,
		HFX_SPRITE_RED_ENEMY_ICON_N,
		HFX_SPRITE_RED_ENEMY_ICON_S,
		HFX_SPRITE_RED_ENEMY_ICON_W,
		HFX_SPRITE_RED_ENEMY_ICON_E,
		HFX_SPRITE_RED_ENEMY_ICON_C,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_NW,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_NE,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_SW,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_SE,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_N,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_S,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_W,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_E,
		HFX_SPRITE_RED_HIGHLIGHTED_ICON_C,
		HFX_SPRITE_RED_ALLY_ICON_NW,
		HFX_SPRITE_RED_ALLY_ICON_NE,
		HFX_SPRITE_RED_ALLY_ICON_SW,
		HFX_SPRITE_RED_ALLY_ICON_SE,
		HFX_SPRITE_RED_ALLY_ICON_N,
		HFX_SPRITE_RED_ALLY_ICON_S,
		HFX_SPRITE_RED_ALLY_ICON_W,
		HFX_SPRITE_RED_ALLY_ICON_E,
		HFX_SPRITE_RED_ALLY_ICON_C,

		HFX_SPRITE_YELLOW_ENEMY_ICON_NW,
		HFX_SPRITE_YELLOW_ENEMY_ICON_NE,
		HFX_SPRITE_YELLOW_ENEMY_ICON_SW,
		HFX_SPRITE_YELLOW_ENEMY_ICON_SE,
		HFX_SPRITE_YELLOW_ENEMY_ICON_N,
		HFX_SPRITE_YELLOW_ENEMY_ICON_S,
		HFX_SPRITE_YELLOW_ENEMY_ICON_W,
		HFX_SPRITE_YELLOW_ENEMY_ICON_E,
		HFX_SPRITE_YELLOW_ENEMY_ICON_C,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_NW,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_NE,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_SW,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_SE,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_N,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_S,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_W,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_E,
		HFX_SPRITE_YELLOW_HIGHLIGHTED_ICON_C,
		HFX_SPRITE_YELLOW_ALLY_ICON_NW,
		HFX_SPRITE_YELLOW_ALLY_ICON_NE,
		HFX_SPRITE_YELLOW_ALLY_ICON_SW,
		HFX_SPRITE_YELLOW_ALLY_ICON_SE,
		HFX_SPRITE_YELLOW_ALLY_ICON_N,
		HFX_SPRITE_YELLOW_ALLY_ICON_S,
		HFX_SPRITE_YELLOW_ALLY_ICON_W,
		HFX_SPRITE_YELLOW_ALLY_ICON_E,
		HFX_SPRITE_YELLOW_ALLY_ICON_C,

		HFX_SPRITE_GREEN_ENEMY_ICON_NW,
		HFX_SPRITE_GREEN_ENEMY_ICON_NE,
		HFX_SPRITE_GREEN_ENEMY_ICON_SW,
		HFX_SPRITE_GREEN_ENEMY_ICON_SE,
		HFX_SPRITE_GREEN_ENEMY_ICON_N,
		HFX_SPRITE_GREEN_ENEMY_ICON_S,
		HFX_SPRITE_GREEN_ENEMY_ICON_W,
		HFX_SPRITE_GREEN_ENEMY_ICON_E,
		HFX_SPRITE_GREEN_ENEMY_ICON_C,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_NW,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_NE,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_SW,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_SE,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_N,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_S,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_W,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_E,
		HFX_SPRITE_GREEN_HIGHLIGHTED_ICON_C,
		HFX_SPRITE_GREEN_ALLY_ICON_NW,
		HFX_SPRITE_GREEN_ALLY_ICON_NE,
		HFX_SPRITE_GREEN_ALLY_ICON_SW,
		HFX_SPRITE_GREEN_ALLY_ICON_SE,
		HFX_SPRITE_GREEN_ALLY_ICON_N,
		HFX_SPRITE_GREEN_ALLY_ICON_S,
		HFX_SPRITE_GREEN_ALLY_ICON_W,
		HFX_SPRITE_GREEN_ALLY_ICON_E,
		HFX_SPRITE_GREEN_ALLY_ICON_C,

		HFX_SPRITE_HEALTH_NW						= 987,
		HFX_SPRITE_HEALTH_NE,
		HFX_SPRITE_HEALTH_SW,
		HFX_SPRITE_HEALTH_SE,
		HFX_SPRITE_HEALTH_N,
		HFX_SPRITE_HEALTH_S,
		HFX_SPRITE_HEALTH_W,
		HFX_SPRITE_HEALTH_E,
		HFX_SPRITE_HEALTH_C,

		HFX_SPRITE_SMALL_PANEL_NW						= 996,
		HFX_SPRITE_SMALL_PANEL_NE,
		HFX_SPRITE_SMALL_PANEL_SW,
		HFX_SPRITE_SMALL_PANEL_SE,
		HFX_SPRITE_SMALL_PANEL_N,
		HFX_SPRITE_SMALL_PANEL_S,
		HFX_SPRITE_SMALL_PANEL_W,
		HFX_SPRITE_SMALL_PANEL_E,
		HFX_SPRITE_SMALL_PANEL_C,

		HFX_SPRITE_BUTTON_BUILDING_HUT					= 1028,
		HFX_SPRITE_BUTTON_BUILDING_TOWER,
		HFX_SPRITE_BUTTON_BUILDING_WARRIOR,
		HFX_SPRITE_BUTTON_BUILDING_FIREWARRIOR,
		HFX_SPRITE_BUTTON_BUILDING_TEMPLE,
		HFX_SPRITE_BUTTON_BUILDING_SPY,
		HFX_SPRITE_BUTTON_BUILDING_BOAT,
		HFX_SPRITE_BUTTON_BUILDING_BALLOON,
		HFX_SPRITE_BUTTON_BUILDING_POST,

		HFX_SPRITE_BUTTON_2_BUILDING_HUT,
		HFX_SPRITE_BUTTON_2_BUILDING_TOWER,
		HFX_SPRITE_BUTTON_2_BUILDING_WARRIOR,
		HFX_SPRITE_BUTTON_2_BUILDING_FIREWARRIOR,
		HFX_SPRITE_BUTTON_2_BUILDING_TEMPLE,
		HFX_SPRITE_BUTTON_2_BUILDING_SPY,
		HFX_SPRITE_BUTTON_2_BUILDING_BOAT,
		HFX_SPRITE_BUTTON_2_BUILDING_BALLOON,
		HFX_SPRITE_BUTTON_2_BUILDING_POST,

		HFX_SPRITE_BUTTON_3_BUILDING_HUT,
		HFX_SPRITE_BUTTON_3_BUILDING_TOWER,
		HFX_SPRITE_BUTTON_3_BUILDING_WARRIOR,
		HFX_SPRITE_BUTTON_3_BUILDING_FIREWARRIOR,
		HFX_SPRITE_BUTTON_3_BUILDING_TEMPLE,
		HFX_SPRITE_BUTTON_3_BUILDING_SPY,
		HFX_SPRITE_BUTTON_3_BUILDING_BOAT,
		HFX_SPRITE_BUTTON_3_BUILDING_BALLOON,
		HFX_SPRITE_BUTTON_3_BUILDING_POST,
		HFX_SPRITE_BUTTON_BUILDING_UNKNOWN,

		HFX_SPRITE_DISCOVERY_UNKNOWN,
		HFX_SPRITE_DISCOVERY_SPELL_ARMAGEDDON,
		HFX_SPRITE_DISCOVERY_SPELL_BLAST,
		HFX_SPRITE_DISCOVERY_SPELL_LIGHTNING,
		HFX_SPRITE_DISCOVERY_SPELL_TORNADO,
		HFX_SPRITE_DISCOVERY_SPELL_SWARM,
		HFX_SPRITE_DISCOVERY_SPELL_INVISIBILLITY,
		HFX_SPRITE_DISCOVERY_SPELL_HYPNOTISE,
		HFX_SPRITE_DISCOVERY_SPELL_FIRESTORM,
		HFX_SPRITE_DISCOVERY_SPELL_GHOST_ARMY,
		HFX_SPRITE_DISCOVERY_SPELL_ERODE,
		HFX_SPRITE_DISCOVERY_SPELL_SWAMP,
		HFX_SPRITE_DISCOVERY_SPELL_LANDBRIDGE,
		HFX_SPRITE_DISCOVERY_SPELL_ANGEL_OF_DEATH,
		HFX_SPRITE_DISCOVERY_SPELL_EARTHQUAKE,
		HFX_SPRITE_DISCOVERY_SPELL_FLATTEN,
		HFX_SPRITE_DISCOVERY_SPELL_VOLCANO,
		HFX_SPRITE_DISCOVERY_SPELL_CONVERT,
		HFX_SPRITE_DISCOVERY_SPELL_TELEPORT,
		HFX_SPRITE_DISCOVERY_BUILDING_HUT,
		HFX_SPRITE_DISCOVERY_BUILDING_TOWER,
		HFX_SPRITE_DISCOVERY_BUILDING_WARRIOR,
		HFX_SPRITE_DISCOVERY_BUILDING_FIREWARRIOR,
		HFX_SPRITE_DISCOVERY_BUILDING_TEMPLE,
		HFX_SPRITE_DISCOVERY_BUILDING_SPY,
		HFX_SPRITE_DISCOVERY_BUILDING_BOAT,
		HFX_SPRITE_DISCOVERY_BUILDING_BALLOON,
		HFX_SPRITE_DISCOVERY_BUILDING_POST,
	};
}

#endif