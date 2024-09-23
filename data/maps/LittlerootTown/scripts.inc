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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_OnLoad
# 13 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LittlerootTown_OnResume
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
@ Littleroot Town Weather
# 46 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad::
# 47 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ge VAR_LITTLEROOT_INTRO_STATE, 4, LittlerootTown_OnLoad_Weather
# 48 "data/maps/LittlerootTown/scripts.pory"
	end
# 49 "data/maps/LittlerootTown/scripts.pory"

# 50 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnResume::
# 51 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ge VAR_LITTLEROOT_INTRO_STATE, 4, LittlerootTown_OnLoad_Weather
# 52 "data/maps/LittlerootTown/scripts.pory"
	end
# 53 "data/maps/LittlerootTown/scripts.pory"

# 54 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad_Weather::
# 55 "data/maps/LittlerootTown/scripts.pory"
	special GetDayOrNight
# 56 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, 3, LittlerootTown_OnLoad_Night
# 57 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, 2, LittlerootTown_OnLoad_Evening
# 58 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LittlerootTown_OnLoad_Day
# 59 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LittlerootTown_OnLoad_Morning
# 60 "data/maps/LittlerootTown/scripts.pory"
	end
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad_Morning::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 64 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 65 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_MorningSunny
# 67 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_MorningRain
# 68 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_MorningSunny
# 69 "data/maps/LittlerootTown/scripts.pory"
	end
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MorningRain::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_RAIN
# 73 "data/maps/LittlerootTown/scripts.pory"
	end
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MorningSunny::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 77 "data/maps/LittlerootTown/scripts.pory"
	end
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad_Day::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 81 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 82 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_DayDrought
# 84 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_DaySunny
# 85 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_DaySunny
# 86 "data/maps/LittlerootTown/scripts.pory"
	end
# 87 "data/maps/LittlerootTown/scripts.pory"

# 88 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_DayDrought::
# 89 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_DROUGHT
# 90 "data/maps/LittlerootTown/scripts.pory"
	end
# 91 "data/maps/LittlerootTown/scripts.pory"

# 92 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_DaySunny::
# 93 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 94 "data/maps/LittlerootTown/scripts.pory"
	end
# 95 "data/maps/LittlerootTown/scripts.pory"

# 96 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad_Evening::
# 97 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 2
# 98 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 99 "data/maps/LittlerootTown/scripts.pory"
	end
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad_Night::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 3
# 103 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 104 "data/maps/LittlerootTown/scripts.pory"
	end
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
@ Littleroot Town Special Flag Setting
# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_AIvsAI::
# 108 "data/maps/LittlerootTown/scripts.pory"
	lock
# 109 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_AIvsAI, MSGBOX_AUTOCLOSE
# 110 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_AI_VS_AI
# 111 "data/maps/LittlerootTown/scripts.pory"
	release
# 112 "data/maps/LittlerootTown/scripts.pory"
	end
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_TeraOrbCharge::
# 115 "data/maps/LittlerootTown/scripts.pory"
	lock
# 116 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_TeraOrbCharge, MSGBOX_AUTOCLOSE
# 117 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TERA_CHARGE
# 118 "data/maps/LittlerootTown/scripts.pory"
	release
# 119 "data/maps/LittlerootTown/scripts.pory"
	end
# 120 "data/maps/LittlerootTown/scripts.pory"

# 121 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_SmartWild::
# 122 "data/maps/LittlerootTown/scripts.pory"
	lock
# 123 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_SmartWild, MSGBOX_AUTOCLOSE
# 124 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SMART_WILD
# 125 "data/maps/LittlerootTown/scripts.pory"
	release
# 126 "data/maps/LittlerootTown/scripts.pory"
	end
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_ExpShare::
# 129 "data/maps/LittlerootTown/scripts.pory"
	lock
# 130 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_ExpAll, MSGBOX_AUTOCLOSE
# 131 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GEN_6_EXP_SHARE
# 132 "data/maps/LittlerootTown/scripts.pory"
	release
# 133 "data/maps/LittlerootTown/scripts.pory"
	end
# 134 "data/maps/LittlerootTown/scripts.pory"

# 135 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_SmartWild::
# 136 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_SMART_WILD
# 137 "data/maps/LittlerootTown/scripts.pory"
	end
