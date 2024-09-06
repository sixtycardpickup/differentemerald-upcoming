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
	.byte 0
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Received Running Shoes
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Saving Birch
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_HideScienceMan
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 2, LittlerootTown_EventScript_HideScienceMan
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 1, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 4, LittlerootTown_EventScript_ShowScienceMan
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 59 "data/maps/LittlerootTown/scripts.pory"
	end
# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideScienceMan:
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowScienceMan:
# 66 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 74 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 75 "data/maps/LittlerootTown/scripts.pory"
	return
# 76 "data/maps/LittlerootTown/scripts.pory"

# 77 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 78 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 83 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 84 "data/maps/LittlerootTown/scripts.pory"
	return
# 85 "data/maps/LittlerootTown/scripts.pory"

# 86 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 87 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 88 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 93 "data/maps/LittlerootTown/scripts.pory"
	return
# 94 "data/maps/LittlerootTown/scripts.pory"

# 95 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 96 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 97 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 107 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 108 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 109 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 110 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 111 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 112 "data/maps/LittlerootTown/scripts.pory"
	return
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 115 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 116 "data/maps/LittlerootTown/scripts.pory"
	return
# 117 "data/maps/LittlerootTown/scripts.pory"

# 118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 119 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 120 "data/maps/LittlerootTown/scripts.pory"
	return
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 123 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 124 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 125 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 126 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 129 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 132 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 133 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 134 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 135 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 136 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 137 "data/maps/LittlerootTown/scripts.pory"
	end
# 138 "data/maps/LittlerootTown/scripts.pory"

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 140 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 141 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 142 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 143 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 144 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 145 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 147 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 148 "data/maps/LittlerootTown/scripts.pory"
	end
# 149 "data/maps/LittlerootTown/scripts.pory"

# 150 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 151 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 152 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 153 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 157 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 162 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 163 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 164 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_GoInsideWithMom2Male
# 165 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_GoInsideWithMom2Female
# 166 "data/maps/LittlerootTown/scripts.pory"
	end
# 167 "data/maps/LittlerootTown/scripts.pory"

# 168 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 169 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 170 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 171 "data/maps/LittlerootTown/scripts.pory"

# 172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Male::
# 173 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachMalePlayerAtTruck
# 174 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 176 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 177 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorMale
# 178 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerApproachDoor
# 179 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 181 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 182 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseMale
# 183 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MalePlayerEnterHouse
# 184 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 186 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 187 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 188 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 189 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 190 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 191 "data/maps/LittlerootTown/scripts.pory"
	return
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachMalePlayerAtTruck:
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorMale:
# 199 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 200 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseMale:
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerApproachDoor:
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 213 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown/scripts.pory"

# 217 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MalePlayerEnterHouse:
# 218 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 221 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom2Female::
# 224 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachFemalePlayerAtTruck
# 225 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 227 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoorFemale
# 229 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerApproachDoor
# 230 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 232 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 233 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouseFemale
# 234 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_FemalePlayerEnterHouse
# 235 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 237 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 238 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 239 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 240 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 241 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 242 "data/maps/LittlerootTown/scripts.pory"
	return
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachFemalePlayerAtTruck:
# 245 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 246 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 248 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoorFemale:
# 251 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 252 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 253 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 254 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 255 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 256 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouseFemale:
# 259 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 261 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerApproachDoor:
# 264 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 265 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 266 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 267 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 268 "data/maps/LittlerootTown/scripts.pory"
	jump_2_down
# 269 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 270 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 271 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 272 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_FemalePlayerEnterHouse:
# 275 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 276 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 279 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 280 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 281 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 282 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 283 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 286 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 287 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 288 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 289 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 291 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 293 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 294 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 295 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 296 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 297 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 299 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 303 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 304 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 305 "data/maps/LittlerootTown/scripts.pory"

# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 307 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 308 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 309 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 310 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 311 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 312 "data/maps/LittlerootTown/scripts.pory"
	end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 315 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 316 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 317 "data/maps/LittlerootTown/scripts.pory"
	end
# 318 "data/maps/LittlerootTown/scripts.pory"

# 319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 320 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 321 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 322 "data/maps/LittlerootTown/scripts.pory"
	end
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 325 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 326 "data/maps/LittlerootTown/scripts.pory"
	end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 329 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 330 "data/maps/LittlerootTown/scripts.pory"
	end
# 331 "data/maps/LittlerootTown/scripts.pory"

# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 333 "data/maps/LittlerootTown/scripts.pory"
	lock
# 334 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 335 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 336 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 337 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 338 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 339 "data/maps/LittlerootTown/scripts.pory"
	release
# 340 "data/maps/LittlerootTown/scripts.pory"
	end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 343 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 344 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 345 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 346 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 347 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 349 "data/maps/LittlerootTown/scripts.pory"
	release
