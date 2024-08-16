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
	@ 2: Saving Birch
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
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
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 56 "data/maps/LittlerootTown/scripts.pory"
	end
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 59 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 60 "data/maps/LittlerootTown/scripts.pory"
	return
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/LittlerootTown/scripts.pory"
	return
# 65 "data/maps/LittlerootTown/scripts.pory"

# 66 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 72 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	return
# 79 "data/maps/LittlerootTown/scripts.pory"

# 80 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 85 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 12, 1
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/LittlerootTown/scripts.pory"
	return
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 9, 1
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/LittlerootTown/scripts.pory"
	return
# 94 "data/maps/LittlerootTown/scripts.pory"

# 95 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 96 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 97 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 100 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 101 "data/maps/LittlerootTown/scripts.pory"
	return
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 104 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 7, 8
# 105 "data/maps/LittlerootTown/scripts.pory"
	return
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 108 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 109 "data/maps/LittlerootTown/scripts.pory"
	return
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 114 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 115 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 118 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 7
# 120 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 7
# 121 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 122 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 123 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 124 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 125 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 126 "data/maps/LittlerootTown/scripts.pory"
	end
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 129 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 16
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 132 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 133 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 134 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 135 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 136 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 137 "data/maps/LittlerootTown/scripts.pory"
	end
# 138 "data/maps/LittlerootTown/scripts.pory"

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 140 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 141 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 142 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 145 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 146 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 147 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 151 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 152 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 155 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 157 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 165 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 166 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 169 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 170 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 171 "data/maps/LittlerootTown/scripts.pory"
	return
# 172 "data/maps/LittlerootTown/scripts.pory"

# 173 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 174 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 175 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 178 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 179 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 183 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 184 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 185 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 187 "data/maps/LittlerootTown/scripts.pory"

# 188 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 191 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 197 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 206 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 213 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 214 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 215 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 216 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 218 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 219 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 220 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 221 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 224 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 225 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 226 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 227 "data/maps/LittlerootTown/scripts.pory"
	end
# 228 "data/maps/LittlerootTown/scripts.pory"

# 229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 230 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 231 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 234 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 235 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 236 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 237 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 238 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 249 "data/maps/LittlerootTown/scripts.pory"
	end
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 252 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 253 "data/maps/LittlerootTown/scripts.pory"
	end
# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 256 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 257 "data/maps/LittlerootTown/scripts.pory"
	end
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 260 "data/maps/LittlerootTown/scripts.pory"
	lock
# 261 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 262 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 263 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 264 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	release
# 267 "data/maps/LittlerootTown/scripts.pory"
	end
# 268 "data/maps/LittlerootTown/scripts.pory"

# 269 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 270 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 271 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 273 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 274 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 276 "data/maps/LittlerootTown/scripts.pory"
	release
# 277 "data/maps/LittlerootTown/scripts.pory"
	end
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 280 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	release
# 283 "data/maps/LittlerootTown/scripts.pory"
	end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 286 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown/scripts.pory"
	release
# 288 "data/maps/LittlerootTown/scripts.pory"
	end
# 289 "data/maps/LittlerootTown/scripts.pory"

# 290 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 291 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 292 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 293 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 295 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 296 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 298 "data/maps/LittlerootTown/scripts.pory"
	end
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 301 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 303 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 307 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 308 "data/maps/LittlerootTown/scripts.pory"
	return
# 309 "data/maps/LittlerootTown/scripts.pory"

# 310 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonEast::
# 311 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 312 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 313 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerWestFromRoute
# 314 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 316 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 317 "data/maps/LittlerootTown/scripts.pory"
	return
# 318 "data/maps/LittlerootTown/scripts.pory"

# 319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemonSouth::
# 320 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 321 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 322 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerNorthFromRoute
# 323 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 325 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 326 "data/maps/LittlerootTown/scripts.pory"
	return
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastTop::
# 329 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 330 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 331 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 332 "data/maps/LittlerootTown/scripts.pory"
	end
# 333 "data/maps/LittlerootTown/scripts.pory"

# 334 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerEastBottom::
# 335 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 336 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonEast
# 337 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 338 "data/maps/LittlerootTown/scripts.pory"
	end
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerSouth::
# 341 "data/maps/LittlerootTown/scripts.pory"
	lockall 
