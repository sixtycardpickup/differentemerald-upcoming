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
	.byte 0
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Saving Birch
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 20 "data/maps/LittlerootTown/scripts.pory"

# 21 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 29 "data/maps/LittlerootTown/scripts.pory"

# 30 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 31 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 42 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransitionWeather::
# 45 "data/maps/LittlerootTown/scripts.pory"
	special GetDayOrNight
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 3, LittlerootTown_OnTransition_Night
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 2, LittlerootTown_OnTransition_Evening
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 1, LittlerootTown_OnTransition_Day
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 0, LittlerootTown_OnTransition_Morning
# 50 "data/maps/LittlerootTown/scripts.pory"
	return
# 51 "data/maps/LittlerootTown/scripts.pory"

# 52 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Morning::
# 53 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 54 "data/maps/LittlerootTown/scripts.pory"
	end
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Day::
# 57 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 58 "data/maps/LittlerootTown/scripts.pory"
	end
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Evening::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 62 "data/maps/LittlerootTown/scripts.pory"
	end
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition_Night::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 66 "data/maps/LittlerootTown/scripts.pory"
	end
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnResume::
# 69 "data/maps/LittlerootTown/scripts.pory"
	special GetDayOrNight
# 70 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 3, Littleroot_OnResume_Night
# 71 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 2, Littleroot_OnResume_Evening
# 72 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 1, Littleroot_OnResume_Day
# 73 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, 0, Littleroot_OnResume_Morning
# 74 "data/maps/LittlerootTown/scripts.pory"
	end
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Morning::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 78 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 79 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/LittlerootTown/scripts.pory"
	case 0, Littleroot_MorningSunny
# 81 "data/maps/LittlerootTown/scripts.pory"
	case 1, Littleroot_MorningRain
# 82 "data/maps/LittlerootTown/scripts.pory"
	case 2, Littleroot_MorningSunny
# 83 "data/maps/LittlerootTown/scripts.pory"
	end
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
Littleroot_MorningRain::
# 86 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_RAIN
# 87 "data/maps/LittlerootTown/scripts.pory"
	end
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
Littleroot_MorningSunny::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 91 "data/maps/LittlerootTown/scripts.pory"
	end
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Day::
# 94 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 95 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 96 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/LittlerootTown/scripts.pory"
	case 0, Littleroot_DayDrought
# 98 "data/maps/LittlerootTown/scripts.pory"
	case 1, Littleroot_DaySunny
# 99 "data/maps/LittlerootTown/scripts.pory"
	case 2, Littleroot_DaySunny
# 100 "data/maps/LittlerootTown/scripts.pory"
	end
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
Littleroot_DayDrought::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_DROUGHT
# 104 "data/maps/LittlerootTown/scripts.pory"
	end
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
Littleroot_DaySunny::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SUNNY
# 108 "data/maps/LittlerootTown/scripts.pory"
	end
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Evening::
# 111 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 2
# 112 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 113 "data/maps/LittlerootTown/scripts.pory"
	end
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
Littleroot_OnResume_Night::
# 116 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DAYNIGHT, 3
# 117 "data/maps/LittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 118 "data/maps/LittlerootTown/scripts.pory"
	end
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_AIvsAI::
# 121 "data/maps/LittlerootTown/scripts.pory"
	lock
# 122 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_AIvsAI, MSGBOX_AUTOCLOSE
# 123 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_AI_VS_AI
# 124 "data/maps/LittlerootTown/scripts.pory"
	release
# 125 "data/maps/LittlerootTown/scripts.pory"
	end
# 126 "data/maps/LittlerootTown/scripts.pory"

# 127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_TeraOrbCharge::
# 128 "data/maps/LittlerootTown/scripts.pory"
	lock
# 129 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_TeraOrbCharge, MSGBOX_AUTOCLOSE
# 130 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TERA_CHARGE
# 131 "data/maps/LittlerootTown/scripts.pory"
	release
# 132 "data/maps/LittlerootTown/scripts.pory"
	end
# 133 "data/maps/LittlerootTown/scripts.pory"

# 134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_SmartWild::
# 135 "data/maps/LittlerootTown/scripts.pory"
	lock
# 136 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_SmartWild, MSGBOX_AUTOCLOSE
# 137 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SMART_WILD
# 138 "data/maps/LittlerootTown/scripts.pory"
	release
# 139 "data/maps/LittlerootTown/scripts.pory"
	end
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_SetFlag_ExpShare::
# 142 "data/maps/LittlerootTown/scripts.pory"
	lock