# 350 "data/maps/LittlerootTown/scripts.pory"
	end
# 351 "data/maps/LittlerootTown/scripts.pory"

# 352 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 353 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 354 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 355 "data/maps/LittlerootTown/scripts.pory"
	release
# 356 "data/maps/LittlerootTown/scripts.pory"
	end
# 357 "data/maps/LittlerootTown/scripts.pory"

# 358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 359 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 360 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 362 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 363 "data/maps/LittlerootTown/scripts.pory"
	release
# 364 "data/maps/LittlerootTown/scripts.pory"
	end
# 365 "data/maps/LittlerootTown/scripts.pory"

# 366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 367 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 368 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 369 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 371 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 372 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 373 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 374 "data/maps/LittlerootTown/scripts.pory"
	end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 377 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 378 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 379 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 380 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 381 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 383 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 384 "data/maps/LittlerootTown/scripts.pory"
	return
# 385 "data/maps/LittlerootTown/scripts.pory"

# 386 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 387 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 388 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 392 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 393 "data/maps/LittlerootTown/scripts.pory"
	return
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 396 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 397 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 399 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 401 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 402 "data/maps/LittlerootTown/scripts.pory"
	return
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 405 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 406 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 407 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 411 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 412 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 413 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 414 "data/maps/LittlerootTown/scripts.pory"
	end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 417 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 418 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 419 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 420 "data/maps/LittlerootTown/scripts.pory"
	end
# 421 "data/maps/LittlerootTown/scripts.pory"

# 422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 423 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 424 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 425 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 426 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 427 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 428 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 429 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 430 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 431 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 432 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 433 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 434 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 435 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 436 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 437 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 438 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 439 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 442 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 443 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 447 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 448 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 449 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 450 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 451 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 452 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 453 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 454 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 455 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 456 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 457 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 460 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 462 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 463 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 466 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 467 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 468 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 469 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 470 "data/maps/LittlerootTown/scripts.pory"

# 471 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 472 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 473 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 474 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 475 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 476 "data/maps/LittlerootTown/scripts.pory"

# 477 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 478 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 479 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 480 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 481 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 482 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 483 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 484 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 485 "data/maps/LittlerootTown/scripts.pory"
	end
# 486 "data/maps/LittlerootTown/scripts.pory"

# 487 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 488 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 489 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 490 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 491 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 492 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 493 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 494 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 495 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 496 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 497 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 498 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 499 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 502 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 503 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 504 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 505 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 506 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 510 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 511 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 512 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 516 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 517 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 521 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 522 "data/maps/LittlerootTown/scripts.pory"
	end
# 523 "data/maps/LittlerootTown/scripts.pory"

# 524 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 525 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 526 "data/maps/LittlerootTown/scripts.pory"
	end
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 529 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 530 "data/maps/LittlerootTown/scripts.pory"
	end
# 531 "data/maps/LittlerootTown/scripts.pory"

# 532 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 533 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 534 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 535 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 537 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 538 "data/maps/LittlerootTown/scripts.pory"
	end
# 539 "data/maps/LittlerootTown/scripts.pory"

# 540 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 541 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 545 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 549 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 550 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 551 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 552 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 553 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 554 "data/maps/LittlerootTown/scripts.pory"
	end
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 557 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 558 "data/maps/LittlerootTown/scripts.pory"
	return
# 559 "data/maps/LittlerootTown/scripts.pory"

# 560 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 561 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 565 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 566 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 568 "data/maps/LittlerootTown/scripts.pory"
	end
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 571 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 572 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 573 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 574 "data/maps/LittlerootTown/scripts.pory"
	end
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 577 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 578 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 579 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 580 "data/maps/LittlerootTown/scripts.pory"
	end
# 581 "data/maps/LittlerootTown/scripts.pory"

# 582 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 583 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 584 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 585 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 586 "data/maps/LittlerootTown/scripts.pory"
	end
# 587 "data/maps/LittlerootTown/scripts.pory"

# 588 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 589 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 590 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 591 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 592 "data/maps/LittlerootTown/scripts.pory"
	end
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 595 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 596 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 597 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 598 "data/maps/LittlerootTown/scripts.pory"
	end
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger6::
# 601 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 602 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 6
# 603 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 604 "data/maps/LittlerootTown/scripts.pory"
	end
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 607 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 610 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 613 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 614 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 615 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 618 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 619 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 622 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 623 "data/maps/LittlerootTown/scripts.pory"
	end
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 627 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 632 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	return
# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayerMale2
# 647 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayerMale3
# 648 "data/maps/LittlerootTown/scripts.pory"
	return
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 651 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 652 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 653 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 654 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 655 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomApproachPlayerFemale6
# 656 "data/maps/LittlerootTown/scripts.pory"
	return
