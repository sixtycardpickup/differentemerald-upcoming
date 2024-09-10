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
LittlerootTown_SetFlag_SmartWild::
# 130 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SMART_WILD
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_ExpShare::
# 134 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GEN_6_EXP_SHARE
# 135 "data/maps/LittlerootTown/scripts.pory"
	end
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_SmartWild::
# 138 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_SMART_WILD
# 139 "data/maps/LittlerootTown/scripts.pory"
	end
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_ExpShare::
# 142 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_GEN_6_EXP_SHARE
# 143 "data/maps/LittlerootTown/scripts.pory"
	end
# 144 "data/maps/LittlerootTown/scripts.pory"

# 145 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_ClearTrainerFlag_Tearnest::
# 146 "data/maps/LittlerootTown/scripts.pory"
	cleartrainerflag (TRAINER_TEARNEST)
# 147 "data/maps/LittlerootTown/scripts.pory"
	end
# 148 "data/maps/LittlerootTown/scripts.pory"

# 149 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 150 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 151 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 152 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 153 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 154 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 155 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 156 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 157 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 158 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 159 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 160 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 161 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 162 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 163 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 164 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_OnTransitionWeather
# 165 "data/maps/LittlerootTown/scripts.pory"
	end
# 166 "data/maps/LittlerootTown/scripts.pory"

# 167 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 168 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 169 "data/maps/LittlerootTown/scripts.pory"
	return
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 172 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 173 "data/maps/LittlerootTown/scripts.pory"
	return
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 176 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 177 "data/maps/LittlerootTown/scripts.pory"
	return
# 178 "data/maps/LittlerootTown/scripts.pory"

# 179 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 180 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 181 "data/maps/LittlerootTown/scripts.pory"
	return
# 182 "data/maps/LittlerootTown/scripts.pory"

# 183 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 184 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 185 "data/maps/LittlerootTown/scripts.pory"
	return
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 188 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 189 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 190 "data/maps/LittlerootTown/scripts.pory"
	return
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 193 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 194 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 195 "data/maps/LittlerootTown/scripts.pory"
	return
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 198 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 199 "data/maps/LittlerootTown/scripts.pory"
	return
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 202 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 203 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 204 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 205 "data/maps/LittlerootTown/scripts.pory"
	return
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 208 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 209 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 210 "data/maps/LittlerootTown/scripts.pory"
	return
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 213 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 214 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 215 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 216 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 217 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 218 "data/maps/LittlerootTown/scripts.pory"
	return
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 221 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 222 "data/maps/LittlerootTown/scripts.pory"
	return
# 223 "data/maps/LittlerootTown/scripts.pory"

# 224 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 225 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 226 "data/maps/LittlerootTown/scripts.pory"
	return
# 227 "data/maps/LittlerootTown/scripts.pory"

# 228 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 229 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 230 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 231 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 232 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 233 "data/maps/LittlerootTown/scripts.pory"

# 234 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 235 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 236 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 237 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 238 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 239 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 240 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 241 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 242 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 246 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 247 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 248 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 249 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 250 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 251 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 252 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 253 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 257 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 258 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 259 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 260 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 262 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 263 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 264 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 265 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 267 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 268 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 269 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 270 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 271 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 272 "data/maps/LittlerootTown/scripts.pory"
	end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 275 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 276 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 279 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 280 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 284 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 285 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 288 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 292 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 293 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 294 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 296 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 297 "data/maps/LittlerootTown/scripts.pory"
	return
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 301 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 302 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 305 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 306 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 307 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 308 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 310 "data/maps/LittlerootTown/scripts.pory"

# 311 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 313 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 314 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 317 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 318 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 321 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 330 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 331 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 332 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 333 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 334 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 335 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 336 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 337 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 338 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 339 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 340 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 341 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 343 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 344 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 345 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 346 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 347 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 348 "data/maps/LittlerootTown/scripts.pory"
	return
# 349 "data/maps/LittlerootTown/scripts.pory"