# 138 "data/maps/LittlerootTown/scripts.pory"

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_ExpShare::
# 140 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_GEN_6_EXP_SHARE
# 141 "data/maps/LittlerootTown/scripts.pory"
	end
# 142 "data/maps/LittlerootTown/scripts.pory"

# 143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_AIvsAI::
# 144 "data/maps/LittlerootTown/scripts.pory"
	lock
# 145 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_UnsetFlag_AIvsAI, MSGBOX_AUTOCLOSE
# 146 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_AI_VS_AI
# 147 "data/maps/LittlerootTown/scripts.pory"
	release
# 148 "data/maps/LittlerootTown/scripts.pory"
	end
# 149 "data/maps/LittlerootTown/scripts.pory"

# 150 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_TeraOrbCharge::
# 151 "data/maps/LittlerootTown/scripts.pory"
	lock
# 152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_UnsetFlag_TeraOrbCharge, MSGBOX_AUTOCLOSE
# 153 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TERA_CHARGE
# 154 "data/maps/LittlerootTown/scripts.pory"
	release
# 155 "data/maps/LittlerootTown/scripts.pory"
	end
# 156 "data/maps/LittlerootTown/scripts.pory"

# 157 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_ClearTrainerFlag_Tearnest::
# 158 "data/maps/LittlerootTown/scripts.pory"
	cleartrainerflag (TRAINER_TEARNEST)
# 159 "data/maps/LittlerootTown/scripts.pory"
	cleartrainerflag (TRAINER_ANA)
# 160 "data/maps/LittlerootTown/scripts.pory"
	end
# 161 "data/maps/LittlerootTown/scripts.pory"

# 162 "data/maps/LittlerootTown/scripts.pory"
@ Littleroot Town
# 163 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition::
# 164 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 165 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 166 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 167 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 168 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 169 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 170 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 171 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 172 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 173 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 174 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 175 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 176 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 177 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 178 "data/maps/LittlerootTown/scripts.pory"
	end
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 181 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 182 "data/maps/LittlerootTown/scripts.pory"
	return
# 183 "data/maps/LittlerootTown/scripts.pory"

# 184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 185 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 186 "data/maps/LittlerootTown/scripts.pory"
	return
# 187 "data/maps/LittlerootTown/scripts.pory"

# 188 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 189 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 190 "data/maps/LittlerootTown/scripts.pory"
	return
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 193 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 194 "data/maps/LittlerootTown/scripts.pory"
	return
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 197 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 198 "data/maps/LittlerootTown/scripts.pory"
	return
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 201 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 202 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 203 "data/maps/LittlerootTown/scripts.pory"
	return
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 206 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 207 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 208 "data/maps/LittlerootTown/scripts.pory"
	return
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 211 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 212 "data/maps/LittlerootTown/scripts.pory"
	return
# 213 "data/maps/LittlerootTown/scripts.pory"

# 214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 215 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 216 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 217 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 218 "data/maps/LittlerootTown/scripts.pory"
	return
# 219 "data/maps/LittlerootTown/scripts.pory"

# 220 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 221 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 222 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 223 "data/maps/LittlerootTown/scripts.pory"
	return
# 224 "data/maps/LittlerootTown/scripts.pory"

# 225 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 226 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 227 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 228 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 229 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 230 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 231 "data/maps/LittlerootTown/scripts.pory"
	return
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 234 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 235 "data/maps/LittlerootTown/scripts.pory"
	return
# 236 "data/maps/LittlerootTown/scripts.pory"

# 237 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 238 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 239 "data/maps/LittlerootTown/scripts.pory"
	return
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 242 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 243 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 244 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 245 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 246 "data/maps/LittlerootTown/scripts.pory"

# 247 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 248 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 249 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 250 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 251 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 252 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 253 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 254 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 255 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 259 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 260 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 261 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 262 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 263 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 264 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 265 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 266 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 267 "data/maps/LittlerootTown/scripts.pory"
	end
# 268 "data/maps/LittlerootTown/scripts.pory"

# 269 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 270 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 271 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 272 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 273 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 275 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 276 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 277 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 278 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 280 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 281 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 282 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SMART_WILD
# 283 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_DYNAMIC_TRAINER_LEVELS
# 284 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TERA_CHARGE
# 285 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 286 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 287 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 288 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 289 "data/maps/LittlerootTown/scripts.pory"
	end
# 290 "data/maps/LittlerootTown/scripts.pory"

# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 292 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 293 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 296 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 297 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 298 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 300 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 301 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 302 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 304 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 307 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 309 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 310 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 313 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 314 "data/maps/LittlerootTown/scripts.pory"
	return
# 315 "data/maps/LittlerootTown/scripts.pory"

# 316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 319 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 320 "data/maps/LittlerootTown/scripts.pory"

# 321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 322 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 323 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 330 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 331 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 334 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 335 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 338 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 347 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 348 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 350 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 352 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 353 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 354 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 355 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 356 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 357 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 358 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 359 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 360 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 361 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 362 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 364 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 365 "data/maps/LittlerootTown/scripts.pory"
	return
# 366 "data/maps/LittlerootTown/scripts.pory"

# 367 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 374 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 375 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 380 "data/maps/LittlerootTown/scripts.pory"

# 381 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 383 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 384 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 385 "data/maps/LittlerootTown/scripts.pory"

# 386 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 387 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 388 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 391 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 393 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 394 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 395 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 396 "data/maps/LittlerootTown/scripts.pory"

# 397 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 399 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 402 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 403 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 404 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 405 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 406 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 407 "data/maps/LittlerootTown/scripts.pory"

# 408 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 409 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 410 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 411 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 412 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 415 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 416 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 417 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 418 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 419 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 420 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 422 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 423 "data/maps/LittlerootTown/scripts.pory"
	end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 426 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 427 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 430 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 431 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 432 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 433 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 434 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 435 "data/maps/LittlerootTown/scripts.pory"
	end
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 438 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 439 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 440 "data/maps/LittlerootTown/scripts.pory"
	end
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 443 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 444 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 445 "data/maps/LittlerootTown/scripts.pory"
	end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 448 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 449 "data/maps/LittlerootTown/scripts.pory"
	end
# 450 "data/maps/LittlerootTown/scripts.pory"

# 451 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 452 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 453 "data/maps/LittlerootTown/scripts.pory"
	end
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 456 "data/maps/LittlerootTown/scripts.pory"
	lock
# 457 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 459 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 460 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 461 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 462 "data/maps/LittlerootTown/scripts.pory"
	release
# 463 "data/maps/LittlerootTown/scripts.pory"
	end
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 466 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 467 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 468 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 469 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 470 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 472 "data/maps/LittlerootTown/scripts.pory"
	release
# 473 "data/maps/LittlerootTown/scripts.pory"
	end
# 474 "data/maps/LittlerootTown/scripts.pory"

# 475 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 476 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 477 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 478 "data/maps/LittlerootTown/scripts.pory"
	release
# 479 "data/maps/LittlerootTown/scripts.pory"
	end
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 482 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 483 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 484 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 485 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 486 "data/maps/LittlerootTown/scripts.pory"
	release
# 487 "data/maps/LittlerootTown/scripts.pory"
	end
# 488 "data/maps/LittlerootTown/scripts.pory"

# 489 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 490 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 491 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 492 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 493 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 494 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 495 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 496 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 497 "data/maps/LittlerootTown/scripts.pory"
	end
# 498 "data/maps/LittlerootTown/scripts.pory"

# 499 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 500 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 506 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 507 "data/maps/LittlerootTown/scripts.pory"
	return
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 510 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 511 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 515 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 516 "data/maps/LittlerootTown/scripts.pory"
	return
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 519 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 520 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 521 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 522 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 523 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 524 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 528 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 529 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 530 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 531 "data/maps/LittlerootTown/scripts.pory"
	end
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 534 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 535 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 536 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 537 "data/maps/LittlerootTown/scripts.pory"
	end
# 538 "data/maps/LittlerootTown/scripts.pory"

# 539 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 540 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 541 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 542 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 543 "data/maps/LittlerootTown/scripts.pory"
	end
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 546 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 547 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 548 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 549 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 550 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 551 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 552 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 553 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 554 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 555 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 556 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 558 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 561 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 562 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 566 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 569 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 570 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 571 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 572 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 574 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 575 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 576 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 577 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 578 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 580 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 581 "data/maps/LittlerootTown/scripts.pory"

# 582 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 583 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 585 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 586 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 587 "data/maps/LittlerootTown/scripts.pory"

