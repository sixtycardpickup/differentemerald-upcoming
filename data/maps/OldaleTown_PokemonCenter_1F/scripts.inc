.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

Script_IVChecker::
	lock
	faceplayer
	bufferpartymonnick 0, 0
	msgbox Text_IVChecker_1, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetHpIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetAtkIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetDefIV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_IVChecker_2, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetSpAtkIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetSpDefIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetSpeedIV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_IVChecker_3, MSGBOX_DEFAULT
	release
	end

Text_IVChecker_1::
	.string "Your {STR_VAR_1}...$"

Text_IVChecker_2::
	.string "Its HP IV is {STR_VAR_1}.\p"
	.string "Its Attack IV is {STR_VAR_2}.\p"
	.string "Its Defense IV is {STR_VAR_3}.$"

Text_IVChecker_3::
	.string "Its Special Attack IV is {STR_VAR_1}.\p"
	.string "Its Special Defense IV is {STR_VAR_2}.\p"
	.string "Its Speed IV is {STR_VAR_3}.\n"
	.string "You're welcome.$"

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

@ OldaleTown_PokemonCenter_1F_EventScript_Girl::
	@ lock
	@ faceplayer
	@ goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	@ msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	@ release
	@ end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it, too.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"

