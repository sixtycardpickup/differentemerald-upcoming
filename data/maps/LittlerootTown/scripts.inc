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
	call LittlerootTown_OnTransitionWeather
# 180 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 181 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 182 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 183 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 184 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 185 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 186 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 187 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 188 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 189 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 190 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_OnTransitionWeather
# 191 "data/maps/LittlerootTown/scripts.pory"
	end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 194 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 195 "data/maps/LittlerootTown/scripts.pory"
	return
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 198 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 199 "data/maps/LittlerootTown/scripts.pory"
	return
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 202 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 203 "data/maps/LittlerootTown/scripts.pory"
	return
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 206 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 207 "data/maps/LittlerootTown/scripts.pory"
	return
# 208 "data/maps/LittlerootTown/scripts.pory"

# 209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 210 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 211 "data/maps/LittlerootTown/scripts.pory"
	return
# 212 "data/maps/LittlerootTown/scripts.pory"

# 213 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 214 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 215 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 216 "data/maps/LittlerootTown/scripts.pory"
	return
# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 219 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 220 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 221 "data/maps/LittlerootTown/scripts.pory"
	return
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 224 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 225 "data/maps/LittlerootTown/scripts.pory"
	return
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 228 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 229 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 230 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 231 "data/maps/LittlerootTown/scripts.pory"
	return
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 234 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 235 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 236 "data/maps/LittlerootTown/scripts.pory"
	return
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 239 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 240 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 241 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 242 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 243 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 244 "data/maps/LittlerootTown/scripts.pory"
	return
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 248 "data/maps/LittlerootTown/scripts.pory"
	return
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 251 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 252 "data/maps/LittlerootTown/scripts.pory"
	return
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 255 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 256 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 257 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 258 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 261 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 262 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 263 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 264 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 265 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 266 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 267 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 268 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 272 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 273 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 274 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 275 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 276 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 277 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 278 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 279 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 280 "data/maps/LittlerootTown/scripts.pory"
	end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 283 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 284 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 285 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 286 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 288 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 289 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 290 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 291 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 293 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 294 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 295 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 296 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 297 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 298 "data/maps/LittlerootTown/scripts.pory"
	end
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 301 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 302 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 306 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 308 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 310 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 311 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 313 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 314 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 316 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 317 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 318 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 319 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 320 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 322 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 323 "data/maps/LittlerootTown/scripts.pory"
	return
# 324 "data/maps/LittlerootTown/scripts.pory"

# 325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 328 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 329 "data/maps/LittlerootTown/scripts.pory"

# 330 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 331 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 332 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 335 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 339 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 344 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 347 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 348 "data/maps/LittlerootTown/scripts.pory"

# 349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 353 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 356 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 357 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 359 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 360 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 361 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 362 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 364 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 366 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 367 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 368 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 369 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 370 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 371 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 372 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 373 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 374 "data/maps/LittlerootTown/scripts.pory"
	return
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 380 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 383 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 384 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 388 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 389 "data/maps/LittlerootTown/scripts.pory"

# 390 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 392 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 393 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 396 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 397 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 400 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 401 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 402 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 403 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 407 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 408 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 411 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 412 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 413 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 414 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 415 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 418 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 419 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 420 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 422 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 423 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 424 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 425 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 426 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 427 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 428 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 429 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 430 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 431 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 432 "data/maps/LittlerootTown/scripts.pory"
	end
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 435 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 436 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 439 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 440 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 441 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 442 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 443 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 444 "data/maps/LittlerootTown/scripts.pory"
	end
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 447 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 448 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 449 "data/maps/LittlerootTown/scripts.pory"
	end
# 450 "data/maps/LittlerootTown/scripts.pory"

# 451 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 452 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 453 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 454 "data/maps/LittlerootTown/scripts.pory"
	end
# 455 "data/maps/LittlerootTown/scripts.pory"

# 456 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 457 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 461 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 465 "data/maps/LittlerootTown/scripts.pory"
	lock
