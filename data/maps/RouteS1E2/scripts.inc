RouteS1E2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RouteS1E2_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, RouteS1E2_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, RouteS1E2_OnResume
	.byte 0

RouteS1E2_OnTransition:
	cleartrainerflag (TRAINER_ANA)
	end
	
RouteS1E2_OnLoad::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteS1E2_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, RouteS1E2_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, RouteS1E2_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, RouteS1E2_OnLoad_Morning
	end

RouteS1E2_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteS1E2_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, RouteS1E2_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, RouteS1E2_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, RouteS1E2_OnLoad_Morning
	end
	
RouteS1E2_OnLoad_Morning::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 0
	end
	
RouteS1E2_OnLoad_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end

RouteS1E2_OnLoad_Evening::
	random 4
	switch VAR_RESULT
	case 0, RouteS1E2_EveningShade
	case 1, RouteS1E2_EveningRain
	case 2, RouteS1E2_EveningThunderstorm
	case 3, RouteS1E2_EveningRain
	end

RouteS1E2_OnLoad_Night::
	random 3
	switch VAR_RESULT
	case 0, RouteS1E2_NightThunderstorm
	case 1, RouteS1E2_NightRain
	case 2, RouteS1E2_NightShade
	end

RouteS1E2_EveningShade::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 2
	end

RouteS1E2_EveningRain::
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 2
	end

RouteS1E2_EveningThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	setvar VAR_DAYNIGHT, 2
	end

RouteS1E2_NightRain::
	setweather WEATHER_RAIN
	setvar VAR_DAYNIGHT, 3
	end

RouteS1E2_NightThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	setvar VAR_DAYNIGHT, 3
	end

RouteS1E2_NightShade::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 3
	end

RouteS1E2_EventScript_Ana::
	trainerbattle_single TRAINER_ANA, RouteS1E2_Text_AnaIntro, RouteS1E2_Text_AnaDefeated
	msgbox RouteS1E2_Text_AnaPostBattle, MSGBOX_AUTOCLOSE
	end

RouteS1E2_Text_AnaIntro::
	.string "The way my team works is that this\n"
	.string "wheel spins around and whatever it\p"
	.string "lands on, that's my team.$"

RouteS1E2_Text_AnaDefeated::
	.string "The way my team works is that this\n"
	.string "wheel spins around and whatever it\p"
	.string "lands on, that's my team.$"

RouteS1E2_Text_AnaPostBattle::
	.string "The way my team works is that this\n"
	.string "wheel spins around and whatever it\p"
	.string "lands on, that's my team.$"
