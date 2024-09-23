RouteE1N_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RouteE1N_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, RouteE1N_OnResume
	.byte 0

RouteE1N_OnLoad::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 0, RouteE1N_OnLoad_MorningWeather
	goto_if_eq VAR_RESULT, 1, RouteE1N_OnLoad_DayWeather
	goto_if_eq VAR_RESULT, 2, RouteE1N_OnLoad_EveningWeather
	goto_if_eq VAR_RESULT, 3, RouteE1N_OnLoad_NightWeather
	end

RouteE1N_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 0, RouteE1N_OnLoad_MorningWeather
	goto_if_eq VAR_RESULT, 1, RouteE1N_OnLoad_DayWeather
	goto_if_eq VAR_RESULT, 2, RouteE1N_OnLoad_EveningWeather
	goto_if_eq VAR_RESULT, 3, RouteE1N_OnLoad_NightWeather
	end

RouteE1N_OnLoad_MorningWeather::
	random 5
	switch VAR_RESULT
	case 0, RouteE1N_Sunny
	case 1, RouteE1N_Sunny
	case 2, RouteE1N_Sunny
	case 3, RouteE1N_Rain
	case 4, RouteE1N_Rain
	end

RouteE1N_OnLoad_DayWeather::
	random 3
	switch VAR_RESULT
	case 0, RouteE1N_Sunny
	case 1, RouteE1N_Sunny
	case 2, RouteE1N_Rain
	end

RouteE1N_OnLoad_EveningWeather::
	random 5
	switch VAR_RESULT
	case 0, RouteE1N_Rain
	case 1, RouteE1N_Rain
	case 2, RouteE1N_Shade
	case 3, RouteE1N_Shade
	case 4, RouteE1N_Storm
	end

RouteE1N_OnLoad_NightWeather::
	random 6
	switch VAR_RESULT
	case 0, RouteE1N_Rain
	case 1, RouteE1N_Shade
	case 2, RouteE1N_Shade
	case 3, RouteE1N_Storm
	case 4, RouteE1N_Shade
	case 5, RouteE1N_Rain
	end

RouteE1N_Sunny::
	setweather WEATHER_SUNNY
	goto RouteE1N_GetDayOrNightAndWeather
	end

RouteE1N_Shade::
	setweather WEATHER_SHADE
	goto RouteE1N_GetDayOrNightAndWeather
	end

RouteE1N_Rain::
	setweather WEATHER_RAIN
	goto RouteE1N_GetDayOrNightAndWeather

RouteE1N_Storm::
	setweather WEATHER_RAIN_THUNDERSTORM
	goto RouteE1N_GetDayOrNightAndWeather

RouteE1N_Clouds::
	setweather WEATHER_SUNNY_CLOUDS
	goto RouteE1N_GetDayOrNightAndWeather

RouteE1N_GetDayOrNightAndWeather::
	special GetDayOrNightAndWeather
	goto_if_eq VAR_RESULT, 0, RouteE1N_Encounters_Morning
	goto_if_eq VAR_RESULT, 1, RouteE1N_Encounters_MorningRain
	goto_if_eq VAR_RESULT, 2, RouteE1N_Encounters_MorningStorm
	goto_if_eq VAR_RESULT, 8, RouteE1N_Encounters_Day
	goto_if_eq VAR_RESULT, 9, RouteE1N_Encounters_DayRain
	goto_if_eq VAR_RESULT, 10, RouteE1N_Encounters_DayStorm
	goto_if_eq VAR_RESULT, 16, RouteE1N_Encounters_Evening
	goto_if_eq VAR_RESULT, 17, RouteE1N_Encounters_EveningRain
	goto_if_eq VAR_RESULT, 18, RouteE1N_Encounters_EveningStorm
	goto_if_eq VAR_RESULT, 24, RouteE1N_Encounters_Night
	goto_if_eq VAR_RESULT, 25, RouteE1N_Encounters_NightRain
	goto_if_eq VAR_RESULT, 26, RouteE1N_Encounters_NightStorm
	end

RouteE1N_Encounters_Morning::
	setvar VAR_DAYNIGHT_AND_WEATHER, 0
	end

RouteE1N_Encounters_MorningRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 1
	end

RouteE1N_Encounters_MorningStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 1

RouteE1N_Encounters_Day::
	setvar VAR_DAYNIGHT_AND_WEATHER, 2
	end

RouteE1N_Encounters_DayRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 3
	end

RouteE1N_Encounters_DayStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 3
	end

RouteE1N_Encounters_Evening::
	setvar VAR_DAYNIGHT_AND_WEATHER, 4
	end

RouteE1N_Encounters_EveningRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 5
	end

RouteE1N_Encounters_EveningStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 6
	end

RouteE1N_Encounters_Night::
	setvar VAR_DAYNIGHT_AND_WEATHER, 7
	end

RouteE1N_Encounters_NightRain::
	setvar VAR_DAYNIGHT_AND_WEATHER, 8
	end

RouteE1N_Encounters_NightStorm::
	setvar VAR_DAYNIGHT_AND_WEATHER, 9
	end

RouteE1N_Headbutt_Encounter::
	special HeadbuttWildEncounter
	end