# 466 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 467 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 468 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 470 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 471 "data/maps/LittlerootTown/scripts.pory"
	release
# 472 "data/maps/LittlerootTown/scripts.pory"
	end
# 473 "data/maps/LittlerootTown/scripts.pory"

# 474 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 475 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 476 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 477 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 478 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 479 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 481 "data/maps/LittlerootTown/scripts.pory"
	release
# 482 "data/maps/LittlerootTown/scripts.pory"
	end
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 485 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 486 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 487 "data/maps/LittlerootTown/scripts.pory"
	release
# 488 "data/maps/LittlerootTown/scripts.pory"
	end
# 489 "data/maps/LittlerootTown/scripts.pory"

# 490 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 491 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 492 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 493 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 494 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 495 "data/maps/LittlerootTown/scripts.pory"
	release
# 496 "data/maps/LittlerootTown/scripts.pory"
	end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 499 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 500 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 501 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 502 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 506 "data/maps/LittlerootTown/scripts.pory"
	end
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 509 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 510 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 511 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
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
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 519 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 520 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 521 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
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
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 528 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 529 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 530 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 531 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 533 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 537 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 538 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 539 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 540 "data/maps/LittlerootTown/scripts.pory"
	end
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 543 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 544 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 545 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 546 "data/maps/LittlerootTown/scripts.pory"
	end
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 549 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 550 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 551 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 552 "data/maps/LittlerootTown/scripts.pory"
	end
# 553 "data/maps/LittlerootTown/scripts.pory"

# 554 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 555 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 556 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 557 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 558 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 559 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 561 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 562 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 563 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 564 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 568 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 569 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 571 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 574 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 575 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 578 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 585 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 586 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 587 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 588 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 589 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 592 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 593 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 594 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 595 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 598 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 600 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 601 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 602 "data/maps/LittlerootTown/scripts.pory"

# 603 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 604 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 605 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 606 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 607 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 608 "data/maps/LittlerootTown/scripts.pory"

# 609 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 610 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 614 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 615 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 617 "data/maps/LittlerootTown/scripts.pory"
	end
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 620 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 621 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 622 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 623 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 624 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 625 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 626 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 629 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 630 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 631 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 634 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 636 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 637 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 638 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 639 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 640 "data/maps/LittlerootTown/scripts.pory"

# 641 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 642 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 648 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 649 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 653 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 654 "data/maps/LittlerootTown/scripts.pory"
	end
# 655 "data/maps/LittlerootTown/scripts.pory"

# 656 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 657 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 658 "data/maps/LittlerootTown/scripts.pory"
	end
# 659 "data/maps/LittlerootTown/scripts.pory"

# 660 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 661 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 662 "data/maps/LittlerootTown/scripts.pory"
	end
# 663 "data/maps/LittlerootTown/scripts.pory"

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 665 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 666 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 667 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 668 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 669 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 670 "data/maps/LittlerootTown/scripts.pory"
	end
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 673 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 674 "data/maps/LittlerootTown/scripts.pory"
	return
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 677 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 681 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 682 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 683 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 684 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 685 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 686 "data/maps/LittlerootTown/scripts.pory"
	end
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 689 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 693 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 694 "data/maps/LittlerootTown/scripts.pory"
	return
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 697 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 698 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 700 "data/maps/LittlerootTown/scripts.pory"
	end
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 703 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 704 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 705 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 706 "data/maps/LittlerootTown/scripts.pory"
	end
# 707 "data/maps/LittlerootTown/scripts.pory"

# 708 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 709 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 710 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 711 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 712 "data/maps/LittlerootTown/scripts.pory"
	end
# 713 "data/maps/LittlerootTown/scripts.pory"

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 715 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 716 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 717 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 718 "data/maps/LittlerootTown/scripts.pory"
	end
# 719 "data/maps/LittlerootTown/scripts.pory"

# 720 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 721 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 722 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 723 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 724 "data/maps/LittlerootTown/scripts.pory"
	end
# 725 "data/maps/LittlerootTown/scripts.pory"

