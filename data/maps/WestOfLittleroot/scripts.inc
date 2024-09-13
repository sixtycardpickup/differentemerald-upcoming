WestOfLittleroot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RouteEast1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, RouteEast1_OnResume
	.byte 0

RouteEast1_OnTransition:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteEast1_OnTransition_Night
	goto_if_eq VAR_RESULT, 2, RouteEast1_OnTransition_Evening
	goto_if_eq VAR_RESULT, 1, RouteEast1_OnTransition_Day
	goto_if_eq VAR_RESULT, 0, RouteEast1_OnTransition_Morning
	end
	
RouteEast1_OnTransition_Morning:
	setvar VAR_DAYNIGHT, 0
	goto RouteEast1_ClearTrainerFlagTearnest
	end

RouteEast1_OnTransition_Day:
	setvar VAR_DAYNIGHT, 1
	goto RouteEast1_ClearTrainerFlagTearnest
	end

RouteEast1_OnTransition_Evening:
	setvar VAR_DAYNIGHT, 2
	goto RouteEast1_ClearTrainerFlagTearnest
	end

RouteEast1_OnTransition_Night:
	setvar VAR_DAYNIGHT, 3
	goto RouteEast1_ClearTrainerFlagTearnest
	end
	
RouteEast1_OnResume:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteEast1_OnResume_Night
	goto_if_eq VAR_RESULT, 2, RouteEast1_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, RouteEast1_OnResume_Day
	goto_if_eq VAR_RESULT, 0, RouteEast1_OnResume_Morning
	end
	
RouteEast1_OnResume_Morning:
	setvar VAR_DAYNIGHT, 0
	end
	
RouteEast1_OnResume_Day:
	setvar VAR_DAYNIGHT, 1
	end

RouteEast1_OnResume_Evening:
	setvar VAR_DAYNIGHT, 2
	end
	
RouteEast1_OnResume_Night:
	setvar VAR_DAYNIGHT, 3
	end

RouteEast1_ClearTrainerFlagTearnest::
	cleartrainerflag (TRAINER_TEARNEST)
	cleartrainerflag (TRAINER_CREDRIC)
	end

RouteEast1_EventScript_Tearnest::
	trainerbattle_single TRAINER_TEARNEST, RouteEast1_Text_TearnestIntro, RouteEast1_Text_TearnestDefeated
	msgbox RouteEast1_Text_TearnestPostBattle, MSGBOX_AUTOCLOSE
	end

RouteEast1_EventScript_Credric::
	trainerbattle_single TRAINER_CREDRIC, RouteEast1_Text_CredricIntro, RouteEast1_Text_CredricDefeat
	msgbox RouteEast1_Text_CredricPostBattle, MSGBOX_AUTOCLOSE
	end