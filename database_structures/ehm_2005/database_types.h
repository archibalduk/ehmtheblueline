//----------------------------------------------------------------------------
// Project: NHL Eastside Hockey Manager
// Sports Interactive Ltd
// Copyright © 2005. All Rights Reserved.
//
// FILE: database_types.h
// AUTHOR: Graeme Kelly
//
// OVERVIEW
// ~~~~~~~~
// Header file for the database types
//
//----------------------------------------------------------------------------

#ifndef DATABASE_TYPES_H
#define DATABASE_TYPES_H

// text lengths
enum { 
LONG_TEXT_LENGTH = 101,
STANDARD_TEXT_LENGTH = 51,
SHORT_TEXT_LENGTH = 26,
REAL_SHORT_TEXT_LENGTH = 6
};

// Ignore the first eight bytes of index.dat
enum ENUM_INDEX_HEADER
{
	INDEX_IGNORE_DATA = 8
};

// club staff table sizes
enum { 
DIRECTOR_SIZE = 3,
SQUAD_SIZE = 75,
SCOUT_SIZE = 15,
COACH_SIZE = 5,
PHYSIO_SIZE = 3
};

// Maximum number of tactics in training at once
enum { MAX_TACTIC_TRAINING = 4 };

// Maximum size of a squad for a match 
enum { TEAM_SZ = 22 };

struct CONTINENTS;
struct NATIONS;
struct CITIES;
struct ARENAS;
struct CLUBS;
struct STAFF;
struct NON_PLAYERS;
struct PLAYERS;
struct STAFF_PREFERENCES;
struct STAFF_HISTORIES;
struct CLUB_COMPS;
struct CLUB_COMP_HISTORIES;
struct STAFF_COMPS;
struct STAFF_COMP_HISTORIES;
struct OFFICIALS;
struct COLOURS;
struct NAMES;
struct AFFILIATIONS;
struct RETIRED_NUMBERS;
struct STATES_PROVINCES;
struct INJURIES;
struct EXTRA_STAFF_INFO;

typedef bool	CBOOL;
typedef char	CHAR;
typedef unsigned char	UCHAR;
typedef short	SHORT;
typedef unsigned short	USHORT;
typedef double	DOUBLE;
typedef long	LONG;
typedef unsigned long	ULONG;

typedef LONG CONTINENTS_PTR;
typedef LONG NATIONS_PTR;
typedef LONG CITIES_PTR;
typedef LONG ARENAS_PTR;
typedef LONG CLUBS_PTR;
typedef LONG STAFF_PTR;
typedef LONG NON_PLAYERS_PTR;
typedef LONG PLAYERS_PTR;
typedef LONG STAFF_PREFERENCES_PTR;
typedef LONG STAFF_HISTORIES_PTR;
typedef LONG CLUB_COMPS_PTR;
typedef LONG CLUB_COMP_HISTORIES_PTR;
typedef LONG STAFF_COMPS_PTR;
typedef LONG STAFF_COMP_HISTORIES_PTR;
typedef LONG OFFICIALS_PTR;
typedef LONG COLOURS_PTR;
typedef LONG NAMES_PTR;
typedef LONG AFFILIATIONS_PTR;
typedef LONG RETIRED_NUMBERS_PTR;
typedef LONG STATES_PROVINCES_PTR;
typedef LONG CHAR_PTR;

struct SI_DATE
{
	SHORT day;
	SHORT year;
	CBOOL leap_year;
};

// the following structures need to be byte aligned
#ifdef PLATFORM_MAC
#pragma options align=packed
#endif

// -------------------------- //
// Index.dat //
// -------------------------- //

struct INDEX
{
	CHAR filename[ STANDARD_TEXT_LENGTH ];  // Data filename
	LONG file_id;							// Data filename ID number
	LONG table_sz;							// Data file table size
	LONG offset;							// Offset (used for staff.dat to indicate the location of the first non_player record (if I understand correctly)
	LONG version;							// Version information (not used)
};

// -------------------------- //
// Continents //
// -------------------------- //