# 143 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SetFlag_ExpAll, MSGBOX_AUTOCLOSE
# 144 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GEN_6_EXP_SHARE
# 145 "data/maps/LittlerootTown/scripts.pory"
	release
# 146 "data/maps/LittlerootTown/scripts.pory"
	end
# 147 "data/maps/LittlerootTown/scripts.pory"

# 148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_SmartWild::
# 149 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_SMART_WILD
# 150 "data/maps/LittlerootTown/scripts.pory"
	end
# 151 "data/maps/LittlerootTown/scripts.pory"

# 152 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_ExpShare::
# 153 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_GEN_6_EXP_SHARE
# 154 "data/maps/LittlerootTown/scripts.pory"
	end
# 155 "data/maps/LittlerootTown/scripts.pory"

# 156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_AIvsAI::
# 157 "data/maps/LittlerootTown/scripts.pory"
	lock
# 158 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_UnsetFlag_AIvsAI, MSGBOX_AUTOCLOSE
# 159 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_AI_VS_AI
# 160 "data/maps/LittlerootTown/scripts.pory"
	release
# 161 "data/maps/LittlerootTown/scripts.pory"
	end
# 162 "data/maps/LittlerootTown/scripts.pory"

# 163 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_UnsetFlag_TeraOrbCharge::
# 164 "data/maps/LittlerootTown/scripts.pory"
	lock
# 165 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_UnsetFlag_TeraOrbCharge, MSGBOX_AUTOCLOSE
# 166 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TERA_CHARGE
# 167 "data/maps/LittlerootTown/scripts.pory"
	release
# 168 "data/maps/LittlerootTown/scripts.pory"
	end
# 169 "data/maps/LittlerootTown/scripts.pory"

# 170 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_ClearTrainerFlag_Tearnest::
# 171 "data/maps/LittlerootTown/scripts.pory"
	cleartrainerflag (TRAINER_TEARNEST)
# 172 "data/maps/LittlerootTown/scripts.pory"
	end
# 173 "data/maps/LittlerootTown/scripts.pory"

# 174 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition::
# 175 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 176 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 177 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 178 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 179 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 180 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 181 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 182 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 183 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 184 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 185 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 186 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 187 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 188 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 189 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_OnTransitionWeather
# 190 "data/maps/LittlerootTown/scripts.pory"
	end
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 193 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 194 "data/maps/LittlerootTown/scripts.pory"
	return
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 197 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 198 "data/maps/LittlerootTown/scripts.pory"
	return
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 201 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 202 "data/maps/LittlerootTown/scripts.pory"
	return
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 205 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 206 "data/maps/LittlerootTown/scripts.pory"
	return
# 207 "data/maps/LittlerootTown/scripts.pory"

# 208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 209 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 210 "data/maps/LittlerootTown/scripts.pory"
	return
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 213 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 214 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 215 "data/maps/LittlerootTown/scripts.pory"
	return
# 216 "data/maps/LittlerootTown/scripts.pory"

# 217 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 218 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 219 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 220 "data/maps/LittlerootTown/scripts.pory"
	return
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 223 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 224 "data/maps/LittlerootTown/scripts.pory"
	return
# 225 "data/maps/LittlerootTown/scripts.pory"

# 226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 227 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 228 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 229 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 230 "data/maps/LittlerootTown/scripts.pory"
	return
# 231 "data/maps/LittlerootTown/scripts.pory"

# 232 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 233 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 234 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 235 "data/maps/LittlerootTown/scripts.pory"
	return
# 236 "data/maps/LittlerootTown/scripts.pory"

# 237 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 238 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 239 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 240 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 241 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 242 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 243 "data/maps/LittlerootTown/scripts.pory"
	return
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 247 "data/maps/LittlerootTown/scripts.pory"
	return
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 250 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 251 "data/maps/LittlerootTown/scripts.pory"
	return
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 254 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 255 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 256 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 257 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 260 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 261 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 262 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 263 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 264 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 265 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 266 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 267 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 268 "data/maps/LittlerootTown/scripts.pory"
	end
# 269 "data/maps/LittlerootTown/scripts.pory"

# 270 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 271 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 272 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 273 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 274 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 275 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 276 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 277 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 278 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 282 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 283 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 284 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 285 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 288 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 292 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 293 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 294 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 295 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 296 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 301 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 307 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 313 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 314 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 315 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 317 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 318 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 319 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 320 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 321 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 322 "data/maps/LittlerootTown/scripts.pory"
	return
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 330 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 331 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 338 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 339 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 340 "data/maps/LittlerootTown/scripts.pory"

