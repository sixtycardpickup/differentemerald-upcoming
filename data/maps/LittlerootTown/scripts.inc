# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"

# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 6 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LittlerootTown_OnResume
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 12 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 13 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_OnLoad
# 14 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 15 "data/maps/LittlerootTown/scripts.pory"

# 16 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Received Running Shoes
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Saving Birch
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 21 "data/maps/LittlerootTown/scripts.pory"

# 22 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 32 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 38 "data/maps/LittlerootTown/scripts.pory"

# 39 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 42 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 43 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 44 "data/maps/LittlerootTown/scripts.pory"

# 45 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransitionWeather::
# 46 "data/maps/LittlerootTown/scripts.pory"
	special GetDayOrNight
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 3, LittlerootTown_OnTransition_Night
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 2, LittlerootTown_OnTransition_Evening
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 1, LittlerootTown_OnTransition_Day
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 0, LittlerootTown_OnTransition_Morning
# 51 "data/maps/LittlerootTown/scripts.pory"
	return
# 52 "data/maps/LittlerootTown/scripts.pory"

# 53 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Morning::
# 54 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 55 "data/maps/LittlerootTown/scripts.pory"
	doweather
# 56 "data/maps/LittlerootTown/scripts.pory"
	end
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Day::
# 59 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 60 "data/maps/LittlerootTown/scripts.pory"
	doweather
# 61 "data/maps/LittlerootTown/scripts.pory"
	end
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Evening::
# 64 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 65 "data/maps/LittlerootTown/scripts.pory"
	doweather
# 66 "data/maps/LittlerootTown/scripts.pory"
	end
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Night::
# 69 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 70 "data/maps/LittlerootTown/scripts.pory"
	doweather
# 71 "data/maps/LittlerootTown/scripts.pory"
	end
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnResume::
# 74 "data/maps/LittlerootTown/scripts.pory"
	special GetDayOrNight
# 75 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 3, Littleroot_OnResume_Night
# 76 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 2, Littleroot_OnResume_Evening
# 77 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 1, Littleroot_OnResume_Day
# 78 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 0, Littleroot_OnResume_Morning
# 79 "data/maps/LittlerootTown/scripts.pory"
	end
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Morning::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 83 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 84 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/LittlerootTown/scripts.pory"
	case 0, Littleroot_MorningClouds
# 86 "data/maps/LittlerootTown/scripts.pory"
	case 1, Littleroot_MorningClouds
# 87 "data/maps/LittlerootTown/scripts.pory"
	case 2, Littleroot_MorningSunny
# 88 "data/maps/LittlerootTown/scripts.pory"
	end
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
Littleroot_MorningClouds::
# 91 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 92 "data/maps/LittlerootTown/scripts.pory"
	end
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
Littleroot_MorningSunny::
# 95 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 96 "data/maps/LittlerootTown/scripts.pory"
	end
# 97 "data/maps/LittlerootTown/scripts.pory"

# 98 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Day::
# 99 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 100 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 101 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/LittlerootTown/scripts.pory"
	case 0, Littleroot_DayClouds
# 103 "data/maps/LittlerootTown/scripts.pory"
	case 1, Littleroot_DaySunny
# 104 "data/maps/LittlerootTown/scripts.pory"
	case 2, Littleroot_DaySunny
# 105 "data/maps/LittlerootTown/scripts.pory"
	end
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
Littleroot_DayClouds::
# 108 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 109 "data/maps/LittlerootTown/scripts.pory"
	end
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
Littleroot_DaySunny::
# 112 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 113 "data/maps/LittlerootTown/scripts.pory"
	end
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Evening::
# 116 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 2
# 117 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 118 "data/maps/LittlerootTown/scripts.pory"
	end
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Night::
# 121 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 3
# 122 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 123 "data/maps/LittlerootTown/scripts.pory"
	end
# 124 "data/maps/LittlerootTown/scripts.pory"