# 342 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemonSouth
# 343 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 344 "data/maps/LittlerootTown/scripts.pory"
	end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 347 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 348 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 349 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 350 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 351 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 362 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 363 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 367 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 382 "data/maps/LittlerootTown/scripts.pory"

# 383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 384 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 386 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 387 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerWestFromRoute:
# 390 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 392 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 393 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerNorthFromRoute:
# 396 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 397 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 398 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 399 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 402 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 403 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 404 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 406 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 407 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 408 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 412 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 413 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 414 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 415 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 416 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 417 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 418 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 420 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 421 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 422 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 423 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 426 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 427 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 428 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 429 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 430 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 431 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 434 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 435 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 436 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 437 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 438 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 440 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 441 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 442 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 443 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 445 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 449 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 450 "data/maps/LittlerootTown/scripts.pory"
	end
# 451 "data/maps/LittlerootTown/scripts.pory"

# 452 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 453 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 454 "data/maps/LittlerootTown/scripts.pory"
	end
# 455 "data/maps/LittlerootTown/scripts.pory"

# 456 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 457 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 458 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 459 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 460 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 461 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 465 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 466 "data/maps/LittlerootTown/scripts.pory"
	return
# 467 "data/maps/LittlerootTown/scripts.pory"

# 468 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 469 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 470 "data/maps/LittlerootTown/scripts.pory"
	return
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 475 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 476 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 477 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 478 "data/maps/LittlerootTown/scripts.pory"
	end
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 481 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown/scripts.pory"
	return
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 485 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 486 "data/maps/LittlerootTown/scripts.pory"
	return
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 489 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 490 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 492 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 493 "data/maps/LittlerootTown/scripts.pory"
	end
# 494 "data/maps/LittlerootTown/scripts.pory"

# 495 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 496 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 498 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 499 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 500 "data/maps/LittlerootTown/scripts.pory"
	end
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 503 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 505 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 506 "data/maps/LittlerootTown/scripts.pory"
	end
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 509 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 510 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 511 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 512 "data/maps/LittlerootTown/scripts.pory"
	end
# 513 "data/maps/LittlerootTown/scripts.pory"

# 514 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 515 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 516 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 517 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 518 "data/maps/LittlerootTown/scripts.pory"
	end
# 519 "data/maps/LittlerootTown/scripts.pory"

# 520 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 521 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 522 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 523 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 524 "data/maps/LittlerootTown/scripts.pory"
	end
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 527 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 530 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 533 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 534 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 535 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 538 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 539 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 542 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 543 "data/maps/LittlerootTown/scripts.pory"
	end
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 546 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 7
# 547 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 7
# 548 "data/maps/LittlerootTown/scripts.pory"
	return
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 551 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 552 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 556 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 558 "data/maps/LittlerootTown/scripts.pory"
	return
# 559 "data/maps/LittlerootTown/scripts.pory"

# 560 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 561 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 566 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 567 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 568 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 569 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 570 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 571 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 572 "data/maps/LittlerootTown/scripts.pory"
	return
# 573 "data/maps/LittlerootTown/scripts.pory"

# 574 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 575 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 576 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 577 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 578 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 579 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 580 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 581 "data/maps/LittlerootTown/scripts.pory"
	return
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	return
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	return
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown/scripts.pory"
	return
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 612 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 614 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 615 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/LittlerootTown/scripts.pory"
	return
# 617 "data/maps/LittlerootTown/scripts.pory"

# 618 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 619 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	return
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 647 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	return
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 654 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 655 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 656 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 657 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 658 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 659 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 660 "data/maps/LittlerootTown/scripts.pory"
	return
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 663 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 664 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 665 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 666 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 667 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 668 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	return
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	return
# 680 "data/maps/LittlerootTown/scripts.pory"

# 681 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 689 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 691 "data/maps/LittlerootTown/scripts.pory"
	return
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 698 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 701 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 703 "data/maps/LittlerootTown/scripts.pory"
	return
# 704 "data/maps/LittlerootTown/scripts.pory"

# 705 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 713 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 715 "data/maps/LittlerootTown/scripts.pory"
	return
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 725 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 727 "data/maps/LittlerootTown/scripts.pory"
	return