# 341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 342 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 352 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 355 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 356 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 358 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 359 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 360 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 364 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 366 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 368 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 369 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 370 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 371 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 372 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 373 "data/maps/LittlerootTown/scripts.pory"
	return
# 374 "data/maps/LittlerootTown/scripts.pory"

# 375 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 380 "data/maps/LittlerootTown/scripts.pory"

# 381 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 382 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 383 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 387 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 391 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 392 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 395 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 396 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 397 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 399 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 400 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 401 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 402 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 403 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 406 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 407 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 410 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 411 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 412 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 413 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 414 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 417 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 418 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 422 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 424 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 425 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 426 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 427 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 428 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 429 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 430 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 431 "data/maps/LittlerootTown/scripts.pory"
	end
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 434 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 435 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 438 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 439 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 440 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 441 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 442 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 447 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 448 "data/maps/LittlerootTown/scripts.pory"
	end
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 451 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 452 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 453 "data/maps/LittlerootTown/scripts.pory"
	end
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 456 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 457 "data/maps/LittlerootTown/scripts.pory"
	end
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 460 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 461 "data/maps/LittlerootTown/scripts.pory"
	end
# 462 "data/maps/LittlerootTown/scripts.pory"

# 463 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 464 "data/maps/LittlerootTown/scripts.pory"
	lock
# 465 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 466 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 467 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 468 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 469 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 470 "data/maps/LittlerootTown/scripts.pory"
	release
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 474 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 475 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 476 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 480 "data/maps/LittlerootTown/scripts.pory"
	release
# 481 "data/maps/LittlerootTown/scripts.pory"
	end
# 482 "data/maps/LittlerootTown/scripts.pory"

# 483 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 484 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 485 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 486 "data/maps/LittlerootTown/scripts.pory"
	release
# 487 "data/maps/LittlerootTown/scripts.pory"
	end
# 488 "data/maps/LittlerootTown/scripts.pory"

# 489 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 490 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 491 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 492 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 493 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 494 "data/maps/LittlerootTown/scripts.pory"
	release
# 495 "data/maps/LittlerootTown/scripts.pory"
	end
# 496 "data/maps/LittlerootTown/scripts.pory"

# 497 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 498 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 499 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 502 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 503 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 504 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 505 "data/maps/LittlerootTown/scripts.pory"
	end
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 508 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 509 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 511 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 512 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 514 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 518 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 519 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 520 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 523 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 524 "data/maps/LittlerootTown/scripts.pory"
	return
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 527 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 528 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 529 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 530 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 531 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 532 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 533 "data/maps/LittlerootTown/scripts.pory"
	return
# 534 "data/maps/LittlerootTown/scripts.pory"

# 535 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 536 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 537 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 538 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 542 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 543 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 544 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 545 "data/maps/LittlerootTown/scripts.pory"
	end
# 546 "data/maps/LittlerootTown/scripts.pory"

# 547 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 548 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 549 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 550 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 551 "data/maps/LittlerootTown/scripts.pory"
	end
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 554 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 555 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 556 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 557 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 558 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 561 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 562 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 563 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 564 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 568 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 569 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 570 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 574 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 577 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 578 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 585 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 586 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 587 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 588 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 591 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 592 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 593 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 594 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 595 "data/maps/LittlerootTown/scripts.pory"

# 596 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 597 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 598 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 599 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 600 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 603 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 604 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 605 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 606 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 607 "data/maps/LittlerootTown/scripts.pory"

# 608 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 609 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 610 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 612 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 613 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 614 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 615 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 616 "data/maps/LittlerootTown/scripts.pory"
	end
# 617 "data/maps/LittlerootTown/scripts.pory"

# 618 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 619 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 620 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 621 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 622 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 623 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 624 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 625 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 626 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 629 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 630 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 633 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 634 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 636 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 637 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 638 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 641 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 647 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 648 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 652 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 653 "data/maps/LittlerootTown/scripts.pory"
	end
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 656 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 657 "data/maps/LittlerootTown/scripts.pory"
	end
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 660 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 661 "data/maps/LittlerootTown/scripts.pory"
	end
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 664 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 665 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 666 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 667 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 668 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 669 "data/maps/LittlerootTown/scripts.pory"
	end
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 672 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 676 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 677 "data/maps/LittlerootTown/scripts.pory"
	return
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 680 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 681 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 682 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 683 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 684 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 685 "data/maps/LittlerootTown/scripts.pory"
	end
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 688 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 689 "data/maps/LittlerootTown/scripts.pory"
	return