# 125 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad::
# 126 "data/maps/LittlerootTown/scripts.pory"
	doweather
# 127 "data/maps/LittlerootTown/scripts.pory"
	end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 130 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 131 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 132 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 133 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 134 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 135 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 136 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 137 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 138 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 139 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 140 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 141 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 142 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 143 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 144 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_OnTransitionWeather
# 145 "data/maps/LittlerootTown/scripts.pory"
	end
# 146 "data/maps/LittlerootTown/scripts.pory"

# 147 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 148 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 149 "data/maps/LittlerootTown/scripts.pory"
	return
# 150 "data/maps/LittlerootTown/scripts.pory"

# 151 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 152 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 153 "data/maps/LittlerootTown/scripts.pory"
	return
# 154 "data/maps/LittlerootTown/scripts.pory"

# 155 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 156 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 157 "data/maps/LittlerootTown/scripts.pory"
	return
# 158 "data/maps/LittlerootTown/scripts.pory"

# 159 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 160 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 161 "data/maps/LittlerootTown/scripts.pory"
	return
# 162 "data/maps/LittlerootTown/scripts.pory"

# 163 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 164 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 165 "data/maps/LittlerootTown/scripts.pory"
	return
# 166 "data/maps/LittlerootTown/scripts.pory"

# 167 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 168 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 169 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 170 "data/maps/LittlerootTown/scripts.pory"
	return
# 171 "data/maps/LittlerootTown/scripts.pory"

# 172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 173 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 174 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 175 "data/maps/LittlerootTown/scripts.pory"
	return
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 178 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 179 "data/maps/LittlerootTown/scripts.pory"
	return
# 180 "data/maps/LittlerootTown/scripts.pory"

# 181 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 182 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 183 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 184 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 185 "data/maps/LittlerootTown/scripts.pory"
	return
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 188 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 189 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 190 "data/maps/LittlerootTown/scripts.pory"
	return
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 193 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 194 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 195 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 196 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 197 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 198 "data/maps/LittlerootTown/scripts.pory"
	return
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 201 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 202 "data/maps/LittlerootTown/scripts.pory"
	return
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 205 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 206 "data/maps/LittlerootTown/scripts.pory"
	return
# 207 "data/maps/LittlerootTown/scripts.pory"

# 208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 209 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 210 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 211 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 212 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 213 "data/maps/LittlerootTown/scripts.pory"

# 214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 215 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 216 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 217 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 218 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 219 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 220 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 221 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 222 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 223 "data/maps/LittlerootTown/scripts.pory"
	end
# 224 "data/maps/LittlerootTown/scripts.pory"

# 225 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 226 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 227 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 228 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 229 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 230 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 231 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 232 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 233 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 234 "data/maps/LittlerootTown/scripts.pory"
	end
# 235 "data/maps/LittlerootTown/scripts.pory"

# 236 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 237 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 238 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 239 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 240 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 242 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 243 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 244 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 245 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 247 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 248 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 249 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 250 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 251 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 252 "data/maps/LittlerootTown/scripts.pory"
	end
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 255 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 256 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 259 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 260 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 262 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 263 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 264 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 265 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 267 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 268 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 269 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 270 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 272 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 273 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 275 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 276 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 277 "data/maps/LittlerootTown/scripts.pory"
	return
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 280 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 281 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 282 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 285 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 286 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 287 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 288 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 289 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 290 "data/maps/LittlerootTown/scripts.pory"

# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 292 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 294 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 295 "data/maps/LittlerootTown/scripts.pory"

# 296 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 297 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 298 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 299 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 301 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 304 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 305 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 310 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 311 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 313 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 314 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 316 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 317 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 318 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 319 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 320 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 323 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 324 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 325 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 326 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 327 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 328 "data/maps/LittlerootTown/scripts.pory"
	return
# 329 "data/maps/LittlerootTown/scripts.pory"

