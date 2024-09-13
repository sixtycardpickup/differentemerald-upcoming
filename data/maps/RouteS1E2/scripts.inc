RouteS1E2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RouteS1E2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, RouteS1E2_OnResume
	.byte 0

RouteS1E2_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteS1E2_OnTransition_Night
	goto_if_eq VAR_RESULT, 2, RouteS1E2_OnTransition_Evening
	goto_if_eq VAR_RESULT, 1, RouteS1E2_OnTransition_Day
	goto_if_eq VAR_RESULT, 0, RouteS1E2_OnTransition_Morning
	end
	
RouteS1E2_OnTransition_Morning::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 0
	end

RouteS1E2_OnTransition_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end

RouteS1E2_OnTransition_Evening::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 2
	end

RouteS1E2_OnTransition_Night::
	setweather WEATHER_SHADE
	setvar VAR_DAYNIGHT, 3
	end
	
RouteS1E2_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, RouteS1E2_OnResume_Night
	goto_if_eq VAR_RESULT, 2, RouteS1E2_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, RouteS1E2_OnResume_Day
	goto_if_eq VAR_RESULT, 0, RouteS1E2_OnResume_Morning
	end
	
RouteS1E2_OnResume_Morning::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 0
	end
	
RouteS1E2_OnResume_Day::
	setweather WEATHER_SUNNY
	setvar VAR_DAYNIGHT, 1
	end

RouteS1E2_OnResume_Evening::
	setvar VAR_DAYNIGHT, 2
	random 4
	switch VAR_RESULT
	case 0, RouteS1E2_EveningShade
	case 1, RouteS1E2_EveningRain
	case 2, RouteS1E2_EveningThunderstorm
	case 3, RouteS1E2_EveningRain
	end

RouteS1E2_OnResume_Night::
	setvar VAR_DAYNIGHT, 3
	random 3
	switch VAR_RESULT
	case 0, RouteS1E2_NightThunderstorm
	case 1, RouteS1E2_NightRain
	case 2, RouteS1E2_NightShade
	end

RouteS1E2_EveningShade::
	setweather WEATHER_SHADE
	end

RouteS1E2_EveningRain::
	setweather WEATHER_RAIN
	end

RouteS1E2_EveningThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

RouteS1E2_NightRain::
	setweather WEATHER_RAIN
	end

RouteS1E2_NightThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

RouteS1E2_NightShade::
	setweather WEATHER_SHADE
	end