# 690 "data/maps/LittlerootTown/scripts.pory"

# 691 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 692 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 696 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 697 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 699 "data/maps/LittlerootTown/scripts.pory"
	end
# 700 "data/maps/LittlerootTown/scripts.pory"

# 701 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 702 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 703 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 704 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 705 "data/maps/LittlerootTown/scripts.pory"
	end
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 708 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 709 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 710 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 711 "data/maps/LittlerootTown/scripts.pory"
	end
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 714 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 715 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 716 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 717 "data/maps/LittlerootTown/scripts.pory"
	end
# 718 "data/maps/LittlerootTown/scripts.pory"

# 719 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 720 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 721 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 722 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 723 "data/maps/LittlerootTown/scripts.pory"
	end
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 726 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 727 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 728 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 729 "data/maps/LittlerootTown/scripts.pory"
	end
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 732 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 733 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 734 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 735 "data/maps/LittlerootTown/scripts.pory"
	end
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 738 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 741 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 742 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 743 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 744 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 745 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 746 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 747 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 748 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 749 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 750 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 751 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 752 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 753 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 754 "data/maps/LittlerootTown/scripts.pory"
	end
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 757 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 758 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 759 "data/maps/LittlerootTown/scripts.pory"
	return
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 762 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 763 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 764 "data/maps/LittlerootTown/scripts.pory"
	return
# 765 "data/maps/LittlerootTown/scripts.pory"

# 766 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	return
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	return
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 777 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 778 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 779 "data/maps/LittlerootTown/scripts.pory"
	return
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 782 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 783 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 784 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 785 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 786 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 787 "data/maps/LittlerootTown/scripts.pory"
	return
# 788 "data/maps/LittlerootTown/scripts.pory"

# 789 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 790 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 792 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 794 "data/maps/LittlerootTown/scripts.pory"
	return
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 797 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 798 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 799 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 801 "data/maps/LittlerootTown/scripts.pory"
	return
# 802 "data/maps/LittlerootTown/scripts.pory"

# 803 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 804 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 805 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 806 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 807 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 808 "data/maps/LittlerootTown/scripts.pory"
	return
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 811 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 814 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 815 "data/maps/LittlerootTown/scripts.pory"
	return
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 818 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 819 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 820 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 822 "data/maps/LittlerootTown/scripts.pory"
	return
# 823 "data/maps/LittlerootTown/scripts.pory"

# 824 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 825 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 826 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 827 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 828 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 829 "data/maps/LittlerootTown/scripts.pory"
	return
# 830 "data/maps/LittlerootTown/scripts.pory"

# 831 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 832 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 833 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 834 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 835 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 836 "data/maps/LittlerootTown/scripts.pory"
	return
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 839 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 840 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 841 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 843 "data/maps/LittlerootTown/scripts.pory"
	return
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 846 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 848 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 849 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 850 "data/maps/LittlerootTown/scripts.pory"
	return
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 853 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 854 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 855 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 856 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 857 "data/maps/LittlerootTown/scripts.pory"
	return
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 860 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 861 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 862 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 863 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 864 "data/maps/LittlerootTown/scripts.pory"
	return
# 865 "data/maps/LittlerootTown/scripts.pory"

# 866 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 867 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 868 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 869 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 870 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 871 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 872 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 873 "data/maps/LittlerootTown/scripts.pory"
	return
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 876 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 877 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 878 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 879 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 880 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 881 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 882 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 883 "data/maps/LittlerootTown/scripts.pory"
	return
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 886 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 887 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 888 "data/maps/LittlerootTown/scripts.pory"
	return
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 891 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 892 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/LittlerootTown/scripts.pory"
	return
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 896 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 897 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 898 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 899 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 900 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 901 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 902 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 903 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 904 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 905 "data/maps/LittlerootTown/scripts.pory"
	return
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 908 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 909 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 910 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 911 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 912 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 913 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 914 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 915 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 916 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 917 "data/maps/LittlerootTown/scripts.pory"
	return
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 920 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 921 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 922 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 923 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 924 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 925 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 926 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 927 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 928 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 929 "data/maps/LittlerootTown/scripts.pory"
	return
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 932 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 933 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 934 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 935 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 936 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 937 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 938 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 939 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 940 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 941 "data/maps/LittlerootTown/scripts.pory"
	return