# 657 "data/maps/LittlerootTown/scripts.pory"

# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 659 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	return
# 664 "data/maps/LittlerootTown/scripts.pory"

# 665 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 666 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	return
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 673 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	return
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 680 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	return
# 685 "data/maps/LittlerootTown/scripts.pory"

# 686 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 687 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	return
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	return
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	return
# 713 "data/maps/LittlerootTown/scripts.pory"

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 715 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	return
# 720 "data/maps/LittlerootTown/scripts.pory"

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale6::
# 729 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale6
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 736 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHome0
# 737 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHome1
# 738 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHomeMale2
# 739 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHomeMale3
# 740 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 741 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 742 "data/maps/LittlerootTown/scripts.pory"
	return
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 745 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 746 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 747 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 748 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 749 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 750 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 751 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 6, LittlerootTown_EventScript_MomReturnHomeFemale6
# 752 "data/maps/LittlerootTown/scripts.pory"
	return
# 753 "data/maps/LittlerootTown/scripts.pory"

# 754 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 755 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 757 "data/maps/LittlerootTown/scripts.pory"
	return
# 758 "data/maps/LittlerootTown/scripts.pory"

# 759 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 760 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 762 "data/maps/LittlerootTown/scripts.pory"
	return
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 765 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 767 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 769 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 770 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 771 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 772 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 774 "data/maps/LittlerootTown/scripts.pory"
	return
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 777 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 778 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 779 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 781 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 782 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 783 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 784 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 786 "data/maps/LittlerootTown/scripts.pory"
	return
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 789 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 790 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 791 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 794 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 795 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 796 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 798 "data/maps/LittlerootTown/scripts.pory"
	return
# 799 "data/maps/LittlerootTown/scripts.pory"

# 800 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 801 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 803 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 805 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 806 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 807 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 808 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 810 "data/maps/LittlerootTown/scripts.pory"
	return
# 811 "data/maps/LittlerootTown/scripts.pory"

# 812 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 813 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 814 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 815 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 817 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 818 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 819 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 820 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 822 "data/maps/LittlerootTown/scripts.pory"
	return
# 823 "data/maps/LittlerootTown/scripts.pory"

# 824 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 825 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 826 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 827 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 828 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 829 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 830 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 831 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 832 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 833 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 834 "data/maps/LittlerootTown/scripts.pory"
	return
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 837 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 838 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 839 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 840 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 841 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 843 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 844 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 845 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 846 "data/maps/LittlerootTown/scripts.pory"
	return
# 847 "data/maps/LittlerootTown/scripts.pory"

# 848 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 849 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 850 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 851 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 852 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 853 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 854 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 855 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 856 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 857 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 858 "data/maps/LittlerootTown/scripts.pory"
	return
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale6::
# 861 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale6
# 862 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 863 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 864 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 865 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 866 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 867 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 868 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 869 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 870 "data/maps/LittlerootTown/scripts.pory"
	return
# 871 "data/maps/LittlerootTown/scripts.pory"

# 872 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_faster_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 883 "data/maps/LittlerootTown/scripts.pory"

# 884 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 904 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 905 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 920 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 921 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 926 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 927 "data/maps/LittlerootTown/scripts.pory"

# 928 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 932 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 947 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 948 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 956 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 957 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 961 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 962 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 963 "data/maps/LittlerootTown/scripts.pory"

# 964 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 965 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 969 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 973 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 974 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 977 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 978 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 979 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 980 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 981 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 982 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 983 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 984 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 985 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 986 "data/maps/LittlerootTown/scripts.pory"

# 987 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale6:
# 988 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 989 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 990 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 991 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 992 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 993 "data/maps/LittlerootTown/scripts.pory"
	face_player
# 994 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 995 "data/maps/LittlerootTown/scripts.pory"

# 996 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 997 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 998 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 999 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1000 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1001 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1002 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1006 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1007 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1008 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1009 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1010 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1014 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1015 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1016 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1017 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1018 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1020 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1021 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1022 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1023 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1024 "data/maps/LittlerootTown/scripts.pory"

# 1025 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
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
	walk_left
# 1034 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1035 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1036 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1037 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1038 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1039 "data/maps/LittlerootTown/scripts.pory"

# 1040 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 1041 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1042 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1043 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1044 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1045 "data/maps/LittlerootTown/scripts.pory"

# 1046 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 1047 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1048 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1049 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1050 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1051 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1052 "data/maps/LittlerootTown/scripts.pory"

# 1053 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1055 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1056 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1057 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1058 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1059 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1060 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1061 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1062 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1063 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1064 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1065 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1066 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1067 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1068 "data/maps/LittlerootTown/scripts.pory"