struct CONTINENTS
{
DOUBLE	ContinentRegionalStrength;

LONG	ContinentID;
CHAR	ContinentNameThreeLetter[ 4 ];

CHAR	ContinentName[ SHORT_TEXT_LENGTH ];
CHAR	ContinentNameContinentality[ SHORT_TEXT_LENGTH ];
CHAR	ContinentFederationName[ LONG_TEXT_LENGTH ];
CHAR	ContinentFederationNameShort[ SHORT_TEXT_LENGTH ];
CHAR	ContinentGenderName;
CHAR	ContinentGenderFederationName;
CHAR	ContinentGenderFederationNameShort;
};

// -------------------------- //
// Nations //
// -------------------------- //

struct NATIONS
{
DOUBLE	 NationIIHFRankingScore;
DOUBLE	 NationIIHFRankingScore98;
DOUBLE	 NationIIHFRankingScore99;
DOUBLE	 NationIIHFRankingScore00;
DOUBLE	 NationIIHFRankingScore01;
DOUBLE	 NationIIHFRankingScore02;
DOUBLE	 NationIIHFRankingScore03;
DOUBLE	 NationJnrFinalPosition01;
DOUBLE	 NationJnrFinalPosition02;
DOUBLE	 NationJnrFinalPosition03;
DOUBLE	 NationMenFinalPosition01;
DOUBLE	 NationMenFinalPosition02;
DOUBLE	 NationMenFinalPosition03;

LONG	 NationID;
LONG	 NationNumberStaff;
LONG	 NationShortlistOffset;

CONTINENTS_PTR	NationContinent;
CITIES_PTR	 NationCapitalCity;
ARENAS_PTR	 NationNationalStadium;
COLOURS_PTR	 NationForegroundColour1;
COLOURS_PTR	 NationBackgroundColour1;
COLOURS_PTR	 NationTrimColour1;
COLOURS_PTR	 NationForegroundColour2;
COLOURS_PTR	 NationBackgroundColour2;
COLOURS_PTR	 NationTrimColour2;
COLOURS_PTR	 NationForegroundColour3;
COLOURS_PTR	 NationBackgroundColour3;
COLOURS_PTR	 NationTrimColour3;
NATIONS_PTR	 NationRivals1;
NATIONS_PTR	 NationRivals2;
NATIONS_PTR	 NationRivals3;

CHAR	 NationNameThreeLetter[4 ];

SHORT	 NationNumberClubs;
SHORT	 NationSeasonUpdateDay;
SHORT	 NationReputation;

CHAR	 NationName[ STANDARD_TEXT_LENGTH ];
CHAR	 NationNameShort[ SHORT_TEXT_LENGTH ];
CHAR	 NationNameNationality[ SHORT_TEXT_LENGTH ];

CHAR	 NationGenderName;
CHAR	 NationGenderNameShort;
CHAR	 NationRegion;
CHAR	 NationActualRegion;
CHAR	 NationFirstLanguage;
CHAR	 NationSecondLanguage;
CHAR	 NationThirdLanguage;
CHAR	 NationStateOfDevelopment;
CHAR	 NationGroupMembership;
CHAR	 NationGameImportance;
CHAR	 NationLeagueStandard;
CHAR	 NationLeagueSelected;
CHAR	 NationGamesPlayed;
};



// -------------------------- //
// Cities //
// -------------------------- //

struct CITIES
{
DOUBLE	 CityLatitude;
DOUBLE	 CityLongitude;

LONG	 CityID;

STATES_PROVINCES_PTR	CityState;
NATIONS_PTR	 CityNation;

CHAR	 CityName[ STANDARD_TEXT_LENGTH ];

CHAR	 CityGenderName;
CHAR	 CityAttraction;
};

// -------------------------- //
// Stadiums //
// -------------------------- //

struct ARENAS
{
LONG	 StadiumID;
LONG	 StadiumCapacity;
LONG	 StadiumSeatingCapacity;
LONG	 StadiumExpansionCapacity;

CITIES_PTR	 StadiumCity;
ARENAS_PTR	 StadiumNearbyStadium;

CHAR	 StadiumName[STANDARD_TEXT_LENGTH];
CHAR	 StadiumGenderName;
CHAR StadiumRinkSize;
CHAR StadiumIceCondition;

};

// -------------------------- //
// Clubs //
// -------------------------- //

