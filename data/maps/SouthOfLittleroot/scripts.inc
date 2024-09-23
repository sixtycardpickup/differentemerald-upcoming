SouthOfLittleroot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthOfLittleroot_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, SouthOfLittleroot_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, SouthOfLittleroot_OnResume
	.byte 0

SouthOfLittleroot_OnTransition::
	cleartrainerflag (TRAINER_ANA)
	end
	
SouthOfLittleroot_OnLoad::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, SouthOfLittleroot_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, SouthOfLittleroot_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, SouthOfLittleroot_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, SouthOfLittleroot_OnLoad_Morning
	end
		
SouthOfLittleroot_OnResume::
	special GetDayOrNight
	goto_if_eq VAR_RESULT, 3, SouthOfLittleroot_OnLoad_Night
	goto_if_eq VAR_RESULT, 2, SouthOfLittleroot_OnLoad_Evening
	goto_if_eq VAR_RESULT, 1, SouthOfLittleroot_OnLoad_Day
	goto_if_eq VAR_RESULT, 0, SouthOfLittleroot_OnLoad_Morning
	end
	
SouthOfLittleroot_OnLoad_Morning::
	setvar VAR_DAYNIGHT, 0
	random 3
	switch VAR_RESULT
	case 0, SouthOfLittleroot_DayClouds
	case 1, SouthOfLittleroot_MorningFog
	case 2, SouthOfLittleroot_MorningFog
	end
	
SouthOfLittleroot_OnLoad_Day::
	setvar VAR_DAYNIGHT, 1
	random 3
	switch VAR_RESULT
	case 0, SouthOfLittleroot_DayClouds
	case 1, SouthOfLittleroot_DayNormalWeather
	case 2, SouthOfLittleroot_DayNormalWeather
	end

SouthOfLittleroot_MorningFog::
	setweather WEATHER_FOG_HORIZONTAL
	end

SouthOfLittleroot_DayClouds::
	setweather WEATHER_SUNNY_CLOUDS
	end

SouthOfLittleroot_DayNormalWeather::
	setweather WEATHER_SUNNY
	end

SouthOfLittleroot_OnLoad_Evening::
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

SouthOfLittleroot_OnLoad_Night::
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