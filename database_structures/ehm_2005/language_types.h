//----------------------------------------------------------------------------
// Project: NHL Eastside Hockey Manager
// Sports Interactive Ltd
// Copyright © 2005. All Rights Reserved.
//
// FILE: language_types.h
// AUTHOR: Graeme Kelly
//
//----------------------------------------------------------------------------

#ifndef LANGUAGE_TYPES_H
#define LANGUAGE_TYPES_H

#include "language_types.h"

typedef struct
{
LONG club_tbl_sz;
LONG continent_tbl_sz;
LONG nation_comp_tbl_sz;
LONG nation_tbl_sz;
LONG cities_tbl_sz;
LONG club_comp_tbl_sz;
LONG stadiums_tbl_sz;
LONG staff_comp_tbl_sz;
LONG states_provinces_tbl_sz;
SHORT injury_tbl_sz;
} LANG_HEADER;

typedef struct
{
CHAR ClubName[ STANDARD_TEXT_LENGTH ];
CHAR GenderClubName;
CHAR ClubNameShort[ SHORT_TEXT_LENGTH ];
CHAR GenderClubNameShort;
} CLUB_LANG;

typedef struct
{
CHAR ContinentName[ SHORT_TEXT_LENGTH ];
CHAR GenderContinentName;
CHAR ContinentNameThreeLetter[ 4 ];
CHAR ContinentNameNationality[ SHORT_TEXT_LENGTH ];
} CONTINENT_LANG;

typedef struct
{
CHAR NationCompName[ STANDARD_TEXT_LENGTH ];
CHAR GenderNationCompName;
CHAR NationCompNameShort[ SHORT_TEXT_LENGTH ];
CHAR GenderNationCompNameShort;
CHAR NationCompNameSixLetter[ 7 ];
} NATION_COMP_LANG;

typedef struct
{
CHAR NationName[ STANDARD_TEXT_LENGTH ];
CHAR GenderNationName;
CHAR NationNameShort[ SHORT_TEXT_LENGTH ];
CHAR GenderNationNameShort;
CHAR NationNameThreeLetter[ 4 ];
CHAR NationNameNationality[ SHORT_TEXT_LENGTH ];
} NATION_LANG;

typedef struct
{
CHAR CityName[ STANDARD_TEXT_LENGTH ];
CHAR GenderCityName;
} CITY_LANG;

typedef struct
{
CHAR StateName[ STANDARD_TEXT_LENGTH ];
CHAR GenderStateName;
CHAR StateAbbrev[ REAL_SHORT_TEXT_LENGTH ];
} STATE_LANG;

typedef struct
{
CHAR InjuryName[ STANDARD_TEXT_LENGTH ];
CHAR InjuryNameDative[ STANDARD_TEXT_LENGTH ];
CHAR InjuryNameGenetive[ STANDARD_TEXT_LENGTH ];
CHAR InjuryNameSpecialNominative[ STANDARD_TEXT_LENGTH ];
CHAR InjuryGender;
} INJURY_LANG;

typedef struct
{
CHAR StadiumName[ STANDARD_TEXT_LENGTH ];
CHAR GenderStadiumName;
} STADIUM_LANG;

typedef struct
{
CHAR ClubCompName[ STANDARD_TEXT_LENGTH ];
CHAR GenderClubCompName;
CHAR ClubCompNameShort[ SHORT_TEXT_LENGTH ];
CHAR GenderClubCompNameShort;
CHAR ClubCompNameSixLetter[ 7 ];
CHAR ClubCompPlayoffTrophyName[ STANDARD_TEXT_LENGTH ];
CHAR ClubCompPlayoffTrophyGender;
CHAR ClubCompRegularSeasonTrophyName[ STANDARD_TEXT_LENGTH ];
CHAR ClubCompRegularSeasonTrophyGender;
} CLUB_COMP_LANG;

typedef struct
{
CHAR CurrencyName[ STANDARD_TEXT_LENGTH ];
CHAR CurrencyNameGender;
CHAR CurrencyShortName[ SHORT_TEXT_LENGTH ];
CHAR CurrencyShortNameGender;
} CURRENCY_LANG;

typedef struct
{
CHAR StaffCompName[ STANDARD_TEXT_LENGTH ];
CHAR GenderStaffCompName;
CHAR StaffCompNameShort[ SHORT_TEXT_LENGTH ];
CHAR GenderStaffCompNameShort;
} STAFF_COMP_LANG;

#endif