struct CLUBS
{
// original data
LONG	 ClubID;
LONG	 ClubCash;
LONG	 ClubAttendance;
LONG	 ClubMinAttendance;
LONG	 ClubMaxAttendance;
LONG	 ClubEuroFlag;
LONG	 ClubTacticTraining[ MAX_TACTIC_TRAINING ];
LONG	 ClubTacticSelected;
LONG ClubFanSupport;
LONG ClubPlayerBudget;


NATIONS_PTR	 ClubNation;
CLUB_COMPS_PTR	ClubDivision;
CLUB_COMPS_PTR	ClubLastDivision;
CLUB_COMPS_PTR	ClubReserveDivision;
ARENAS_PTR	 ClubStadium;
ARENAS_PTR	 ClubPracticeFacilities;
COLOURS_PTR	 ClubForegroundColour1;
COLOURS_PTR	 ClubBackgroundColour1;
COLOURS_PTR	 ClubTrimColour1;
COLOURS_PTR	 ClubForegroundColour2;
COLOURS_PTR	 ClubBackgroundColour2;
COLOURS_PTR	 ClubTrimColour2;
COLOURS_PTR	 ClubForegroundColour3;
COLOURS_PTR	 ClubBackgroundColour3;
COLOURS_PTR	 ClubTrimColour3;
STAFF_PTR	 ClubFavouriteStaff1;
STAFF_PTR	 ClubFavouriteStaff2;
STAFF_PTR	 ClubFavouriteStaff3;
STAFF_PTR	 ClubDislikedStaff1;
STAFF_PTR	 ClubDislikedStaff2;
STAFF_PTR	 ClubDislikedStaff3;
CLUBS_PTR	 ClubRivals1;
CLUBS_PTR	 ClubRivals2;
CLUBS_PTR	 ClubRivals3;
STAFF_PTR	 ClubChairman;
STAFF_PTR	 ClubDirectorList[ DIRECTOR_SIZE ];
STAFF_PTR	 ClubManager;
STAFF_PTR	 ClubAssistantManager;
STAFF_PTR	 ClubHeadCoach;
STAFF_PTR	 ClubHeadScout;
STAFF_PTR	 ClubSquadList[ SQUAD_SIZE ];
STAFF_PTR	 ClubCoachList[ COACH_SIZE ];
STAFF_PTR	 ClubScoutList[ SCOUT_SIZE ];
STAFF_PTR	 ClubPhysioList[ PHYSIO_SIZE ];
STAFF_PTR	 ClubTeamSelected[ TEAM_SZ ];

STAFF_PTR	 ClubCaptain;
STAFF_PTR	 ClubAssistantCaptain1;
STAFF_PTR	 ClubAssistantCaptain2;

SHORT	 ClubReputation;

CHAR	 ClubName[STANDARD_TEXT_LENGTH];
CHAR	 ClubNameShort[SHORT_TEXT_LENGTH];
CHAR ClubAbbreviation[ REAL_SHORT_TEXT_LENGTH ];
CHAR	 ClubNickName[ STANDARD_TEXT_LENGTH ];

CHAR	 ClubGenderNameShort;

CHAR	 ClubLastPosition;
CHAR	 ClubProfessionalStatus;
CHAR	 ClubOwnStadium;
CHAR	 ClubHomeMatchDay;
CHAR	 ClubTraining;
CHAR	 ClubPLC;
CHAR	 ClubGenderName;
CHAR	 ClubEuroSeeding;
CHAR	 ClubHasLinkedClub;

CHAR	 ClubMarketSize;
};

// -------------------------- //
// Affiliations //
// -------------------------- //

struct AFFILIATIONS
{
LONG	 AffiliationID;
CLUBS_PTR	AffiliationUpperClub;
CLUBS_PTR	AffiliationLowerClub;
CHAR AffiliationType;
};


// -------------------------- //
// Retired Numbers	 //
// -------------------------- //
struct RETIRED_NUMBERS
{
LONG	 RetiredNumberID;
CLUBS_PTR	RetiredNumberClub;
CHAR	 RetiredNumberPlayerName[ LONG_TEXT_LENGTH ];
UCHAR	 RetiredNumber;
};

// -------------------------- //
// Staff //
// -------------------------- //