# 728 "data/maps/LittlerootTown/scripts.pory"

# 729 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 730 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 732 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 734 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 736 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 737 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 738 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 739 "data/maps/LittlerootTown/scripts.pory"
	return
# 740 "data/maps/LittlerootTown/scripts.pory"

# 741 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 742 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 745 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 746 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 747 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 748 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 749 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 750 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 751 "data/maps/LittlerootTown/scripts.pory"
	return
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 754 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 757 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 758 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 759 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 760 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 761 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 762 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 763 "data/maps/LittlerootTown/scripts.pory"
	return
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 766 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 768 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 770 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 772 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 773 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 775 "data/maps/LittlerootTown/scripts.pory"
	return
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 784 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 785 "data/maps/LittlerootTown/scripts.pory"

# 786 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 793 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 800 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 808 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 813 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 814 "data/maps/LittlerootTown/scripts.pory"

# 815 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 819 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 838 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 853 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 854 "data/maps/LittlerootTown/scripts.pory"

# 855 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 861 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 862 "data/maps/LittlerootTown/scripts.pory"

# 863 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 869 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 870 "data/maps/LittlerootTown/scripts.pory"

# 871 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 884 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 898 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 904 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 913 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 914 "data/maps/LittlerootTown/scripts.pory"

# 915 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 921 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 925 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 928 "data/maps/LittlerootTown/scripts.pory"
	lock
# 929 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 930 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 931 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 932 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 933 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 934 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 935 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 936 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 937 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 938 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 939 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 940 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 941 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 942 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 943 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 944 "data/maps/LittlerootTown/scripts.pory"
	end
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 947 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 948 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 949 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 950 "data/maps/LittlerootTown/scripts.pory"
	release
# 951 "data/maps/LittlerootTown/scripts.pory"
	end
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 954 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 955 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 956 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 957 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 958 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 959 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 960 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 961 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 962 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 963 "data/maps/LittlerootTown/scripts.pory"
	return
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "I hope you like it!\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "Isn't STOUT HALFLING great?\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "He brought us here; it seems to be\n"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "a place to live, don't you think?\p"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 976 "data/maps/LittlerootTown/scripts.pory"

# 977 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to STOUT?\p"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKé-MON!\n"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Mr. HALFLING? Lovely!\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "You're on STOUT's list, all right.\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with STOUT!\p"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, don these RUNNING SHOES.\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step,\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "so long as you bless them right!$"
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 995 "data/maps/LittlerootTown/scripts.pory"

# 996 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "POKé-MON now…\l"
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "I have observed that one minute, STOUT\n"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "HALFLING appears; the next, something\l"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "usully goes terribly wrong.\p"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is perfect for\n"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "ponting out patterns. How staggering!$"
# 1020 "data/maps/LittlerootTown/scripts.pory"

# 1021 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING spends time in his LAB\n"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "a SMOKE BOMB!! to do more research…\p"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "When does STOUT HALFLING spend time\n"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1027 "data/maps/LittlerootTown/scripts.pory"

# 1028 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!\p"
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING might jump out, as well!$"
# 1033 "data/maps/LittlerootTown/scripts.pory"

# 1034 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1035 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see STOUT HALFLING,\n"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see STOUT HALFLING\n"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1046 "data/maps/LittlerootTown/scripts.pory"

# 1047 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved STOUT HALFLING!\n"
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "THANK GOD!$"
# 1050 "data/maps/LittlerootTown/scripts.pory"

# 1051 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1053 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1054 "data/maps/LittlerootTown/scripts.pory"

# 1055 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1058 "data/maps/LittlerootTown/scripts.pory"

# 1059 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S POKé-MON LAB$"
# 1061 "data/maps/LittlerootTown/scripts.pory"

# 1062 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1064 "data/maps/LittlerootTown/scripts.pory"

# 1065 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1066 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT HALFLING'S HOUSE$"
# 1067 "data/maps/LittlerootTown/scripts.pory"

# 1068 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1069 "data/maps/LittlerootTown/scripts.pory"
	.string "STOUT: Well, well, {PLAYER}{KUN}!\n"
# 1070 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1071 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1075 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1076 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1077 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
