﻿//----------------------------------------------------------------------------
// Project: NHL Eastside Hockey Manager
// Sports Interactive Ltd
// Copyright © 2005. All Rights Reserved.
//
// FILE: database_flags.h
// AUTHOR: Graeme Kelly
//
//----------------------------------------------------------------------------

#ifndef DATABASE_FLAGS_H
#define DATABASE_FLAGS_H

// Invalid date def
#define INVALID_DATE	 DATE( 31, 1900 )

// Languages
#define DB_ALBANIAN	 1
#define DB_ARABIC	 2
#define DB_BULGARIAN	 3
#define DB_CHINESE	 4
#define DB_CROATIAN	 5
#define DB_CZECH	 6
#define DB_DUTCH	 7
#define DB_ENGLISH	 8
#define DB_FINNISH	 9
#define DB_FRENCH	 10
#define DB_GERMAN	 11
#define DB_GREEK	 12
#define DB_HEBREW	 13
#define DB_HUNGARIAN	 14
#define DB_ITALIAN	 15
#define DB_JAPANESE	 16
#define DB_KOREAN	 17
#define DB_POLISH	 18
#define DB_PORTUGUESE	 19
#define DB_ROMANIAN	 20
#define DB_RUSSIAN 21
#define DB_NORWEGIAN 22
#define DB_SERBIAN 23
#define DB_SPANISH 24
#define DB_TURKISH 25
#define DB_BURMESE	 26
#define DB_MALAY	 27
#define DB_PERSIAN	 28
#define DB_SLOVAK	 29
#define DB_SWEDISH	 30
#define DB_ICELANDIC	 31
#define DB_DANISH	 32
#define DB_AFRIKAANS	 33
#define _DB_ALBANIAN	 34
#define DB_AMHARIC	 35
#define DB_ARMENIAN	 36
#define DB_AZERI	 37
#define DB_BANGLA	 38
#define DB_ESTONIAN	 39
#define DB_GEORGIAN	 40
#define DB_HINDI	 41
#define DB_JAVANESE	 42
#define DB_KHMER	 43
#define DB_KYRGYZ	 44
#define DB_LAO	 45
#define DB_LATVIAN	 46
#define DB_LETBURGESCH	 47
#define DB_LITHUANIAN	 48
#define DB_MACEDONIAN	 49
#define DB_MALAGASY	 50
#define DB_MALTESE	 51
#define DB_SINHALESE	 52
#define DB_SLOVENIAN	 53
#define DB_SOMALI	 54
#define DB_SWAHILI	 55
#define DB_TAJIK	 56
#define DB_TAMIL	 57
#define DB_THAI	 58
#define DB_UZBEK	 59
#define VIETNAMESE	 60
#define DB_MONGOL	 61
#define DB_BOSNIAN	 62
#define DB_UKRAINIAN	 63
#define DB_ZULU	 64

#define DB_NUMBER_OF_MDB_LANGUAGES DB_ZULU;


// NationGroupDefines
enum {
EEC_COUNTRY = 2,
NON_EEC_COUNTRY = 1
};

// Selected leagues defs
enum {
NOT_SELECTED = 0x0000,
SELECTED_BACKGROUND = 0x0001, 
SELECTED_FOREGROUND = 0x0002,
ALL_DIVISIONS_ACTIVE = 0x0004,
SELECTED_START_DATE = 0x0008
};

// Ice conditions
enum {
ICE_EXCELLENT = 1,
ICE_GOOD,
ICE_POOR,
ICE_VERY_POOR
};

// rink size
enum {
RINK_SIZE_EURO = 1,
RINK_SIZE_NHL
};


// nation actual region
enum {
ACTUAL_REGION_AFRICA = 1,
ACTUAL_REGION_ASIA,
ACTUAL_REGION_CARIBBEAN,
ACTUAL_REGION_CENTRAL_AMERICA,
ACTUAL_REGION_CENTRAL_EUROPE,
ACTUAL_REGION_EASTERN_EUROPE,
ACTUAL_REGION_MIDDLE_EAST,
ACTUAL_REGION_NORTH_AFRICA,
ACTUAL_REGION_NORTH_AMERICA,
ACTUAL_REGION_OCEANIA,
ACTUAL_REGION_SCANDINAVIA,
ACTUAL_REGION_SOUTH_AMERICA,
ACTUAL_REGION_SOUTHERN_EUROPE,
ACTUAL_REGION_UK_AND_IRELAND,
FIRST_ACTUAL_REGION = ACTUAL_REGION_AFRICA,
LAST_ACTUAL_REGION = ACTUAL_REGION_UK_AND_IRELAND
};


// club professional status
enum {
PROFESSIONAL = 1,
SEMI_PRO,
AMATEUR
};

// states of development
enum {
DEVELOPED_STATE = 1,
DEVLOPING_STATE,
THIRD_WORLD_STATE
};

// database days of the week
enum {
DB_SUN = 1,
DB_MON,	
DB_TUE,
DB_WED,
DB_THUR,
DB_FRI,
DB_SAT
};

// staff job for club/nation
enum {
JOB_INVALID_JOB = 0,
JOB_CHAIRMAN,
JOB_MANAGING_DIRECTOR,
JOB_PRESIDENT,
JOB_DIRECTOR_OF_PERSONNEL,
JOB_MANAGER,
JOB_ASSISTANT_MANAGER,
JOB_HEAD_COACH,
JOB_COACH,
JOB_SCOUT,
JOB_PHYSIO,
JOB_PLAYER,
JOB_PLAYER_COACH,
JOB_MEDIA_PUNDIT,	
JOB_PLAYER_RETIRED,
JOB_HEAD_SCOUT, /* RIZ - this will be used only as a temporary value in the game, no-one actually gets assigned this job*/
JOB_MANAGER_HEAD_COACH
};

// staff classification
enum {
INVALID_CLASSIFICATION = 0,
NON_PLAYER,
PLAYER,
NON_PLAYER_AND_PLAYER,
YOUTH_PLAYER,
NEW_HUMAN_MANAGER,
SPARE_NON_PLAYER,
SPARE_PLAYER
};

// Player form definitions
enum {
VERY_POOR = 0,
POOR,
AVERAGE,
GOOD,
VERY_GOOD,
SUPERB
};

// Primary colour definitions
enum {
PRIMARY_BLACK = 1,
PRIMARY_WHITE,
PRIMARY_GREY,
PRIMARY_YELLOW,
PRIMARY_GREEN,
PRIMARY_BLUE,
PRIMARY_PURPLE,
PRIMARY_RED,
PRIMARY_ORANGE,
PRIMARY_BROWN
};

enum { 
NATION_DECLARED_NONE = 0,
NATION_DECLARED_FIRST,
NATION_DECLARED_SECOND
}; // values for the StaffNationDeclared field


#endif