# 350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 354 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 355 "data/maps/LittlerootTown/scripts.pory"

# 356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 357 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown/scripts.pory"

# 364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 367 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 370 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 371 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 382 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 383 "data/maps/LittlerootTown/scripts.pory"

# 384 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 385 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 386 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 387 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 388 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 389 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 392 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 393 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 394 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 395 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 397 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 398 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 399 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 400 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 401 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 402 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 403 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 404 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 405 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 406 "data/maps/LittlerootTown/scripts.pory"
	end
# 407 "data/maps/LittlerootTown/scripts.pory"

# 408 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 409 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 410 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 411 "data/maps/LittlerootTown/scripts.pory"

# 412 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 413 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 414 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 415 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 416 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 417 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 418 "data/maps/LittlerootTown/scripts.pory"
	end
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 421 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 422 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 423 "data/maps/LittlerootTown/scripts.pory"
	end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 426 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 427 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 428 "data/maps/LittlerootTown/scripts.pory"
	end
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 432 "data/maps/LittlerootTown/scripts.pory"
	end
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 435 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 436 "data/maps/LittlerootTown/scripts.pory"
	end
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 439 "data/maps/LittlerootTown/scripts.pory"
	lock
# 440 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 441 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 442 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 443 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 444 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 445 "data/maps/LittlerootTown/scripts.pory"
	release
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 449 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 450 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 451 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 452 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 453 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 454 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 455 "data/maps/LittlerootTown/scripts.pory"
	release
# 456 "data/maps/LittlerootTown/scripts.pory"
	end
# 457 "data/maps/LittlerootTown/scripts.pory"

# 458 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 459 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 460 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 461 "data/maps/LittlerootTown/scripts.pory"
	release
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 465 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 466 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 467 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 468 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 469 "data/maps/LittlerootTown/scripts.pory"
	release
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 474 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 475 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 480 "data/maps/LittlerootTown/scripts.pory"
	end
# 481 "data/maps/LittlerootTown/scripts.pory"

# 482 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 483 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 484 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 485 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 486 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 487 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 488 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 489 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 490 "data/maps/LittlerootTown/scripts.pory"
	return
# 491 "data/maps/LittlerootTown/scripts.pory"

# 492 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 493 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 494 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 495 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 496 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 497 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 498 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 499 "data/maps/LittlerootTown/scripts.pory"
	return
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 502 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 503 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 504 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 505 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 507 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 508 "data/maps/LittlerootTown/scripts.pory"
	return
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 511 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 512 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 513 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 514 "data/maps/LittlerootTown/scripts.pory"
	end
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 517 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 518 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 519 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 520 "data/maps/LittlerootTown/scripts.pory"
	end
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 523 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 524 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 525 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 526 "data/maps/LittlerootTown/scripts.pory"
	end
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 529 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 530 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 531 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 532 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 533 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 534 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 535 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 536 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 537 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 538 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 539 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 540 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 541 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 542 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 543 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 544 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 545 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 546 "data/maps/LittlerootTown/scripts.pory"

# 547 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 548 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 549 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 552 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 553 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 554 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 555 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 556 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 558 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 561 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 562 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 566 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 568 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 569 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 572 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 574 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 575 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 578 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 580 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 581 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 584 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 591 "data/maps/LittlerootTown/scripts.pory"
	end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 594 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 595 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 596 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 597 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 598 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 600 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 601 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 602 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 603 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 604 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 605 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 608 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 609 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 610 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 611 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 612 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 613 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 616 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 621 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 622 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 623 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 627 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 628 "data/maps/LittlerootTown/scripts.pory"
	end
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 631 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 632 "data/maps/LittlerootTown/scripts.pory"
	end
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 635 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 636 "data/maps/LittlerootTown/scripts.pory"
	end
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 639 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 640 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 643 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 644 "data/maps/LittlerootTown/scripts.pory"
	end
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 647 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 648 "data/maps/LittlerootTown/scripts.pory"
	return
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 651 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 652 "data/maps/LittlerootTown/scripts.pory"
	return
