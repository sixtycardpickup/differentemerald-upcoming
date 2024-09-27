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
	setweather WEATHER_FOG_HORIZONTAL
	goto RouteS1E2_GetDayOrNightAndWeather
	end
	
RouteS1E2_OnLoad_Day::
	random 2
	switch VAR_RESULT
	case 0, RouteS1E2_DaySunny
	case 1, RouteS1E2_DayDrought
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

RouteS1E2_DaySunny::
	setweather WEATHER_SUNNY
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_DayDrought::
	setweather WEATHER_DROUGHT
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_EveningShade::
	setweather WEATHER_SHADE
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_EveningRain::
	setweather WEATHER_RAIN
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_EveningThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_NightShade::
	setweather WEATHER_SHADE
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_NightRain::
	setweather WEATHER_RAIN
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_NightThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	goto RouteS1E2_GetDayOrNightAndWeather
	end

RouteS1E2_GetDayOrNightAndWeather::
	special GetDayOrNightAndWeather
	goto_if_eq VAR_RESULT, 3, RouteS1E2_Encounters_MorningFog
	goto_if_eq VAR_RESULT, 8, RouteS1E2_Encounters_DaySunny
	goto_if_eq VAR_RESULT, 12, RouteS1E2_Encounters_DayDrought
	goto_if_eq VAR_RESULT, 16, RouteS1E2_Encounters_EveningShade
	goto_if_eq VAR_RESULT, 17, RouteS1E2_Encounters_EveningRain
	goto_if_eq VAR_RESULT, 18, RouteS1E2_Encounters_EveningStorm
	goto_if_eq VAR_RESULT, 24, RouteS1E2_Encounters_NightShade
	goto_if_eq VAR_RESULT, 25, RouteS1E2_Encounters_NightRain
	goto_if_eq VAR_RESULT, 26, RouteS1E2_Encounters_NightStorm
	end

RouteS1E2_Encounters_MorningFog::
	setvar VAR_DAYNIGHT_AND_WEATHER, 0
	end

RouteS1E2_Encounters_DaySunny::
	setvar VAR_DAYNIGHT_AND_WEATHER, 1
	end
	
RouteS1E2_Encounters_DayDrought::
	setvar VAR_DAYNIGHT_AND_WEATHER, 2
	end

RouteS1E2_Encounters_EveningShade::
	setvar VAR_DAYNIGHT_AND_WEATHER, 3
	end

RouteS1E2_Encounters_EveningRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 4
	end

RouteS1E2_Encounters_EveningStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 5
	end

RouteS1E2_Encounters_NightShade::
	setvar VAR_DAYNIGHT_AND_WEATHER, 6
	end

RouteS1E2_Encounters_NightRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 7
	end

RouteS1E2_Encounters_NightStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 8
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