# 330 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 337 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 338 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 342 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 343 "data/maps/LittlerootTown/scripts.pory"

# 344 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 346 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 347 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 348 "data/maps/LittlerootTown/scripts.pory"

# 349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 350 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 351 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 354 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown/scripts.pory"

# 364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 365 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 367 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 368 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 369 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 372 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 373 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 374 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 375 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 377 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 378 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 379 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 380 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 381 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 382 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 383 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 384 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 385 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 386 "data/maps/LittlerootTown/scripts.pory"
	end
# 387 "data/maps/LittlerootTown/scripts.pory"

# 388 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 389 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 390 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 391 "data/maps/LittlerootTown/scripts.pory"

# 392 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 393 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 394 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 395 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 396 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 397 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 401 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 402 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 406 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 407 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 411 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 412 "data/maps/LittlerootTown/scripts.pory"
	end
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 415 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 416 "data/maps/LittlerootTown/scripts.pory"
	end
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 419 "data/maps/LittlerootTown/scripts.pory"
	lock
# 420 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 421 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 422 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 423 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 424 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 425 "data/maps/LittlerootTown/scripts.pory"
	release
# 426 "data/maps/LittlerootTown/scripts.pory"
	end
# 427 "data/maps/LittlerootTown/scripts.pory"

# 428 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 429 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 431 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 432 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 435 "data/maps/LittlerootTown/scripts.pory"
	release
# 436 "data/maps/LittlerootTown/scripts.pory"
	end
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 439 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 440 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 441 "data/maps/LittlerootTown/scripts.pory"
	release
# 442 "data/maps/LittlerootTown/scripts.pory"
	end
# 443 "data/maps/LittlerootTown/scripts.pory"

# 444 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 445 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 448 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 449 "data/maps/LittlerootTown/scripts.pory"
	release
# 450 "data/maps/LittlerootTown/scripts.pory"
	end
# 451 "data/maps/LittlerootTown/scripts.pory"

# 452 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 453 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 454 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 455 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 456 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 457 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 458 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 459 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 460 "data/maps/LittlerootTown/scripts.pory"
	end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 463 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 464 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 465 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 466 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 467 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 469 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 470 "data/maps/LittlerootTown/scripts.pory"
	return
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 473 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 474 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 475 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 476 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 477 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 478 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 479 "data/maps/LittlerootTown/scripts.pory"
	return
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 482 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 483 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 484 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 485 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 486 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 487 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 488 "data/maps/LittlerootTown/scripts.pory"
	return
# 489 "data/maps/LittlerootTown/scripts.pory"

# 490 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 491 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 492 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 493 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 494 "data/maps/LittlerootTown/scripts.pory"
	end
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 497 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 498 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 499 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 500 "data/maps/LittlerootTown/scripts.pory"
	end
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 503 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 504 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 505 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 506 "data/maps/LittlerootTown/scripts.pory"
	end
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 509 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 510 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 511 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 512 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 513 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 514 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 515 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 516 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 517 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 518 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 519 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 520 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 521 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 522 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 523 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 524 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 525 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 528 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 529 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 532 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 533 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 534 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 535 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 536 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 537 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 538 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 539 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 540 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 541 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 542 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 543 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 546 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 547 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 548 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 549 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 552 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 553 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 554 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 555 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 558 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 560 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 561 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 564 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 568 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 569 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 571 "data/maps/LittlerootTown/scripts.pory"
	end
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 574 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 575 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 576 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 577 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 578 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 584 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 585 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 588 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 589 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 591 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 592 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 593 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 594 "data/maps/LittlerootTown/scripts.pory"

# 595 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 596 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 602 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 603 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 607 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 608 "data/maps/LittlerootTown/scripts.pory"
	end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 611 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 612 "data/maps/LittlerootTown/scripts.pory"
	end
# 613 "data/maps/LittlerootTown/scripts.pory"

# 614 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 615 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 616 "data/maps/LittlerootTown/scripts.pory"
	end