# 653 "data/maps/LittlerootTown/scripts.pory"

# 654 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 655 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 656 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 657 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 658 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 659 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 660 "data/maps/LittlerootTown/scripts.pory"
	end
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 663 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 664 "data/maps/LittlerootTown/scripts.pory"
	return
# 665 "data/maps/LittlerootTown/scripts.pory"

# 666 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 667 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 671 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 672 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 674 "data/maps/LittlerootTown/scripts.pory"
	end
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 677 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 678 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 679 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 680 "data/maps/LittlerootTown/scripts.pory"
	end
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 683 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 684 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 685 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 686 "data/maps/LittlerootTown/scripts.pory"
	end
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 689 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 690 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 691 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 692 "data/maps/LittlerootTown/scripts.pory"
	end
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 695 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 696 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 697 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 698 "data/maps/LittlerootTown/scripts.pory"
	end
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 701 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 702 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 703 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 704 "data/maps/LittlerootTown/scripts.pory"
	end
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 707 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 708 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 709 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 710 "data/maps/LittlerootTown/scripts.pory"
	end
# 711 "data/maps/LittlerootTown/scripts.pory"

# 712 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 713 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 714 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 715 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 716 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 717 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 718 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 719 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 720 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 721 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 722 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 723 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 724 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 725 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 726 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 727 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 728 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 729 "data/maps/LittlerootTown/scripts.pory"
	end
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 732 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 733 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 734 "data/maps/LittlerootTown/scripts.pory"
	return
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 737 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 738 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 739 "data/maps/LittlerootTown/scripts.pory"
	return
# 740 "data/maps/LittlerootTown/scripts.pory"

# 741 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 742 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/LittlerootTown/scripts.pory"
	return
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	return
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 752 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 753 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 754 "data/maps/LittlerootTown/scripts.pory"
	return
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 757 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 758 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 759 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 760 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 761 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 762 "data/maps/LittlerootTown/scripts.pory"
	return
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 765 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	return
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 776 "data/maps/LittlerootTown/scripts.pory"
	return
# 777 "data/maps/LittlerootTown/scripts.pory"

# 778 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 779 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 781 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 783 "data/maps/LittlerootTown/scripts.pory"
	return
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 786 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	return
# 791 "data/maps/LittlerootTown/scripts.pory"

# 792 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 793 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 795 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 797 "data/maps/LittlerootTown/scripts.pory"
	return
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 804 "data/maps/LittlerootTown/scripts.pory"
	return
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 810 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 811 "data/maps/LittlerootTown/scripts.pory"
	return
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 814 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 816 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 817 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 818 "data/maps/LittlerootTown/scripts.pory"
	return
# 819 "data/maps/LittlerootTown/scripts.pory"

# 820 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 821 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 822 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 823 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 824 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 825 "data/maps/LittlerootTown/scripts.pory"
	return
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 831 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 832 "data/maps/LittlerootTown/scripts.pory"
	return
# 833 "data/maps/LittlerootTown/scripts.pory"

# 834 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 835 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 836 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 837 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 838 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 839 "data/maps/LittlerootTown/scripts.pory"
	return
# 840 "data/maps/LittlerootTown/scripts.pory"

# 841 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 842 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 843 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 844 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 845 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 846 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 847 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 848 "data/maps/LittlerootTown/scripts.pory"
	return
# 849 "data/maps/LittlerootTown/scripts.pory"

# 850 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 851 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 852 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 853 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 854 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 855 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 856 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 857 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 858 "data/maps/LittlerootTown/scripts.pory"
	return
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 861 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 862 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 863 "data/maps/LittlerootTown/scripts.pory"
	return
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 866 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 867 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 868 "data/maps/LittlerootTown/scripts.pory"
	return
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 871 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 872 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 873 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 874 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 875 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 876 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 877 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 878 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 879 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 880 "data/maps/LittlerootTown/scripts.pory"
	return
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 883 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 884 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 885 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 886 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 887 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 889 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 890 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 891 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 892 "data/maps/LittlerootTown/scripts.pory"
	return