# 588 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 589 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 591 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 592 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 595 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 596 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 597 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 598 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 601 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 607 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 608 "data/maps/LittlerootTown/scripts.pory"
	end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 611 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 612 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 613 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 614 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 615 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 616 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 617 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 618 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 619 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 620 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 621 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 622 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 625 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 626 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 629 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 630 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 633 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 639 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 640 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 644 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 645 "data/maps/LittlerootTown/scripts.pory"
	end
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 648 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 649 "data/maps/LittlerootTown/scripts.pory"
	end
# 650 "data/maps/LittlerootTown/scripts.pory"

# 651 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 652 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 653 "data/maps/LittlerootTown/scripts.pory"
	end
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 656 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 657 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 658 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 659 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 660 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 661 "data/maps/LittlerootTown/scripts.pory"
	end
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 664 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 668 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 672 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 673 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 674 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 675 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 676 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 677 "data/maps/LittlerootTown/scripts.pory"
	end
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 680 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 681 "data/maps/LittlerootTown/scripts.pory"
	return
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 684 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 688 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 689 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 691 "data/maps/LittlerootTown/scripts.pory"
	end
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 694 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 695 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 696 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 697 "data/maps/LittlerootTown/scripts.pory"
	end
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 700 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 701 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 702 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 703 "data/maps/LittlerootTown/scripts.pory"
	end
# 704 "data/maps/LittlerootTown/scripts.pory"

# 705 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 706 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 707 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 708 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 709 "data/maps/LittlerootTown/scripts.pory"
	end
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 712 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 713 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 714 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 715 "data/maps/LittlerootTown/scripts.pory"
	end
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 718 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 719 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 720 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 721 "data/maps/LittlerootTown/scripts.pory"
	end
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 724 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 725 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 726 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 727 "data/maps/LittlerootTown/scripts.pory"
	end
# 728 "data/maps/LittlerootTown/scripts.pory"

# 729 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 730 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 731 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 732 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 733 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 734 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 735 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 736 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 737 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 738 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 741 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 742 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 743 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 744 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 745 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 746 "data/maps/LittlerootTown/scripts.pory"
	end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 749 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 750 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 751 "data/maps/LittlerootTown/scripts.pory"
	return
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 754 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 755 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 759 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown/scripts.pory"
	return
# 762 "data/maps/LittlerootTown/scripts.pory"

# 763 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 764 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 765 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 766 "data/maps/LittlerootTown/scripts.pory"
	return
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 769 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 770 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 771 "data/maps/LittlerootTown/scripts.pory"
	return
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 774 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 775 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 776 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 777 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 778 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 779 "data/maps/LittlerootTown/scripts.pory"
	return
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 782 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 783 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	return
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 789 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 790 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 791 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 793 "data/maps/LittlerootTown/scripts.pory"
	return
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 800 "data/maps/LittlerootTown/scripts.pory"
	return
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 803 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 805 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 807 "data/maps/LittlerootTown/scripts.pory"
	return
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 810 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 812 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 814 "data/maps/LittlerootTown/scripts.pory"
	return
# 815 "data/maps/LittlerootTown/scripts.pory"

# 816 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 817 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 818 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 819 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 821 "data/maps/LittlerootTown/scripts.pory"
	return
# 822 "data/maps/LittlerootTown/scripts.pory"

# 823 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 824 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 825 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 826 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 828 "data/maps/LittlerootTown/scripts.pory"
	return
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 831 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 832 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 833 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 834 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 835 "data/maps/LittlerootTown/scripts.pory"
	return
# 836 "data/maps/LittlerootTown/scripts.pory"

# 837 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 838 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 839 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 840 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 841 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 842 "data/maps/LittlerootTown/scripts.pory"
	return
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 845 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 846 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 847 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 848 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 849 "data/maps/LittlerootTown/scripts.pory"
	return
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 852 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 853 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 854 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 855 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 856 "data/maps/LittlerootTown/scripts.pory"
	return
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 859 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 860 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 861 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 862 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 863 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 864 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 865 "data/maps/LittlerootTown/scripts.pory"
	return
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 868 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 869 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 870 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 871 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 872 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 873 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 874 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 875 "data/maps/LittlerootTown/scripts.pory"
	return
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 878 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 879 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 880 "data/maps/LittlerootTown/scripts.pory"
	return
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 883 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 884 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 885 "data/maps/LittlerootTown/scripts.pory"
	return
# 886 "data/maps/LittlerootTown/scripts.pory"