# 617 "data/maps/LittlerootTown/scripts.pory"

# 618 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 619 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 620 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 623 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 624 "data/maps/LittlerootTown/scripts.pory"
	end
# 625 "data/maps/LittlerootTown/scripts.pory"

# 626 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 627 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 635 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 636 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 637 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 639 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 640 "data/maps/LittlerootTown/scripts.pory"
	end
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 643 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 647 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 648 "data/maps/LittlerootTown/scripts.pory"
	return
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 651 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 652 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 654 "data/maps/LittlerootTown/scripts.pory"
	end
# 655 "data/maps/LittlerootTown/scripts.pory"

# 656 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 657 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 658 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 659 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 660 "data/maps/LittlerootTown/scripts.pory"
	end
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 663 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 664 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 665 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 666 "data/maps/LittlerootTown/scripts.pory"
	end
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 669 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 670 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 671 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 672 "data/maps/LittlerootTown/scripts.pory"
	end
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 675 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 676 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 677 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 678 "data/maps/LittlerootTown/scripts.pory"
	end
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 681 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 682 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 683 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 684 "data/maps/LittlerootTown/scripts.pory"
	end
# 685 "data/maps/LittlerootTown/scripts.pory"

# 686 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 687 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 688 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 689 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 690 "data/maps/LittlerootTown/scripts.pory"
	end
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 693 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 694 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 695 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 696 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 697 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 698 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 699 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 700 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 701 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 702 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 703 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 704 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 705 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 706 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 707 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 708 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 709 "data/maps/LittlerootTown/scripts.pory"
	end
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 712 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 713 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 714 "data/maps/LittlerootTown/scripts.pory"
	return
# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 717 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 718 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 719 "data/maps/LittlerootTown/scripts.pory"
	return
# 720 "data/maps/LittlerootTown/scripts.pory"

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	return
# 725 "data/maps/LittlerootTown/scripts.pory"

# 726 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 727 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/LittlerootTown/scripts.pory"
	return
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 732 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 733 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 734 "data/maps/LittlerootTown/scripts.pory"
	return
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 737 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 738 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 741 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 742 "data/maps/LittlerootTown/scripts.pory"
	return
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 745 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 746 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	return
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 759 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 762 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 763 "data/maps/LittlerootTown/scripts.pory"
	return
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 766 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 768 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 770 "data/maps/LittlerootTown/scripts.pory"
	return
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 773 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 775 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 776 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 777 "data/maps/LittlerootTown/scripts.pory"
	return
# 778 "data/maps/LittlerootTown/scripts.pory"

# 779 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 780 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 781 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 782 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 783 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 784 "data/maps/LittlerootTown/scripts.pory"
	return
# 785 "data/maps/LittlerootTown/scripts.pory"

# 786 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 787 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 789 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 790 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 791 "data/maps/LittlerootTown/scripts.pory"
	return
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 794 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 795 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	return
# 799 "data/maps/LittlerootTown/scripts.pory"

# 800 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 801 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 803 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 805 "data/maps/LittlerootTown/scripts.pory"
	return
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 808 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 810 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 812 "data/maps/LittlerootTown/scripts.pory"
	return
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 815 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 817 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 818 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 819 "data/maps/LittlerootTown/scripts.pory"
	return
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 822 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 823 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 824 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 825 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 826 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 827 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 828 "data/maps/LittlerootTown/scripts.pory"
	return
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 831 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 832 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 833 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 834 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 835 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 836 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 837 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 838 "data/maps/LittlerootTown/scripts.pory"
	return
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 841 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 843 "data/maps/LittlerootTown/scripts.pory"
	return
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 846 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 848 "data/maps/LittlerootTown/scripts.pory"
	return
# 849 "data/maps/LittlerootTown/scripts.pory"