struct STAFF
{
LONG	StaffID;
LONG	StaffFirstName;	 // NAME Index
LONG	StaffSecondName;	 // SECOND NANE index
SI_DATE	StaffDateOfBirth;	
SHORT	StaffYearOfBirth;
LONG	StaffNation;
LONG	StaffSecondNation;
CHAR	StaffDeclaredNation; // 1 for StaffNation, 2 for StaffSecondNation - otherwise undeclared
UCHAR	StaffInternationalApps;
UCHAR	StaffInternationalGoals;
UCHAR	StaffInternationalAssists;
LONG	StaffNationContracted;
CHAR	StaffJobForNation;
SI_DATE	StaffDateJoinedNation;
SI_DATE	StaffContractExpiresNation;
LONG	StaffClubContracted;
LONG	StaffClubPlaying;
CHAR	StaffJobForClub;	
SI_DATE	StaffDateJoinedClub;	
SI_DATE StaffContractExpiresClub;
LONG	StaffEstimatedWage;
LONG	StaffEstimatedValue;
CHAR	StaffAdaptability;	
CHAR	StaffAmbition;	
CHAR StaffDetermination;
CHAR	StaffLoyalty;	
CHAR	StaffPressure;	
CHAR	StaffProfessionalism;
CHAR	StaffSportsmanship;
CHAR	StaffTemperament;	
CHAR	StaffPlayingSquad;	
CHAR	StaffClassification;
CHAR	StaffClubValuation;
LONG	StaffFavouriteClubs1;
LONG	StaffFavouriteClubs2;
LONG	StaffFavouriteClubs3;
LONG	StaffDislikedClubs1;
LONG	StaffDislikedClubs2;
LONG	StaffDislikedClubs3;
LONG	StaffFavouriteStaff1;
LONG	StaffFavouriteStaff2;
LONG	StaffFavouriteStaff3;
LONG	StaffDislikedStaff1;
LONG	StaffDislikedStaff2;
LONG	StaffDislikedStaff3;

LONG	player_data;	 // PLAYER index
LONG	youth_player_data;	 // YOUTH PLAYER index
LONG	non_player_data;	 // NON PLAYER index

CHAR StaffDraftStatus; // 0=eligible,1=too young to be drafted,2=already drafted 
SHORT StaffDraftYear;
UCHAR StaffDraftRound;
SHORT StaffDraftOverall; // has to be over 255 since players are drafted in 9 rounds, 30 teams at least per round
LONG StaffDraftedByTeam;
CHAR StaffCHLDraftStatus; 
SHORT	StaffCHLDraftYear;
UCHAR StaffCHLDraftRound;
SHORT StaffCHLDraftOverall; // has to be over 255 since players are drafted in 9 rounds, 30 teams at least per round
LONG StaffCHLDraftedByTeam;

SI_DATE StaffFirstProContract;
LONG StaffNHLRights;
LONG StaffCHLRights;
CHAR StaffStanleyCupsWon;

LONG	StaffBirthTown;

};
// -------------------------- //
// Non Players //
// -------------------------- //

struct NON_PLAYERS
{
LONG	 StaffNonPlayerID;

STAFF_PTR	 StaffNonPlayerGoaltender;
STAFF_PTR	 StaffNonPlayerLeftDefenseman;
STAFF_PTR	 StaffNonPlayerRightDefenseman;
STAFF_PTR	 StaffNonPlayerLeftWing;
STAFF_PTR	 StaffNonPlayerCenter;
STAFF_PTR	 StaffNonPlayerRightWing;

SHORT	 StaffNonPlayerCurrentAbility;
SHORT	 StaffNonPlayerPotentialAbility;
SHORT	 StaffNonPlayerHomeReputation;
SHORT	 StaffNonPlayerCurrentReputation;
SHORT	 StaffNonPlayerWorldReputation;

CHAR	 StaffNonPlayerAttacking;
CHAR	 StaffNonPlayerBusiness;
CHAR	 StaffNonPlayerCoachingTechnique;
CHAR	 StaffNonPlayerDirectness;
CHAR	 StaffNonPlayerDiscipline;
CHAR	 StaffNonPlayerFreeRoles;
CHAR	 StaffNonPlayerInterference;
CHAR	 StaffNonPlayerJudgement;
CHAR	 StaffNonPlayerJudgingPotential;
CHAR	 StaffNonPlayerManHandling;
CHAR	 StaffNonPlayerMotivating;
CHAR	 StaffNonPlayerPatience;
CHAR	 StaffNonPlayerPhysiotherapy;
CHAR	 StaffNonPlayerResources;
CHAR	 StaffNonPlayerTactics;
CHAR	 StaffNonPlayerYoungsters;
CHAR	 StaffNonPlayerFormationPreferred;
CHAR StaffNonPlayerCoachingForwards;
CHAR StaffNonPlayerCoachingDefensemen;
CHAR StaffNonPlayerCoachingGoaltenders;
CHAR StaffNonPlayerLineMatching;
CHAR StaffNonPlayerPowerPlay;
CHAR StaffNonPlayerPenaltyKill;
CHAR StaffNonPlayerPhysical;

};

