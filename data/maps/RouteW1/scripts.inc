RouteW1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RouteW1_OnLoad
	map_script MAP_SCRIPT_ON_LOAD, RouteW1_OnResume
	.byte 0

RouteW1_OnTransition::
	goto RouteW1_ClearRouteW1TrainerFlags
	end

RouteW1_ClearRouteW1TrainerFlags::
	cleartrainerflag (TRAINER_SPLUDD)
	cleartrainerflag (TRAINER_MUDDLES)
	cleartrainerflag (TRAINER_BRIEN)
	cleartrainerflag (TRAINER_SQUORT)
	end

RouteW1_OnLoad::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteW1_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, RouteW1_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, RouteW1_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, RouteW1_OnLoad_Morning
	end

RouteW1_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteW1_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, RouteW1_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, RouteW1_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, RouteW1_OnLoad_Morning
	end	

RouteW1_OnLoad_Morning::
	setweather WEATHER_FOG_HORIZONTAL
	setvar VAR_DAYNIGHT, 0
	end

RouteW1_OnLoad_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end
	
RouteW1_OnLoad_Evening::
	setvar VAR_DAYNIGHT, 2
	random 4
	switch VAR_RESULT
	case 0, RouteW1_EveningShade
	case 1, RouteW1_EveningRain
	case 2, RouteW1_EveningThunderstorm
	case 3, RouteW1_EveningRain
	end

RouteW1_OnLoad_Night::
	setvar VAR_DAYNIGHT, 3
	random 3
	switch VAR_RESULT
	case 0, RouteW1_NightThunderstorm
	case 1, RouteW1_NightRain
	case 2, RouteW1_NightShade
	end

RouteW1_EveningShade::
	setweather WEATHER_SHADE
	end

RouteW1_EveningRain::
	setweather WEATHER_RAIN
	end

RouteW1_EveningThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

RouteW1_NightRain::
	setweather WEATHER_RAIN
	end

RouteW1_NightThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

RouteW1_NightShade::
	setweather WEATHER_SHADE
	end

RouteW1_EventScript_Spludd::
	trainerbattle_single TRAINER_SPLUDD, RouteW1_Text_SpluddIntro, RouteW1_Text_SpluddDefeat
	msgbox RouteW1_Text_SpluddPostBattle, MSGBOX_AUTOCLOSE
	end

RouteW1_EventScript_Muddles::
	trainerbattle_single TRAINER_MUDDLES, RouteW1_Text_MuddlesIntro, RouteW1_Text_MuddlesDefeated
	msgbox RouteW1_Text_MuddlesPostBattle, MSGBOX_AUTOCLOSE
	end

RouteW1_EventScript_Brien::
	trainerbattle_single TRAINER_BRIEN, RouteW1_Text_BrienIntro, RouteW1_Text_BrienDefeated
	msgbox RouteW1_Text_BrienPostBattle, MSGBOX_AUTOCLOSE
	end

RouteW1_EventScript_Squort::
	trainerbattle_single TRAINER_SQUORT, RouteW1_Text_SquortIntro, RouteW1_Text_SquortDefeated
	msgbox RouteW1_Text_SquortPostBattle, MSGBOX_AUTOCLOSE
	end