# 726 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 727 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 728 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 729 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 730 "data/maps/LittlerootTown/scripts.pory"
	end
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 733 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 734 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 735 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 736 "data/maps/LittlerootTown/scripts.pory"
	end
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 739 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 741 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 742 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 743 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 744 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 745 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 746 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 747 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 748 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 749 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 750 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 751 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 752 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 753 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 754 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 755 "data/maps/LittlerootTown/scripts.pory"
	end
# 756 "data/maps/LittlerootTown/scripts.pory"

# 757 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 758 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 759 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 760 "data/maps/LittlerootTown/scripts.pory"
	return
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 763 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 764 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 765 "data/maps/LittlerootTown/scripts.pory"
	return
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 768 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 770 "data/maps/LittlerootTown/scripts.pory"
	return
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 773 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 775 "data/maps/LittlerootTown/scripts.pory"
	return
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 778 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 779 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 780 "data/maps/LittlerootTown/scripts.pory"
	return
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 783 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 784 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 785 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 786 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 787 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 788 "data/maps/LittlerootTown/scripts.pory"
	return
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 791 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 793 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 795 "data/maps/LittlerootTown/scripts.pory"
	return
# 796 "data/maps/LittlerootTown/scripts.pory"

# 797 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 798 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	return
# 803 "data/maps/LittlerootTown/scripts.pory"

# 804 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 805 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	return
# 810 "data/maps/LittlerootTown/scripts.pory"

# 811 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 812 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 814 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 816 "data/maps/LittlerootTown/scripts.pory"
	return
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 819 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 821 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 822 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 823 "data/maps/LittlerootTown/scripts.pory"
	return
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 826 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 828 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 829 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 830 "data/maps/LittlerootTown/scripts.pory"
	return
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 833 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 834 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 835 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 836 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 837 "data/maps/LittlerootTown/scripts.pory"
	return
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 840 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 841 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 842 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 843 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 844 "data/maps/LittlerootTown/scripts.pory"
	return
# 845 "data/maps/LittlerootTown/scripts.pory"

# 846 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 847 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 848 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 849 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 850 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 851 "data/maps/LittlerootTown/scripts.pory"
	return
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 854 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 855 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 856 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 857 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 858 "data/maps/LittlerootTown/scripts.pory"
	return
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 861 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 862 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 863 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 864 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 865 "data/maps/LittlerootTown/scripts.pory"
	return
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 868 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 869 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 870 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 871 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 872 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 873 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 874 "data/maps/LittlerootTown/scripts.pory"
	return
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 877 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 878 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 879 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 880 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 881 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 882 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 883 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 884 "data/maps/LittlerootTown/scripts.pory"
	return
# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 887 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 889 "data/maps/LittlerootTown/scripts.pory"
	return
# 890 "data/maps/LittlerootTown/scripts.pory"

# 891 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 892 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 894 "data/maps/LittlerootTown/scripts.pory"
	return
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 897 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 898 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 899 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 900 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 901 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 902 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 903 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 904 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 905 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 906 "data/maps/LittlerootTown/scripts.pory"
	return
# 907 "data/maps/LittlerootTown/scripts.pory"

# 908 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 909 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 910 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 911 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 912 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 913 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 914 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 915 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 916 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 917 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 918 "data/maps/LittlerootTown/scripts.pory"
	return
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 921 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 922 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 923 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 924 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 925 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 926 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 927 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 928 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 929 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 930 "data/maps/LittlerootTown/scripts.pory"
	return
# 931 "data/maps/LittlerootTown/scripts.pory"

# 932 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 933 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 934 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 935 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 936 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 937 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 938 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 939 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 940 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 941 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 942 "data/maps/LittlerootTown/scripts.pory"
	return
# 943 "data/maps/LittlerootTown/scripts.pory"

# 944 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 945 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 946 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 947 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 948 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 949 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 950 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 951 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 952 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 953 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 954 "data/maps/LittlerootTown/scripts.pory"
	return
