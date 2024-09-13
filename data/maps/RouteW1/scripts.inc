RouteW1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RouteW1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, RouteW1_OnResume
	.byte 0

RouteW1_OnTransition:
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteW1_OnTransition_Night
	goto_if_eq VAR_RESULT, 2, RouteW1_OnTransition_Evening
	goto_if_eq VAR_RESULT, 1, RouteW1_OnTransition_Day
	goto_if_eq VAR_RESULT, 0, RouteW1_OnTransition_Morning
	end
	
RouteW1_OnTransition_Morning::
	setweather WEATHER_FOG_HORIZONTAL
	setvar VAR_DAYNIGHT, 0
	end

RouteW1_OnTransition_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end

RouteW1_OnTransition_Evening::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 2
	end

RouteW1_OnTransition_Night::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 3
	end
	
RouteW1_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteW1_OnResume_Night
	goto_if_eq VAR_RESULT, 2, RouteW1_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, RouteW1_OnResume_Day
	goto_if_eq VAR_RESULT, 0, RouteW1_OnResume_Morning
	end
	
RouteW1_OnResume_Morning::
	setweather WEATHER_FOG_HORIZONTAL
	setvar VAR_DAYNIGHT, 0
	end
	
RouteW1_OnResume_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end

RouteW1_OnResume_Evening::
	setvar VAR_DAYNIGHT, 2
	random 4
	switch VAR_RESULT
	case 0, RouteW1_EveningShade
	case 1, RouteW1_EveningRain
	case 2, RouteW1_EveningThunderstorm
	case 3, RouteW1_EveningRain
	end

RouteW1_OnResume_Night::
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