# 893 "data/maps/LittlerootTown/scripts.pory"

# 894 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 895 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 896 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 897 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 898 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 899 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 900 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 901 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 902 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 903 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 904 "data/maps/LittlerootTown/scripts.pory"
	return
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 907 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 908 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 909 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 910 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 911 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 912 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 913 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 914 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 915 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 916 "data/maps/LittlerootTown/scripts.pory"
	return
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 919 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 920 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 921 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 922 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 923 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 924 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 925 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 926 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 927 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 928 "data/maps/LittlerootTown/scripts.pory"
	return
# 929 "data/maps/LittlerootTown/scripts.pory"

# 930 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 931 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 932 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 933 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 934 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 935 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 936 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 937 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 938 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 939 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 940 "data/maps/LittlerootTown/scripts.pory"
	return
# 941 "data/maps/LittlerootTown/scripts.pory"

# 942 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 943 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 944 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 945 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 946 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 947 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 948 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 949 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 950 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 951 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 952 "data/maps/LittlerootTown/scripts.pory"
	return
# 953 "data/maps/LittlerootTown/scripts.pory"

# 954 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 955 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 956 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 957 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 958 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 959 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 960 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 961 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 962 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 963 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 964 "data/maps/LittlerootTown/scripts.pory"
	return
# 965 "data/maps/LittlerootTown/scripts.pory"

# 966 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 967 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 968 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 969 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 970 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 971 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 972 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 973 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 974 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 975 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 976 "data/maps/LittlerootTown/scripts.pory"
	return
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 979 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 980 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 981 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 984 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 985 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 986 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 987 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 988 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 989 "data/maps/LittlerootTown/scripts.pory"

# 990 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 991 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 993 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 994 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 995 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 997 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 998 "data/maps/LittlerootTown/scripts.pory"

# 999 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1007 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1008 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1010 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1011 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1012 "data/maps/LittlerootTown/scripts.pory"

# 1013 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 1014 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1015 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1016 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1018 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1020 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1021 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1022 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1023 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1024 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1025 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1026 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1027 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1028 "data/maps/LittlerootTown/scripts.pory"

# 1029 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1031 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1032 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1033 "data/maps/LittlerootTown/scripts.pory"

# 1034 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 1035 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1036 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1037 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1038 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1039 "data/maps/LittlerootTown/scripts.pory"

# 1040 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_left
# 1048 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1049 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1050 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1051 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1052 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1053 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1054 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1055 "data/maps/LittlerootTown/scripts.pory"

# 1056 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1058 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1059 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1060 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1061 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1062 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1063 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1064 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1065 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1066 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1067 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1068 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1069 "data/maps/LittlerootTown/scripts.pory"

# 1070 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 1071 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1072 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1073 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 1083 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1084 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1085 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1086 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1087 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1088 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1090 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1091 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1092 "data/maps/LittlerootTown/scripts.pory"

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1096 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1097 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1098 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1099 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1100 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1101 "data/maps/LittlerootTown/scripts.pory"

# 1102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 1103 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1104 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1105 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1106 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1107 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1108 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1109 "data/maps/LittlerootTown/scripts.pory"

# 1110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1112 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1113 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1114 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1115 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1116 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1117 "data/maps/LittlerootTown/scripts.pory"

# 1118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 1119 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1120 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1121 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1122 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1123 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1124 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1125 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1126 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1127 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1128 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1129 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1130 "data/maps/LittlerootTown/scripts.pory"

# 1131 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 1132 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1133 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1134 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1135 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1136 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1137 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1138 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1139 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1140 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1141 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1142 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1143 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1144 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1145 "data/maps/LittlerootTown/scripts.pory"

# 1146 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1147 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1148 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1149 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1150 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1151 "data/maps/LittlerootTown/scripts.pory"

# 1152 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1153 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1154 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1155 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1156 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1157 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1158 "data/maps/LittlerootTown/scripts.pory"

# 1159 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
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
	walk_right