# 887 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 888 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 889 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 890 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 891 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 892 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 894 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 895 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 896 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 897 "data/maps/LittlerootTown/scripts.pory"
	return
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 900 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 901 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 902 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 903 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 904 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 905 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 906 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 907 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 908 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 909 "data/maps/LittlerootTown/scripts.pory"
	return
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 912 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 913 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 914 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 915 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 916 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 917 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 918 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 919 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 920 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 921 "data/maps/LittlerootTown/scripts.pory"
	return
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 924 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 925 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 926 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 927 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 928 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 929 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 930 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 931 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 932 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 933 "data/maps/LittlerootTown/scripts.pory"
	return
# 934 "data/maps/LittlerootTown/scripts.pory"

# 935 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 936 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 937 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 938 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 939 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 940 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 941 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 942 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 943 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 944 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 945 "data/maps/LittlerootTown/scripts.pory"
	return
# 946 "data/maps/LittlerootTown/scripts.pory"

# 947 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 948 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 949 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 950 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 951 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 952 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 953 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 954 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 955 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 956 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 957 "data/maps/LittlerootTown/scripts.pory"
	return
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 960 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 961 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 962 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 963 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 964 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 965 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 966 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 967 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 968 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 969 "data/maps/LittlerootTown/scripts.pory"
	return
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 972 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 973 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 974 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 975 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 976 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 977 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 978 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 979 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 980 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 981 "data/maps/LittlerootTown/scripts.pory"
	return
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 984 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 985 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 986 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 987 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 988 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 989 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 990 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 991 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 992 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 993 "data/maps/LittlerootTown/scripts.pory"
	return
# 994 "data/maps/LittlerootTown/scripts.pory"

# 995 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 996 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 998 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 999 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1002 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1003 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1006 "data/maps/LittlerootTown/scripts.pory"

# 1007 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 1008 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1010 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1012 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1013 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1014 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1015 "data/maps/LittlerootTown/scripts.pory"

# 1016 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1018 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_right
# 1027 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1028 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1029 "data/maps/LittlerootTown/scripts.pory"

# 1030 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 1031 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1032 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1033 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1034 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1035 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1036 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1037 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1038 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1039 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1040 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1042 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1043 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1044 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1045 "data/maps/LittlerootTown/scripts.pory"

# 1046 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 1047 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1048 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1049 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1050 "data/maps/LittlerootTown/scripts.pory"

# 1051 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1053 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1054 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1055 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1056 "data/maps/LittlerootTown/scripts.pory"

# 1057 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 1058 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 1074 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1075 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1076 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1077 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1078 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1079 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1080 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1081 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1082 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1083 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1084 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1085 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1086 "data/maps/LittlerootTown/scripts.pory"

# 1087 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 1088 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1091 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1092 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1093 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1094 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1096 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1097 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1098 "data/maps/LittlerootTown/scripts.pory"

# 1099 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 1100 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	face_player
# 1108 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1109 "data/maps/LittlerootTown/scripts.pory"

# 1110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1112 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1113 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1114 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1115 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1116 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1117 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1118 "data/maps/LittlerootTown/scripts.pory"

# 1119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 1120 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1121 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1122 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1123 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1124 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1125 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1126 "data/maps/LittlerootTown/scripts.pory"

# 1127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 1128 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1129 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1130 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1131 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1132 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1133 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1134 "data/maps/LittlerootTown/scripts.pory"

# 1135 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
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
	walk_left
# 1143 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1144 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1145 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1146 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1147 "data/maps/LittlerootTown/scripts.pory"

# 1148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 1149 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1150 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1151 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1152 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1153 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1154 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1155 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1156 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1157 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1158 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1159 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1160 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1161 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1162 "data/maps/LittlerootTown/scripts.pory"

# 1163 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1164 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1165 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1166 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1167 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1168 "data/maps/LittlerootTown/scripts.pory"

# 1169 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1171 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1172 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1173 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1174 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1175 "data/maps/LittlerootTown/scripts.pory"

# 1176 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
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
LittlerootTown_Movement_MomReturnHomeFemale3:
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
	walk_right
# 1199 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1200 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1201 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1203 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1205 "data/maps/LittlerootTown/scripts.pory"

# 1206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1207 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1208 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1209 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1210 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1211 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1213 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1214 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1215 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1216 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1217 "data/maps/LittlerootTown/scripts.pory"

# 1218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1219 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1220 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1221 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1222 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1223 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1224 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1225 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1226 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1227 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1228 "data/maps/LittlerootTown/scripts.pory"