# 942 "data/maps/LittlerootTown/scripts.pory"

# 943 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 944 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 945 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 946 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 947 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 948 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 949 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 950 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 951 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 952 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 953 "data/maps/LittlerootTown/scripts.pory"
	return
# 954 "data/maps/LittlerootTown/scripts.pory"

# 955 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 956 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 957 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 958 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 959 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 960 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 961 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 962 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 963 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 964 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 965 "data/maps/LittlerootTown/scripts.pory"
	return
# 966 "data/maps/LittlerootTown/scripts.pory"

# 967 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 968 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 969 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 970 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 971 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 972 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 973 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 974 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 975 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 976 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 977 "data/maps/LittlerootTown/scripts.pory"
	return
# 978 "data/maps/LittlerootTown/scripts.pory"

# 979 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 980 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 981 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 982 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 983 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 984 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 985 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 986 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 987 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 988 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 989 "data/maps/LittlerootTown/scripts.pory"
	return
# 990 "data/maps/LittlerootTown/scripts.pory"

# 991 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 992 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 993 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 994 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 995 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 996 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 997 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 998 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 999 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1000 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1001 "data/maps/LittlerootTown/scripts.pory"
	return
# 1002 "data/maps/LittlerootTown/scripts.pory"

# 1003 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 1004 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 1007 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1008 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1010 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1012 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1013 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1014 "data/maps/LittlerootTown/scripts.pory"

# 1015 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 1016 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1018 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1020 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1021 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1022 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1023 "data/maps/LittlerootTown/scripts.pory"

# 1024 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 1025 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1026 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1027 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1028 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1029 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1030 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1031 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1032 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1033 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1034 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1035 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1036 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 1039 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1040 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1042 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1043 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1044 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1045 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1046 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1047 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1048 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1049 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1050 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1051 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1052 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1053 "data/maps/LittlerootTown/scripts.pory"

# 1054 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 1055 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1056 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1057 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1058 "data/maps/LittlerootTown/scripts.pory"

# 1059 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1061 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1062 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1063 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1064 "data/maps/LittlerootTown/scripts.pory"

# 1065 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 1066 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1067 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1068 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1069 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1070 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1071 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
	face_player
# 1079 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1080 "data/maps/LittlerootTown/scripts.pory"

# 1081 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 1082 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1083 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
	walk_left
# 1091 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1092 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1093 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1094 "data/maps/LittlerootTown/scripts.pory"

# 1095 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 1096 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1097 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1098 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
	face_player
# 1105 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1106 "data/maps/LittlerootTown/scripts.pory"

# 1107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 1108 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1109 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1110 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1111 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1112 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1113 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1114 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1115 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1116 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1117 "data/maps/LittlerootTown/scripts.pory"

# 1118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
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
	face_player
# 1125 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1126 "data/maps/LittlerootTown/scripts.pory"

# 1127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
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
LittlerootTown_Movement_MomReturnHome1:
# 1136 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1137 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1138 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1139 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1140 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1141 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1142 "data/maps/LittlerootTown/scripts.pory"

# 1143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 1144 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1145 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1146 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1147 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1148 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1149 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1150 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1151 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1152 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1153 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1154 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1155 "data/maps/LittlerootTown/scripts.pory"

# 1156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 1157 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1158 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1159 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1160 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1161 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1162 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1163 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1164 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1165 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1166 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1167 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1168 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1169 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1170 "data/maps/LittlerootTown/scripts.pory"

# 1171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1172 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1173 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1174 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1175 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1176 "data/maps/LittlerootTown/scripts.pory"

# 1177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1178 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1179 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1180 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1182 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1183 "data/maps/LittlerootTown/scripts.pory"

# 1184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 1185 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1186 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1187 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1188 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1189 "data/maps/LittlerootTown/scripts.pory"
	walk_right
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
	walk_up
# 1197 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1198 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1199 "data/maps/LittlerootTown/scripts.pory"

# 1200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 1201 "data/maps/LittlerootTown/scripts.pory"
	walk_right
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
	walk_right
# 1209 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1210 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1211 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1213 "data/maps/LittlerootTown/scripts.pory"

# 1214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1215 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1216 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1217 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1218 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1219 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1220 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1221 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1222 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1223 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1224 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1225 "data/maps/LittlerootTown/scripts.pory"

