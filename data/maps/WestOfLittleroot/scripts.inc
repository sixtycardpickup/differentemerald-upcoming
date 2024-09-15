WestOfLittleroot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RouteEast1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, RouteEast1_OnResume
	.byte 0
	
RouteEast1_OnTransition::
	goto RouteEast1_ClearRouteEast1TrainerFlags
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteEast1_OnResume_Night
	goto_if_eq VAR_RESULT, 2, RouteEast1_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, RouteEast1_OnResume_Day
	goto_if_eq VAR_RESULT, 0, RouteEast1_OnResume_Morning
	end

RouteEast1_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteEast1_OnResume_Night
	goto_if_eq VAR_RESULT, 2, RouteEast1_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, RouteEast1_OnResume_Day
	goto_if_eq VAR_RESULT, 0, RouteEast1_OnResume_Morning
	end
	
RouteEast1_OnResume_Morning:
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 0
	end

RouteEast1_OnResume_Day:
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 1
	end

RouteEast1_OnResume_Evening:
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 2
	end

RouteEast1_OnResume_Night:
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 3
	end

RouteEast1_HealPlayerParty::
	lock
	faceplayer
	msgbox RouteEast1_Text_HealPlayerParty, MSGBOX_AUTOCLOSE
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	release
	end

RouteEast1_WouldYouLikeToNicknameFirstPartyMon::
	lock
	msgbox RouteEast1_Nickname_Text_WouldYouLikeToNicknameFirstMon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, RouteEast1_Nickname
	call_if_eq VAR_RESULT, NO, RouteEast1_DoNotNickname
	end

RouteEast1_Nickname::
	special ChangePokemonNickname
	release
	end

RouteEast1_DoNotNickname::
	msgbox RouteEast1_Nickname_Text_WillNotNicknameFirstMon, MSGBOX_AUTOCLOSE
	release
	end

RouteEast1_Nickname_Text_WouldYouLikeToNicknameFirstMon::
	.string "Would you like to nickname the 1st 'mon\n"
	.string "in your party?$"

RouteEast1_Nickname_Text_WillNotNicknameFirstMon::
	.string "Alright, fine, keep things consistent.$"

RouteEast1_ClearRouteEast1TrainerFlags::
	cleartrainerflag (TRAINER_TEARNEST)
	cleartrainerflag (TRAINER_CREDRIC)
	cleartrainerflag (TRAINER_GRENDEL)
	cleartrainerflag (TRAINER_GRENDEL_MOTHER)
	return

RouteEast1_EventScript_Tearnest::
	trainerbattle_single TRAINER_TEARNEST, RouteEast1_Text_TearnestIntro, RouteEast1_Text_TearnestDefeated
	msgbox RouteEast1_Text_TearnestPostBattle, MSGBOX_AUTOCLOSE
	end

RouteEast1_EventScript_Credric::
	trainerbattle_single TRAINER_CREDRIC, RouteEast1_Text_CredricIntro, RouteEast1_Text_CredricDefeated
	msgbox RouteEast1_Text_CredricPostBattle, MSGBOX_AUTOCLOSE
	end

RouteEast1_EventScript_Grendel::
	trainerbattle_single TRAINER_GRENDEL, RouteEast1_Text_GrendelIntro, RouteEast1_Text_GrendelDefeated
	msgbox RouteEast1_Text_GrendelPostBattle, MSGBOX_AUTOCLOSE
	end

RouteEast1_EventScript_GrendelMom::
	trainerbattle_single TRAINER_GRENDEL_MOTHER, RouteEast1_Text_GrendelMomIntro, RouteEast1_Text_GrendelMomDefeated
	msgbox RouteEast1_Text_GrendelMomPostBattle, MSGBOX_AUTOCLOSE
	end

RouteEast1_Text_GrendelMomIntro::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_GrendelMomDefeated::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_GrendelMomPostBattle::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_GrendelIntro::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_GrendelDefeated::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_GrendelPostBattle::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_NotEnoughPokemon::
	.string "Oh boy, not enough guys!$"

RouteEast1_Text_HealPlayerParty::
	.string "Party-Healing Beam!$"