# 850 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 851 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 852 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 853 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 854 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 855 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 856 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 857 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 858 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 859 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 860 "data/maps/LittlerootTown/scripts.pory"
	return
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 863 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 864 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 865 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 866 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 867 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 868 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 869 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 870 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 871 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 872 "data/maps/LittlerootTown/scripts.pory"
	return
# 873 "data/maps/LittlerootTown/scripts.pory"

# 874 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 875 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 876 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 877 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 878 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 879 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 880 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 881 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 882 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 883 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 884 "data/maps/LittlerootTown/scripts.pory"
	return
# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 887 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 889 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 890 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 891 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 892 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 894 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 895 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 896 "data/maps/LittlerootTown/scripts.pory"
	return
# 897 "data/maps/LittlerootTown/scripts.pory"

# 898 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 899 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 900 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 901 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 902 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 903 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 904 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 905 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 906 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 907 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 908 "data/maps/LittlerootTown/scripts.pory"
	return
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 911 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 912 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 913 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 914 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 915 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 916 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 917 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 918 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 919 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 920 "data/maps/LittlerootTown/scripts.pory"
	return
# 921 "data/maps/LittlerootTown/scripts.pory"

# 922 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 923 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 924 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 925 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 926 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 927 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 928 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 929 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 930 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 931 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 932 "data/maps/LittlerootTown/scripts.pory"
	return
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 935 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 936 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 937 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 938 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 939 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 940 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 941 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 942 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 943 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 944 "data/maps/LittlerootTown/scripts.pory"
	return
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 947 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 948 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 949 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 950 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 951 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 952 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 953 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 954 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 955 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 956 "data/maps/LittlerootTown/scripts.pory"
	return
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 961 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 965 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 968 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 969 "data/maps/LittlerootTown/scripts.pory"

# 970 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 973 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 974 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 976 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 977 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 978 "data/maps/LittlerootTown/scripts.pory"

# 979 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 980 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 984 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 989 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 990 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 991 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 995 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 998 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 999 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1007 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1012 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 1015 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1016 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1018 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1019 "data/maps/LittlerootTown/scripts.pory"

# 1020 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 1021 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1022 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1023 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1024 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1025 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1026 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1027 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1028 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1029 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1030 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1031 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1032 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1033 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1034 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1035 "data/maps/LittlerootTown/scripts.pory"

# 1036 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1038 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1039 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1040 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1042 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1043 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1044 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1045 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1046 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1047 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1048 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1049 "data/maps/LittlerootTown/scripts.pory"

# 1050 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1052 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1053 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1054 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1055 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1056 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1057 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1058 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1059 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1060 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1061 "data/maps/LittlerootTown/scripts.pory"

# 1062 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1064 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1065 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1066 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1067 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1068 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1069 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1070 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1071 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1072 "data/maps/LittlerootTown/scripts.pory"

# 1073 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
# 1074 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1075 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1076 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1077 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1078 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1079 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1080 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1081 "data/maps/LittlerootTown/scripts.pory"

# 1082 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 1083 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1084 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1085 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1086 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1087 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1088 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1089 "data/maps/LittlerootTown/scripts.pory"

# 1090 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 1091 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1092 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1096 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1097 "data/maps/LittlerootTown/scripts.pory"

# 1098 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1100 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1101 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1102 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1103 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1104 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1105 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1106 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1107 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1108 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1109 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1110 "data/maps/LittlerootTown/scripts.pory"

# 1111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 1112 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1113 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1114 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1115 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1116 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1117 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1118 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1119 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1120 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1121 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1122 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1123 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1124 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1125 "data/maps/LittlerootTown/scripts.pory"

# 1126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1127 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1128 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1129 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1130 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1131 "data/maps/LittlerootTown/scripts.pory"

# 1132 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1133 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1134 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1135 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1136 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1137 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1138 "data/maps/LittlerootTown/scripts.pory"

# 1139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 1140 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1141 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1142 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1143 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1144 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1145 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1146 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1147 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1148 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1149 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1150 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1151 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1152 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1153 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1154 "data/maps/LittlerootTown/scripts.pory"