// -------------------------- //
// Players //
// -------------------------- //

struct PLAYERS
{
// original data
LONG	 StaffPlayerID;

SHORT	 StaffPlayerCurrentAbility;
SHORT	 StaffPlayerPotentialAbility;
SHORT	 StaffPlayerHomeReputation;
SHORT	 StaffPlayerCurrentReputation;
SHORT	 StaffPlayerWorldReputation;

CHAR	 StaffPlayerSquadNumber;
CHAR	 StaffPlayerInternationalSquadNumber;
CHAR	 StaffPlayerAcceleration;	
CHAR	 StaffPlayerAggression;	
CHAR	 StaffPlayerAgility;
CHAR	 StaffPlayerAnticipation;	
CHAR	 StaffPlayerBalance;
CHAR	 StaffPlayerBravery;
CHAR	 StaffPlayerConsistency;
CHAR	 StaffPlayerDecisions;
CHAR	 StaffPlayerDirtiness;
CHAR	 StaffPlayerFlair;
CHAR	 StaffPlayerImportantMatches;
CHAR	 StaffPlayerInjuryProneness;
CHAR	 StaffPlayerLeadership;
CHAR	 StaffPlayerMovement;
CHAR	 StaffPlayerNaturalFitness;
CHAR	 StaffPlayerOneOnOnes;
CHAR	 StaffPlayerPace;
CHAR	 StaffPlayerPassing;
CHAR	 StaffPlayerPositioning;
CHAR	 StaffPlayerReflexes;
CHAR	 StaffPlayerStamina;
CHAR	 StaffPlayerStrength;
CHAR	 StaffPlayerTeamwork;
CHAR	 StaffPlayerVersatility;
CHAR	 StaffPlayerVision;
CHAR	 StaffPlayerWorkRate;

CHAR StaffPlayerHandedness;
UCHAR StaffPlayerHeight;
UCHAR StaffPlayerWeight;
UCHAR StaffPlayerFavouriteNumber;

CHAR StaffPlayerGoaltender;
CHAR StaffPlayerLeftDefense;
CHAR StaffPlayerRightDefense;
CHAR StaffPlayerLeftWing;
CHAR StaffPlayerCenter;
CHAR StaffPlayerRightWing;

CHAR StaffPlayerAgitation;
CHAR StaffPlayerBlocker;
CHAR StaffPlayerChecking;
CHAR StaffPlayerDefensiveRole;
CHAR StaffPlayerDeflections;
CHAR StaffPlayerDeking;
CHAR StaffPlayerFaceoffs;
CHAR StaffPlayerFighting;
CHAR StaffPlayerGlove;
CHAR StaffPlayerHitting;
CHAR StaffPlayerOffensiveRole;
CHAR StaffPlayerPassTendency;
CHAR StaffPlayerPokecheck;
CHAR StaffPlayerRebounds;
CHAR StaffPlayerRecovery;
CHAR StaffPlayerSlapshot;
CHAR StaffPlayerStickhandling;
CHAR StaffPlayerWristshot;
// runtime data
CHAR	 StaffPlayerMorale;
};

// -------------------------- //
// Player details //
// -------------------------- //