# 955 "data/maps/LittlerootTown/scripts.pory"

# 956 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 957 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 958 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 959 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 960 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 961 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 962 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 963 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 964 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 965 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 966 "data/maps/LittlerootTown/scripts.pory"
	return
# 967 "data/maps/LittlerootTown/scripts.pory"

# 968 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 969 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 970 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 971 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 972 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 973 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 974 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 975 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 976 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 977 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 978 "data/maps/LittlerootTown/scripts.pory"
	return
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 981 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 982 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 983 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 984 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 985 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 986 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 987 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 988 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 989 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 990 "data/maps/LittlerootTown/scripts.pory"
	return
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 993 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 994 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 995 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 996 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 997 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 998 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 999 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1000 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1001 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1002 "data/maps/LittlerootTown/scripts.pory"
	return
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1006 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1007 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 1008 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 1010 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1011 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1012 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1013 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1014 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1015 "data/maps/LittlerootTown/scripts.pory"

# 1016 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
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
	walk_up
# 1023 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1024 "data/maps/LittlerootTown/scripts.pory"

# 1025 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 1026 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1027 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_right
# 1036 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1037 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1038 "data/maps/LittlerootTown/scripts.pory"

# 1039 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_right
# 1052 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1053 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1054 "data/maps/LittlerootTown/scripts.pory"

# 1055 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 1056 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1057 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1058 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1059 "data/maps/LittlerootTown/scripts.pory"

# 1060 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 1061 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1062 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1063 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1064 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1065 "data/maps/LittlerootTown/scripts.pory"

# 1066 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 1067 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_left
# 1079 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1080 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1081 "data/maps/LittlerootTown/scripts.pory"

# 1082 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
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
	walk_left
# 1091 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1092 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1093 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1094 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1095 "data/maps/LittlerootTown/scripts.pory"

# 1096 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 1097 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_left
# 1105 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1106 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1107 "data/maps/LittlerootTown/scripts.pory"

# 1108 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 1109 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_left
# 1116 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 1117 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1118 "data/maps/LittlerootTown/scripts.pory"

# 1119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
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
	face_player
# 1126 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1127 "data/maps/LittlerootTown/scripts.pory"

# 1128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 1129 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1130 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1131 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1132 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1133 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1134 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1135 "data/maps/LittlerootTown/scripts.pory"

# 1136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 1137 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1138 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1139 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1140 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1141 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1142 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1143 "data/maps/LittlerootTown/scripts.pory"

# 1144 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
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
	walk_left
# 1153 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1154 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1155 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1156 "data/maps/LittlerootTown/scripts.pory"

# 1157 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
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
	walk_left
# 1168 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1169 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1170 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1171 "data/maps/LittlerootTown/scripts.pory"

# 1172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1173 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1174 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1175 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1176 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1177 "data/maps/LittlerootTown/scripts.pory"

# 1178 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1179 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1180 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1182 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1183 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1184 "data/maps/LittlerootTown/scripts.pory"

# 1185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
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
	walk_right
# 1197 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1198 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1200 "data/maps/LittlerootTown/scripts.pory"

# 1201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
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
	walk_right
# 1211 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1212 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1213 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1214 "data/maps/LittlerootTown/scripts.pory"

# 1215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
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
	walk_right
# 1223 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1224 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1225 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1226 "data/maps/LittlerootTown/scripts.pory"

# 1227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
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
	walk_right
# 1234 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1235 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1236 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1237 "data/maps/LittlerootTown/scripts.pory"

# 1238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1239 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1240 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1241 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1242 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1243 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1244 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1245 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1246 "data/maps/LittlerootTown/scripts.pory"

# 1247 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1248 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1249 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1250 "data/maps/LittlerootTown/scripts.pory"

# 1251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1252 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1253 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1254 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1255 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1256 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1257 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1258 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1259 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1260 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1261 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1262 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1263 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1264 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1265 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1266 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1267 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1268 "data/maps/LittlerootTown/scripts.pory"
	end