# 1226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1227 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1228 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1229 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1230 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1231 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1232 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1233 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1234 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1235 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1236 "data/maps/LittlerootTown/scripts.pory"

# 1237 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1238 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1239 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1240 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1241 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1242 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1243 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1244 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1245 "data/maps/LittlerootTown/scripts.pory"

# 1246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1247 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1248 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1249 "data/maps/LittlerootTown/scripts.pory"

# 1250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1251 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1252 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1253 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1254 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1255 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1256 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1257 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1258 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1259 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1260 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1261 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1262 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1263 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1264 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1265 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1266 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1267 "data/maps/LittlerootTown/scripts.pory"
	end
# 1268 "data/maps/LittlerootTown/scripts.pory"

# 1269 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1270 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1271 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1272 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1273 "data/maps/LittlerootTown/scripts.pory"
	release
# 1274 "data/maps/LittlerootTown/scripts.pory"
	end
# 1275 "data/maps/LittlerootTown/scripts.pory"

# 1276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1278 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1279 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1280 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1281 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1282 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1284 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1285 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1286 "data/maps/LittlerootTown/scripts.pory"
	return
# 1287 "data/maps/LittlerootTown/scripts.pory"

# 1288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1289 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1290 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1291 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1292 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1293 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1294 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1295 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1296 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1297 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1298 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1299 "data/maps/LittlerootTown/scripts.pory"

# 1300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1301 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1302 "data/maps/LittlerootTown/scripts.pory"

# 1303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1304 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1305 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1306 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1307 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1308 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1309 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1310 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1311 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1312 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1313 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1314 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1315 "data/maps/LittlerootTown/scripts.pory"

# 1316 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1317 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1318 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1319 "data/maps/LittlerootTown/scripts.pory"

# 1320 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1321 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1322 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1323 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1324 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1325 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1326 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1327 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1328 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1329 "data/maps/LittlerootTown/scripts.pory"

# 1330 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1331 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1332 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1333 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1334 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1335 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1336 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1337 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1338 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1339 "data/maps/LittlerootTown/scripts.pory"

# 1340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1341 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1342 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1343 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1344 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1345 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1346 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1347 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1348 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1349 "data/maps/LittlerootTown/scripts.pory"

# 1350 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1351 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1352 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1353 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1354 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1355 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1356 "data/maps/LittlerootTown/scripts.pory"

# 1357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1358 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1359 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1360 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1361 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1362 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1363 "data/maps/LittlerootTown/scripts.pory"

# 1364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1365 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1366 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1367 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1368 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1369 "data/maps/LittlerootTown/scripts.pory"

# 1370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1371 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1372 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1373 "data/maps/LittlerootTown/scripts.pory"

# 1374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1375 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1376 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1377 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1378 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1379 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1380 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1381 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1382 "data/maps/LittlerootTown/scripts.pory"

# 1383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1384 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1385 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1386 "data/maps/LittlerootTown/scripts.pory"

# 1387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1388 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1389 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1390 "data/maps/LittlerootTown/scripts.pory"

# 1391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1392 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1393 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1394 "data/maps/LittlerootTown/scripts.pory"

# 1395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1396 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1397 "data/maps/LittlerootTown/scripts.pory"

# 1398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1399 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1400 "data/maps/LittlerootTown/scripts.pory"

# 1401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1402 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1403 "data/maps/LittlerootTown/scripts.pory"

# 1404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1405 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1406 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1407 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1408 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1409 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1410 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1411 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1412 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1413 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
# 1414 "data/maps/LittlerootTown/scripts.pory"

# 1415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_SmartWild::
# 1416 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Smart Wild Flag.$"
# 1417 "data/maps/LittlerootTown/scripts.pory"

# 1418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_ExpAll::
# 1419 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting EXP. ALL to ON.$"
# 1420 "data/maps/LittlerootTown/scripts.pory"

# 1421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_AIvsAI::
# 1422 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting AI vs. AI Flag.$"
# 1423 "data/maps/LittlerootTown/scripts.pory"

# 1424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_TeraOrbCharge::
# 1425 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Tera Orb Charged Flag.$"
# 1426 "data/maps/LittlerootTown/scripts.pory"

# 1427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_TeraOrbCharge::
# 1428 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting Tera Charge Flag.$"
# 1429 "data/maps/LittlerootTown/scripts.pory"

# 1430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_AIvsAI::
# 1431 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting AI vs AI Flag.$"