struct STAFF_PREFERENCES
{
LONG	 StaffPreferencesID;
CLUBS_PTR	 StaffFavouriteClubs1;
CLUBS_PTR	 StaffFavouriteClubs2;
CLUBS_PTR	 StaffFavouriteClubs3;
CLUBS_PTR	 StaffDislikedClubs1;
CLUBS_PTR	 StaffDislikedClubs2;
CLUBS_PTR	 StaffDislikedClubs3;
STAFF_PTR	 StaffFavouriteStaff1;
STAFF_PTR	 StaffFavouriteStaff2;
STAFF_PTR	 StaffFavouriteStaff3;
STAFF_PTR	 StaffDislikedStaff1;
STAFF_PTR	 StaffDislikedStaff2;
STAFF_PTR	 StaffDislikedStaff3;
STAFF_PTR	 StaffPlaysWith1;
STAFF_PTR	 StaffPlaysWith2;
STAFF_PTR	 StaffPlaysWith3;
STAFF_PTR	 StaffPlaysWith4;

CHAR StaffPlaysWithValue1;
CHAR StaffPlaysWithValue2;
CHAR StaffPlaysWithValue3;
CHAR StaffPlaysWithValue4;
};

// -------------------------- //
// Staff History //
// -------------------------- //

struct STAFF_HISTORIES
{
LONG	 StaffHistoryID;
STAFF_PTR	 StaffHistoryStaff;
CLUBS_PTR	 StaffHistoryClub;
CLUB_COMPS_PTR	 StaffHistoryComp;

SHORT	 StaffHistoryYear;
USHORT StaffHistoryMinutes;
USHORT	 StaffHistoryConceded;
USHORT StaffHistoryShutouts;
USHORT	 StaffHistorySaves;
USHORT	 StaffHistoryPenalties;

CHAR	 StaffHistoryOnLoan;
UCHAR	 StaffHistoryApps;
UCHAR	 StaffHistoryGoals;

UCHAR StaffHistoryAssists;
CHAR	 StaffHistoryPlusMinus;
UCHAR	 StaffHistoryWins;
UCHAR StaffHistoryLosses;
UCHAR StaffHistoryTies;

CHAR	 StaffHistoryPlayoff;

};

// -------------------------- //
// Club Competitions //
// -------------------------- //

struct CLUB_COMPS
{
LONG	 ClubCompID;

CONTINENTS_PTR	 ClubCompContinent;
NATIONS_PTR	 ClubCompNation;
COLOURS_PTR	 ClubCompForegroundColour;
COLOURS_PTR	 ClubCompBackgroundColour;
COLOURS_PTR	 ClubCompTrimColour;

CHAR	 ClubCompNameSixLetter[ 7 ];
CHAR	 ClubCompGenderNameShort;

CHAR	 ClubCompScope;

SHORT	 ClubCompReputation; 

CHAR	 ClubCompName[STANDARD_TEXT_LENGTH];
CHAR	 ClubCompNameShort[SHORT_TEXT_LENGTH];
CHAR ClubCompPlayoffTrophyName[ STANDARD_TEXT_LENGTH ];
CHAR ClubCompRegularSeasonTrophyName[ STANDARD_TEXT_LENGTH ];
CHAR ClubCompPlayoffTrophyGender;
CHAR ClubCompRegularSeasonTrophyGender;
CHAR	 ClubCompSelected;
CHAR	 ClubCompGenderName;
CHAR ClubCompUpperAgeLimit;
};

// -------------------------- //
// Club Competition History //
// -------------------------- //

struct CLUB_COMP_HISTORIES
{
LONG	 ClubCompHistoryID;
CLUB_COMPS_PTR	 ClubCompHistoryClubComp;
CLUBS_PTR	 ClubCompHistoryWinners;
CLUBS_PTR	 ClubCompHistoryRunnersUp;
CLUBS_PTR	 ClubCompHistoryThirdPlaced;
CLUBS_PTR	 ClubCompHistoryHosts;

SHORT	 ClubCompHistoryYear;
};

// -------------------------- //
// Staff Competitions //
// -------------------------- //

struct STAFF_COMPS
{
LONG	 StaffCompID;

CONTINENTS_PTR	 StaffCompContinent;
NATIONS_PTR	 StaffCompNation;
CLUB_COMPS_PTR	 StaffCompCompetition;
COLOURS_PTR	 StaffCompForegroundColour;
COLOURS_PTR	 StaffCompBackgroundColour;
COLOURS_PTR	 StaffCompTrimColour;

SHORT	 StaffCompReputation; 

CHAR	 StaffCompNameShort[SHORT_TEXT_LENGTH];
CHAR	 StaffCompName[STANDARD_TEXT_LENGTH];

CHAR	 StaffCompGenderNameShort;
CHAR	 StaffCompGenderName;
};