# 1155 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 1156 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1157 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1158 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1159 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1160 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1161 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1162 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1163 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1164 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1165 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1166 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1167 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1168 "data/maps/LittlerootTown/scripts.pory"

# 1169 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1171 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1172 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1173 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1174 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1175 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1176 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1177 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1178 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1179 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1180 "data/maps/LittlerootTown/scripts.pory"

# 1181 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1182 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1183 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1184 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1185 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1186 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1187 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1188 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1189 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1190 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1191 "data/maps/LittlerootTown/scripts.pory"

# 1192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1193 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1194 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1195 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1196 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1197 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1198 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1200 "data/maps/LittlerootTown/scripts.pory"

# 1201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1204 "data/maps/LittlerootTown/scripts.pory"

# 1205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1206 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1207 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1208 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1209 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1210 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1211 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1212 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1213 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1214 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1215 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1216 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1217 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1218 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1219 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1220 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1221 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1222 "data/maps/LittlerootTown/scripts.pory"
	end
# 1223 "data/maps/LittlerootTown/scripts.pory"

# 1224 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1225 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1226 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1227 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1228 "data/maps/LittlerootTown/scripts.pory"
	release
# 1229 "data/maps/LittlerootTown/scripts.pory"
	end
# 1230 "data/maps/LittlerootTown/scripts.pory"

# 1231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1232 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1233 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1234 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1235 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1236 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1237 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1238 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1239 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1240 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1241 "data/maps/LittlerootTown/scripts.pory"
	return
# 1242 "data/maps/LittlerootTown/scripts.pory"

# 1243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1244 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1245 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1246 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1247 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1248 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1249 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1250 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1251 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1252 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1253 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1254 "data/maps/LittlerootTown/scripts.pory"

# 1255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1256 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1257 "data/maps/LittlerootTown/scripts.pory"

# 1258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1259 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1260 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1261 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1262 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1263 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1264 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1265 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1266 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1267 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1268 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1269 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1270 "data/maps/LittlerootTown/scripts.pory"

# 1271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1272 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1273 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1274 "data/maps/LittlerootTown/scripts.pory"

# 1275 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1276 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1277 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1278 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1279 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1280 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1281 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1282 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1283 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1284 "data/maps/LittlerootTown/scripts.pory"

# 1285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1286 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1287 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1288 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1289 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1290 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1291 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1292 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1293 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1294 "data/maps/LittlerootTown/scripts.pory"

# 1295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1296 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1297 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1298 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1299 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1300 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1301 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1302 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1303 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1304 "data/maps/LittlerootTown/scripts.pory"

# 1305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1306 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1307 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1308 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1309 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1310 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1311 "data/maps/LittlerootTown/scripts.pory"

# 1312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1313 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1314 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1315 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1316 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1317 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1318 "data/maps/LittlerootTown/scripts.pory"

# 1319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1320 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1321 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1322 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1323 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1324 "data/maps/LittlerootTown/scripts.pory"

# 1325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1326 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1327 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1328 "data/maps/LittlerootTown/scripts.pory"

# 1329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1330 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1331 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1332 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1333 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1334 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1335 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1336 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1337 "data/maps/LittlerootTown/scripts.pory"

# 1338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1339 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1340 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1341 "data/maps/LittlerootTown/scripts.pory"

# 1342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1343 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1344 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1345 "data/maps/LittlerootTown/scripts.pory"

# 1346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1347 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1348 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1349 "data/maps/LittlerootTown/scripts.pory"

# 1350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1351 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1352 "data/maps/LittlerootTown/scripts.pory"

# 1353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1354 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1355 "data/maps/LittlerootTown/scripts.pory"

# 1356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1357 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1358 "data/maps/LittlerootTown/scripts.pory"

# 1359 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1360 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1361 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1362 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1363 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1364 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1365 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1366 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1367 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1368 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
