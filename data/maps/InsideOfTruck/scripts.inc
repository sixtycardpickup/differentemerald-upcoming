# 1 "data/maps/InsideOfTruck/scripts.pory"
 
# 2 "data/maps/InsideOfTruck/scripts.pory"

# 3 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 5 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 6 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 7 "data/maps/InsideOfTruck/scripts.pory"

# 8 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 12 "data/maps/InsideOfTruck/scripts.pory"
	end
# 13 "data/maps/InsideOfTruck/scripts.pory"

# 14 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 15 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 16 "data/maps/InsideOfTruck/scripts.pory"
	end
# 17 "data/maps/InsideOfTruck/scripts.pory"

# 18 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 19 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 20 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 22 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 23 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 24 "data/maps/InsideOfTruck/scripts.pory"
	end
# 25 "data/maps/InsideOfTruck/scripts.pory"

# 26 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 5, 10
# 36 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 37 "data/maps/InsideOfTruck/scripts.pory"
	end
# 38 "data/maps/InsideOfTruck/scripts.pory"

# 39 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 40 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 41 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 13, 5
# 49 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 50 "data/maps/InsideOfTruck/scripts.pory"
	end
# 51 "data/maps/InsideOfTruck/scripts.pory"

# 52 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 53 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 54 "data/maps/InsideOfTruck/scripts.pory"
	end
# 55 "data/maps/InsideOfTruck/scripts.pory"

# 56 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox2::
# 57 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo2, MSGBOX_SIGN
# 58 "data/maps/InsideOfTruck/scripts.pory"
	end
# 59 "data/maps/InsideOfTruck/scripts.pory"

# 60 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox3::
# 61 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo3, MSGBOX_SIGN
# 62 "data/maps/InsideOfTruck/scripts.pory"
	end
# 63 "data/maps/InsideOfTruck/scripts.pory"

# 64 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_CardboardCutout::
# 65 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_CutoutPrintedOfStout, MSGBOX_SIGN
# 66 "data/maps/InsideOfTruck/scripts.pory"
	end
# 67 "data/maps/InsideOfTruck/scripts.pory"

# 68 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo::
# 69 "data/maps/InsideOfTruck/scripts.pory"
	.string "The Box is printed with a Picture\n"
# 70 "data/maps/InsideOfTruck/scripts.pory"
	.string "of STOUT HALFLING Smiling.\p"
# 71 "data/maps/InsideOfTruck/scripts.pory"
	.string "His Smile is wide and sparkling;\n"
# 72 "data/maps/InsideOfTruck/scripts.pory"
	.string "He is giving you a Thumbs-Up!$"
# 73 "data/maps/InsideOfTruck/scripts.pory"

# 74 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo2::
# 75 "data/maps/InsideOfTruck/scripts.pory"
	.string "The Box is printed with a Picture\n"
# 76 "data/maps/InsideOfTruck/scripts.pory"
	.string "of STOUT HALFLING Smiling.\p"
# 77 "data/maps/InsideOfTruck/scripts.pory"
	.string "His Smile is wide and conspirational;\n"
# 78 "data/maps/InsideOfTruck/scripts.pory"
	.string "He is giving you a Wave!$"
# 79 "data/maps/InsideOfTruck/scripts.pory"

# 80 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo3::
# 81 "data/maps/InsideOfTruck/scripts.pory"
	.string "The Box is plastered with a Printout\n"
# 82 "data/maps/InsideOfTruck/scripts.pory"
	.string "of STOUT HALFLING Smiling.\p"
# 83 "data/maps/InsideOfTruck/scripts.pory"
	.string "His Smile is wide and sparkling;\n"
# 84 "data/maps/InsideOfTruck/scripts.pory"
	.string "He is giving you a Thumbs-Up!$"
# 85 "data/maps/InsideOfTruck/scripts.pory"

# 86 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_CutoutPrintedOfStout::
# 87 "data/maps/InsideOfTruck/scripts.pory"
	.string "It appears to be a Cardboard Cutout\n"
# 88 "data/maps/InsideOfTruck/scripts.pory"
	.string "of STOUT HALFLING smiling.\p"
# 89 "data/maps/InsideOfTruck/scripts.pory"
	.string "His smile is wide and sparkling;\n"
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "he is giving you a thumbs-up!$"
