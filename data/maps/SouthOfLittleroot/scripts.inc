SouthOfLittleroot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthOfLittleroot_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SouthOfLittleroot_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SouthOfLittleroot_OnLoad
	.byte 0

SouthOfLittleroot_OnTransition::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, SouthOfLittleroot_OnTransition_Night
	goto_if_eq VAR_RESULT, 2, SouthOfLittleroot_OnTransition_Evening
	goto_if_eq VAR_RESULT, 1, SouthOfLittleroot_OnTransition_Day
	goto_if_eq VAR_RESULT, 0, SouthOfLittleroot_OnTransition_Morning
	end
	
SouthOfLittleroot_OnTransition_Morning::
	setweather WEATHER_SUNNY
	doweather
	setvar VAR_DAYNIGHT, 0
	end

SouthOfLittleroot_OnTransition_Day::
	setweather WEATHER_SUNNY
	doweather
	setvar VAR_DAYNIGHT, 1
	end

SouthOfLittleroot_OnTransition_Evening::
	setweather WEATHER_SHADE
	doweather
	setvar VAR_DAYNIGHT, 2
	end

SouthOfLittleroot_OnTransition_Night::
	setweather WEATHER_RAIN
	doweather
	setvar VAR_DAYNIGHT, 3
	end
	
SouthOfLittleroot_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, SouthOfLittleroot_OnResume_Night
	goto_if_eq VAR_RESULT, 2, SouthOfLittleroot_OnResume_Evening
	goto_if_eq VAR_RESULT, 1, SouthOfLittleroot_OnResume_Day
	goto_if_eq VAR_RESULT, 0, SouthOfLittleroot_OnResume_Morning
	end
	
SouthOfLittleroot_OnResume_Morning::
	setweather WEATHER_SUNNY_CLOUDS
	setvar VAR_DAYNIGHT, 0
	end
	
SouthOfLittleroot_OnResume_Day::
	setvar VAR_DAYNIGHT, 1
	random 3
	switch VAR_RESULT
	case 0, SouthOfLittleroot_DayClouds
	case 1, SouthOfLittleroot_DayNormalWeather
	case 2, SouthOfLittleroot_DayNormalWeather
	end

SouthOfLittleroot_DayClouds::
	setweather WEATHER_SUNNY_CLOUDS
	end

SouthOfLittleroot_DayNormalWeather::
	setweather WEATHER_SUNNY
	end

SouthOfLittleroot_OnResume_Evening::
	setvar VAR_DAYNIGHT, 2
	random 2
	switch VAR_RESULT
	case 0, SouthOfLittleroot_EveningShade
	case 1, SouthOfLittleroot_EveningRain
	end

SouthOfLittleroot_EveningShade::
	setweather WEATHER_SHADE
	end

SouthOfLittleroot_EveningRain::
	setweather WEATHER_RAIN
	end

SouthOfLittleroot_OnResume_Night::
	setvar VAR_DAYNIGHT, 3
	random 3
	switch VAR_RESULT
	case 0, SouthOfLittleroot_NightThunderstorm
	case 1, SouthOfLittleroot_NightRain
	case 2, SouthOfLittleroot_NightRain
	end

SouthOfLittleroot_NightRain::
	setweather WEATHER_RAIN
	end

SouthOfLittleroot_NightThunderstorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

SouthOfLittleroot_OnLoad::
	doweather
	end