// -------------------------- //
// Staff Competition History //
// -------------------------- //

struct STAFF_COMP_HISTORIES
{
LONG StaffCompHistoryID;
LONG StaffCompHistoryFirstPlacedInfo;
LONG StaffCompHistorySecondPlacedInfo;
LONG StaffCompHistoryThirdPlacedInfo;

STAFF_COMPS_PTR	 StaffCompHistoryStaffComp;
STAFF_PTR	 StaffCompHistoryFirstPlacedIndex;
STAFF_PTR	 StaffCompHistorySecondPlacedIndex;
STAFF_PTR	 StaffCompHistoryThirdPlacedIndex;

CHAR_PTR	 StaffCompHistoryFirstPlacedFirstName;
CHAR_PTR	 StaffCompHistoryFirstPlacedSecondName;
CHAR_PTR	 StaffCompHistorySecondPlacedFirstName;
CHAR_PTR	 StaffCompHistorySecondPlacedSecondName;
CHAR_PTR	 StaffCompHistoryThirdPlacedFirstName;
CHAR_PTR	 StaffCompHistoryThirdPlacedSecondName;

SHORT StaffCompHistoryYear;
};

// -------------------------- //
// Officials //
// -------------------------- //

struct OFFICIALS
{
LONG OfficialID;
CHAR_PTR	 OfficialFirstName;
CHAR_PTR	 OfficialSecondName;
NATIONS_PTR	 OfficialNation;
CITIES_PTR	 OfficialCity;
CLUB_COMPS_PTR	 OfficialClubCompetition;

SHORT	 OfficialYearOfBirth;
SHORT	 OfficialCurrentAbility;
SHORT	 OfficialPotentialAbility;
SHORT	 OfficialReputation;

SI_DATE OfficialDateOfBirth;

CHAR OfficialAllowingRoughness;
CHAR OfficialDiscipline;
CHAR OfficialImportantMatches;
CHAR OfficialPressure;
CHAR OfficialRefereeing;
CHAR OfficialSkatingLine;
CHAR OfficialAllowingInterference;
};

// -------------------------- //
// Colours //
// -------------------------- //

struct COLOURS
{
LONG ColourID;
CHAR ColourName[STANDARD_TEXT_LENGTH];
UCHAR ColourRedIntensity;
UCHAR ColourGreenIntensity;
UCHAR ColourBlueIntensity;
};

// -------------------------- //
// Names //
// -------------------------- //

struct NAMES
{
CHAR Name[STANDARD_TEXT_LENGTH];
LONG NameID;
LONG Nation;
CHAR count;
};

// -------------------------- //
// States and Provinces //
// -------------------------- //

// The hm_states_provinces structure contains the information regarding any
// USA/Canada states and provinces
struct STATES_PROVINCES
{
LONG StateID;
NATIONS_PTR	 StateNation;
CHAR StateName[ STANDARD_TEXT_LENGTH ];
CHAR StateNameShort[ STANDARD_TEXT_LENGTH ];
CHAR StateGenderName;
CHAR StateAbbrev[ REAL_SHORT_TEXT_LENGTH ];
};

struct INJURIES
{
SHORT	 InjuryMinimumDaysOut;
SHORT	 InjuryExtraDaysOut;

SHORT	 InjuryID;
CHAR	 InjuryCategory;
CHAR	 InjuryChance;
CHAR	 InjuryInactiveRatio;
CBOOL	 InjuryIsRecurring;
CHAR	 InjurySeverity;
CHAR	 InjuryCause;
CHAR	 InjuryGender;

CHAR	 InjuryName[ STANDARD_TEXT_LENGTH ];
CHAR	 InjuryNameDative[ STANDARD_TEXT_LENGTH ];
CHAR	 InjuryNameGenetive[ STANDARD_TEXT_LENGTH ];
CHAR	 InjuryNameSpecialNominative[ STANDARD_TEXT_LENGTH ];
};

// reset alignment
#ifdef PLATFORM_MAC
#pragma options align=reset
#endif

#endif