# 1069 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 1070 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1071 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1072 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1073 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1074 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1075 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1076 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1077 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1078 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1079 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1080 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1081 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1082 "data/maps/LittlerootTown/scripts.pory"

# 1083 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 1084 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1085 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1086 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1087 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1088 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1091 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1092 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1093 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1094 "data/maps/LittlerootTown/scripts.pory"

# 1095 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 1096 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1097 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1098 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1099 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1100 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1101 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1102 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1103 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1104 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1105 "data/maps/LittlerootTown/scripts.pory"

# 1106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale6:
# 1107 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1108 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1109 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1110 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1111 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1112 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 1113 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1114 "data/maps/LittlerootTown/scripts.pory"

# 1115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 1116 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1117 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 1118 "data/maps/LittlerootTown/scripts.pory"

# 1119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 1120 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1121 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1122 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 1123 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 1124 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 1125 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 1126 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 1127 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1128 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 1129 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1130 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 1131 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1132 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 1133 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 1134 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 1135 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 1136 "data/maps/LittlerootTown/scripts.pory"
	end
# 1137 "data/maps/LittlerootTown/scripts.pory"

# 1138 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 1139 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1140 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1141 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1142 "data/maps/LittlerootTown/scripts.pory"
	release
# 1143 "data/maps/LittlerootTown/scripts.pory"
	end
# 1144 "data/maps/LittlerootTown/scripts.pory"

# 1145 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1146 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1147 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1148 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1149 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1150 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1151 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 1153 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1154 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1155 "data/maps/LittlerootTown/scripts.pory"
	return
# 1156 "data/maps/LittlerootTown/scripts.pory"

# 1157 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1158 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1159 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1160 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1161 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1162 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 1163 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 1164 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 1165 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 1166 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1167 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1168 "data/maps/LittlerootTown/scripts.pory"

# 1169 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1171 "data/maps/LittlerootTown/scripts.pory"

# 1172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1173 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1174 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 1175 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 1176 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 1177 "data/maps/LittlerootTown/scripts.pory"
	.string "We should get a Picture of YOU, with\n"
# 1178 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING's Cardboard-Cutout Form.\p"
# 1179 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1180 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, even maybe... Don These:\l"
# 1181 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES!\p"
# 1182 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 1183 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 1184 "data/maps/LittlerootTown/scripts.pory"

# 1185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1186 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1187 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES.$"
# 1188 "data/maps/LittlerootTown/scripts.pory"

# 1189 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1190 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1191 "data/maps/LittlerootTown/scripts.pory"
	.string "MUTIPLE hymns. Here's one:\p"
# 1192 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1193 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES to run extra-fast!”\p"
# 1194 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these STOUT-SHOES and race\n"
# 1195 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”\p"
# 1196 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING SAYS:\n"
# 1197 "data/maps/LittlerootTown/scripts.pory"
	.string "“'DESE GUYS AHR GREAT!!”$"
# 1198 "data/maps/LittlerootTown/scripts.pory"

# 1199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1200 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1201 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1202 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1203 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1204 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1205 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1206 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1207 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1208 "data/maps/LittlerootTown/scripts.pory"

# 1209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens2:
# 1210 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1211 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1212 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1213 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT-SHOES now…\l"
# 1214 "data/maps/LittlerootTown/scripts.pory"
	.string "You faathe' will be overjoyed.\p"
# 1215 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1216 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1217 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go and get them, honey!$"
# 1218 "data/maps/LittlerootTown/scripts.pory"

# 1219 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1220 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1221 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1222 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1223 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1224 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1225 "data/maps/LittlerootTown/scripts.pory"

# 1226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1227 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1228 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1229 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1230 "data/maps/LittlerootTown/scripts.pory"
	.string "When DOES STOUT HALFLING spend time\n"
# 1231 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1232 "data/maps/LittlerootTown/scripts.pory"

# 1233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1234 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1235 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1236 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1237 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1238 "data/maps/LittlerootTown/scripts.pory"

# 1239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1240 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1241 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1242 "data/maps/LittlerootTown/scripts.pory"

# 1243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1244 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1245 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1246 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1247 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1248 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1249 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1250 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1251 "data/maps/LittlerootTown/scripts.pory"

# 1252 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1253 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1254 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1255 "data/maps/LittlerootTown/scripts.pory"

# 1256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1257 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1258 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1259 "data/maps/LittlerootTown/scripts.pory"

# 1260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1261 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1262 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1263 "data/maps/LittlerootTown/scripts.pory"

# 1264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1265 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1266 "data/maps/LittlerootTown/scripts.pory"

# 1267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1268 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1269 "data/maps/LittlerootTown/scripts.pory"

# 1270 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1271 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1272 "data/maps/LittlerootTown/scripts.pory"

# 1273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1274 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1275 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1276 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1277 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1278 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1279 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1280 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1281 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1282 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