# 1166 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1167 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1168 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1169 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1170 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1171 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1172 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1173 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1174 "data/maps/LittlerootTown/scripts.pory"

# 1175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 1176 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1177 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1178 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1179 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1180 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1182 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1183 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1184 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1185 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1186 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1187 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1188 "data/maps/LittlerootTown/scripts.pory"

# 1189 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1190 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1191 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1192 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1193 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1194 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1195 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1196 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1197 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1198 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1200 "data/maps/LittlerootTown/scripts.pory"

# 1201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1202 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1203 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1204 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1205 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1206 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1207 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1208 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1209 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1210 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1211 "data/maps/LittlerootTown/scripts.pory"

# 1212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1213 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1214 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1215 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1216 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1217 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1218 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1219 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1220 "data/maps/LittlerootTown/scripts.pory"

# 1221 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1222 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1223 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1224 "data/maps/LittlerootTown/scripts.pory"

# 1225 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1226 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1227 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1228 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1229 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1230 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1231 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1232 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1233 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1234 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1235 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1236 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1237 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1238 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1239 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1240 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1241 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1242 "data/maps/LittlerootTown/scripts.pory"
	end
# 1243 "data/maps/LittlerootTown/scripts.pory"

# 1244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1245 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1246 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1247 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1248 "data/maps/LittlerootTown/scripts.pory"
	release
# 1249 "data/maps/LittlerootTown/scripts.pory"
	end
# 1250 "data/maps/LittlerootTown/scripts.pory"

# 1251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1252 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1253 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1254 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1255 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1256 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1257 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1258 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1259 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1260 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1261 "data/maps/LittlerootTown/scripts.pory"
	return
# 1262 "data/maps/LittlerootTown/scripts.pory"

# 1263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1264 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1265 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1266 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1267 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1268 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1269 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1270 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1271 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1272 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1273 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1274 "data/maps/LittlerootTown/scripts.pory"

# 1275 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1276 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1277 "data/maps/LittlerootTown/scripts.pory"

# 1278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1279 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1280 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1281 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1282 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1283 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1284 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1285 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1286 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1287 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1288 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1289 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1290 "data/maps/LittlerootTown/scripts.pory"

# 1291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1292 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1293 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1294 "data/maps/LittlerootTown/scripts.pory"

# 1295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1296 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1297 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1298 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1299 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1300 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1301 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1302 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1303 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1304 "data/maps/LittlerootTown/scripts.pory"

# 1305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1306 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1307 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1308 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1309 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1310 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1311 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1312 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1313 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1314 "data/maps/LittlerootTown/scripts.pory"

# 1315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1316 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1317 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1318 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1319 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1320 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1321 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1322 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1323 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1324 "data/maps/LittlerootTown/scripts.pory"

# 1325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1326 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1327 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1328 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1329 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1330 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1331 "data/maps/LittlerootTown/scripts.pory"

# 1332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1333 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1334 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1335 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1336 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1337 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1338 "data/maps/LittlerootTown/scripts.pory"

# 1339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1340 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1341 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1342 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1343 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1344 "data/maps/LittlerootTown/scripts.pory"

# 1345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1346 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1347 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1348 "data/maps/LittlerootTown/scripts.pory"

# 1349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1350 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1351 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1352 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1353 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1354 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1355 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1356 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1357 "data/maps/LittlerootTown/scripts.pory"

# 1358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1359 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1360 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1361 "data/maps/LittlerootTown/scripts.pory"

# 1362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1363 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1364 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1365 "data/maps/LittlerootTown/scripts.pory"

# 1366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1367 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1368 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1369 "data/maps/LittlerootTown/scripts.pory"

# 1370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1371 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1372 "data/maps/LittlerootTown/scripts.pory"

# 1373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1374 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1375 "data/maps/LittlerootTown/scripts.pory"

# 1376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1377 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1378 "data/maps/LittlerootTown/scripts.pory"

# 1379 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1380 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1381 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1382 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1383 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1384 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1385 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1386 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1387 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1388 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