# 1229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1230 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1231 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1232 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1233 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1234 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1235 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1236 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1237 "data/maps/LittlerootTown/scripts.pory"

# 1238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1239 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1240 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1241 "data/maps/LittlerootTown/scripts.pory"

# 1242 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1243 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1244 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1245 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1246 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1247 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1248 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1249 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1250 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1251 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1252 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1253 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1254 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1255 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1256 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1257 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1258 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1259 "data/maps/LittlerootTown/scripts.pory"
	end
# 1260 "data/maps/LittlerootTown/scripts.pory"

# 1261 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1262 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1263 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1264 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1265 "data/maps/LittlerootTown/scripts.pory"
	release
# 1266 "data/maps/LittlerootTown/scripts.pory"
	end
# 1267 "data/maps/LittlerootTown/scripts.pory"

# 1268 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1269 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1270 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1271 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1272 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1273 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1274 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1276 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1277 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1278 "data/maps/LittlerootTown/scripts.pory"
	return
# 1279 "data/maps/LittlerootTown/scripts.pory"

# 1280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1281 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1282 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1283 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1284 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1285 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1286 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1287 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1288 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1289 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1290 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1291 "data/maps/LittlerootTown/scripts.pory"

# 1292 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1293 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1294 "data/maps/LittlerootTown/scripts.pory"

# 1295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1296 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1297 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1298 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1299 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1300 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1301 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1302 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1303 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1304 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1305 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1306 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1307 "data/maps/LittlerootTown/scripts.pory"

# 1308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1309 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1310 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1311 "data/maps/LittlerootTown/scripts.pory"

# 1312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1313 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1314 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1315 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1316 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1317 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1318 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1319 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1320 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1321 "data/maps/LittlerootTown/scripts.pory"

# 1322 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1323 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1324 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1325 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1326 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1327 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1328 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1329 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1330 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1331 "data/maps/LittlerootTown/scripts.pory"

# 1332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1333 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1334 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1335 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1336 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1337 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1338 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1339 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1340 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1341 "data/maps/LittlerootTown/scripts.pory"

# 1342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1343 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1344 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1345 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1346 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1347 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1348 "data/maps/LittlerootTown/scripts.pory"

# 1349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1350 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1351 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1352 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1353 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1354 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1355 "data/maps/LittlerootTown/scripts.pory"

# 1356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1357 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1358 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1359 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1360 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1361 "data/maps/LittlerootTown/scripts.pory"

# 1362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1363 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1364 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1365 "data/maps/LittlerootTown/scripts.pory"

# 1366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1367 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1368 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1369 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1370 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1371 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1372 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1373 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1374 "data/maps/LittlerootTown/scripts.pory"

# 1375 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1376 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1377 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1378 "data/maps/LittlerootTown/scripts.pory"

# 1379 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1380 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1381 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1382 "data/maps/LittlerootTown/scripts.pory"

# 1383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1384 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1385 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1386 "data/maps/LittlerootTown/scripts.pory"

# 1387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1388 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1389 "data/maps/LittlerootTown/scripts.pory"

# 1390 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1391 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1392 "data/maps/LittlerootTown/scripts.pory"

# 1393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1394 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1395 "data/maps/LittlerootTown/scripts.pory"

# 1396 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1397 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1398 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1399 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1400 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1401 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1402 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1403 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1404 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1405 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
# 1406 "data/maps/LittlerootTown/scripts.pory"

# 1407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_SmartWild::
# 1408 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Smart Wild Flag.$"
# 1409 "data/maps/LittlerootTown/scripts.pory"

# 1410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_ExpAll::
# 1411 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting EXP. ALL to ON.$"
# 1412 "data/maps/LittlerootTown/scripts.pory"

# 1413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_AIvsAI::
# 1414 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting AI vs. AI Flag.$"
# 1415 "data/maps/LittlerootTown/scripts.pory"

# 1416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_TeraOrbCharge::
# 1417 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Tera Orb Charged Flag.$"
# 1418 "data/maps/LittlerootTown/scripts.pory"

# 1419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_TeraOrbCharge::
# 1420 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting Tera Charge Flag.$"
# 1421 "data/maps/LittlerootTown/scripts.pory"

# 1422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_AIvsAI::
# 1423 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting AI vs AI Flag.$"