# 1269 "data/maps/LittlerootTown/scripts.pory"

# 1270 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1271 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1272 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1273 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1274 "data/maps/LittlerootTown/scripts.pory"
	release
# 1275 "data/maps/LittlerootTown/scripts.pory"
	end
# 1276 "data/maps/LittlerootTown/scripts.pory"

# 1277 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1278 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1279 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1280 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1281 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1282 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1284 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1285 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1286 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1287 "data/maps/LittlerootTown/scripts.pory"
	return
# 1288 "data/maps/LittlerootTown/scripts.pory"

# 1289 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1290 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1291 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1292 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1293 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1294 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1295 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1296 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1297 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1298 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1299 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1300 "data/maps/LittlerootTown/scripts.pory"

# 1301 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1302 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1303 "data/maps/LittlerootTown/scripts.pory"

# 1304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1305 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1306 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1307 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1308 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1309 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1310 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1311 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1312 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1313 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1314 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1315 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1316 "data/maps/LittlerootTown/scripts.pory"

# 1317 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1318 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1319 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1320 "data/maps/LittlerootTown/scripts.pory"

# 1321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1322 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1323 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1324 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1325 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1326 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1327 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1328 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1329 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1330 "data/maps/LittlerootTown/scripts.pory"

# 1331 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1332 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1333 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1334 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1335 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1336 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1337 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1338 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1339 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1340 "data/maps/LittlerootTown/scripts.pory"

# 1341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1342 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1343 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1344 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1345 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1346 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1347 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1348 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1349 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1350 "data/maps/LittlerootTown/scripts.pory"

# 1351 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1352 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1353 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1354 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1355 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1356 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1357 "data/maps/LittlerootTown/scripts.pory"

# 1358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1359 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1360 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1361 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1362 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1363 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1364 "data/maps/LittlerootTown/scripts.pory"

# 1365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1366 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1367 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1368 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1369 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1370 "data/maps/LittlerootTown/scripts.pory"

# 1371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1372 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1373 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1374 "data/maps/LittlerootTown/scripts.pory"

# 1375 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1376 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1377 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1378 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1379 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1380 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1381 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1382 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1383 "data/maps/LittlerootTown/scripts.pory"

# 1384 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1385 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1386 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1387 "data/maps/LittlerootTown/scripts.pory"

# 1388 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1389 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1390 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1391 "data/maps/LittlerootTown/scripts.pory"

# 1392 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1393 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1394 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1395 "data/maps/LittlerootTown/scripts.pory"

# 1396 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1397 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1398 "data/maps/LittlerootTown/scripts.pory"

# 1399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1400 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1401 "data/maps/LittlerootTown/scripts.pory"

# 1402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1403 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1404 "data/maps/LittlerootTown/scripts.pory"

# 1405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1406 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1407 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1408 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1409 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1410 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1411 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1412 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1413 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1414 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
# 1415 "data/maps/LittlerootTown/scripts.pory"

# 1416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_SmartWild::
# 1417 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Smart Wild Flag.$"
# 1418 "data/maps/LittlerootTown/scripts.pory"

# 1419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_ExpAll::
# 1420 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting EXP. ALL to ON.$"
# 1421 "data/maps/LittlerootTown/scripts.pory"

# 1422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_AIvsAI::
# 1423 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting AI vs. AI Flag.$"
# 1424 "data/maps/LittlerootTown/scripts.pory"

# 1425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SetFlag_TeraOrbCharge::
# 1426 "data/maps/LittlerootTown/scripts.pory"
	.string "Setting Tera Orb Charged Flag.$"
# 1427 "data/maps/LittlerootTown/scripts.pory"

# 1428 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_TeraOrbCharge::
# 1429 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting Tera Charge Flag.$"
# 1430 "data/maps/LittlerootTown/scripts.pory"

# 1431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_UnsetFlag_AIvsAI::
# 1432 "data/maps/LittlerootTown/scripts.pory"
	.string "Unsetting AI vs AI Flag.$"
