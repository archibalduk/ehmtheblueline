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
	REAL_SHORT_TEXT_LENGTH = 6,
	THREE_LETTER_TEXT_LENGTH = 4,
	SIX_LETTER_TEXT_LENGTH = 7
};

// Ignore the first eight bytes of index.dat
enum { INDEX_IGNORE_DATA = 8 };

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
enum { TEAM_SZ = 23 };

struct INDEX;
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
struct STAFF_LANGUAGES;
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
struct CURRENCIES;
struct STAGE_NAMES;
struct DRAFTED_PLAYERS;
struct DB_PLAYER_INFO;
struct DB_STAFF_INFO;
struct DB_PLAYER_RIGHTS;
struct CLUB_HISTORIES;
struct DB_CLUB_RECORDS;
struct DRAFTS;

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
typedef LONG STAFF_LANGUAGES_PTR;
typedef LONG CLUB_COMPS_PTR;
typedef LONG CLUB_COMP_HISTORIES_PTR;
typedef LONG STAFF_COMPS_PTR;
typedef LONG STAFF_COMP_HISTORIES_PTR;
typedef LONG OFFICIALS_PTR;
typedef LONG COLOURS_PTR;
typedef LONG AFFILIATIONS_PTR;
typedef LONG RETIRED_NUMBERS_PTR;
typedef LONG STATES_PROVINCES_PTR;
typedef LONG CHAR_PTR;
typedef LONG DRAFTED_PLAYERS_PTR;
typedef LONG PLAYER_RIGHTS_PTR;
typedef LONG DRAFTS_PTR;

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
	LONG version;							// Version information (not used)
};

// -------------------------- //
// Continents //
// -------------------------- //

struct CONTINENTS
{
DOUBLE	ContinentRegionalStrength;
LONG	ContinentID;
CHAR	ContinentNameThreeLetter[ THREE_LETTER_TEXT_LENGTH ];
CHAR	ContinentName[ SHORT_TEXT_LENGTH ];
CHAR	ContinentNameContinentality[ SHORT_TEXT_LENGTH ];
CHAR	ContinentGenderName;
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
CHAR	 NationJnrFinalPosition01;
CHAR	 NationJnrFinalPosition02;
CHAR	 NationJnrFinalPosition03;
CHAR	 NationMenFinalPosition01;
CHAR	 NationMenFinalPosition02;
CHAR	 NationMenFinalPosition03;
LONG	 NationID;
LONG	 NationNumberStaff;
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
CHAR	 NationNameThreeLetter[ THREE_LETTER_TEXT_LENGTH ];
SHORT	 NationNumberClubs;
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
CHAR	 NationCitizenShipYears;
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
STAFF_PTR	 ClubCaptain;
STAFF_PTR	 ClubAssistantCaptain1;
STAFF_PTR	 ClubAssistantCaptain2;
SHORT	 ClubReputation;
SHORT	 ClubYearFounded;
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
CHAR	 AffiliationDependency;
CHAR	 AffiliationGoalieCount;
CHAR	 AffiliationSkaterCount;
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
LONG	 StaffID;
LONG	 StaffEstimatedWage;
LONG	 StaffEstimatedValue;
NATIONS_PTR	 StaffNation;
NATIONS_PTR	 StaffSecondNation;
PLAYERS_PTR	 StaffPlayerData;
STAFF_PREFERENCES_PTR	StaffPreferences;
NON_PLAYERS_PTR	 StaffNonPlayerData;
CLUBS_PTR	 StaffNationContracted;
CLUBS_PTR	 StaffClubContracted;
CLUBS_PTR	 StaffClubPlaying;
LONG	 StaffPlayerRightsIndex;
CITIES_PTR	 StaffBirthTown;
CHAR_PTR	 StaffFirstName;
CHAR_PTR	 StaffSecondName;
SI_DATE	 StaffDateOfBirth;
SI_DATE	 StaffDateJoinedNation;
SI_DATE	 StaffContractExpiresNation;
SI_DATE	 StaffDateJoinedClub;
SI_DATE	 StaffContractExpiresClub;
SI_DATE StaffFirstProContract;
SHORT	 StaffYearOfBirth;
UCHAR	 StaffInternationalApps;
UCHAR	 StaffInternationalGoals;
UCHAR	 StaffInternationalAssists;
CHAR	 StaffJobForNation;
CHAR	 StaffAdaptability;
CHAR	 StaffJobForClub;
CHAR	 StaffAmbition;
CHAR	 StaffDetermination;
CHAR	 StaffLoyalty;
CHAR	 StaffPressure;
CHAR	 StaffProfessionalism;
CHAR	 StaffSportsmanship;
CHAR	 StaffTemperament;
CHAR	 StaffPlayingSquad;
CHAR	 StaffClassification;
CHAR	 StaffClubValuation;
CHAR	 StaffDeclaredNation;
CHAR StaffStanleyCupsWon;
CHAR	 StaffSquadSelectedFor;
CHAR	 StaffNationalTeamJobLevel;
LONG	 StaffEstimatedWageWeekly;
};

// -------------------------- //
// Non Players //
// -------------------------- //

struct NON_PLAYERS
{
LONG	 StaffNonPlayerID;
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
CHAR	 StaffNonPlayerTacticPreferred;
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
CHAR	 StaffPlayerMorale;
CHAR	 StaffPlayerGoalieStyle;
CHAR	 StaffPlayerJuniorPreference;
};

// -------------------------- //
// Player details //
// -------------------------- //

struct STAFF_PREFERENCES
{
LONG	 StaffPreferencesID;
CLUBS_PTR	StaffFavouriteClubs1;
CLUBS_PTR	StaffFavouriteClubs2;
CLUBS_PTR	StaffFavouriteClubs3;
CLUBS_PTR	StaffDislikedClubs1;
CLUBS_PTR	StaffDislikedClubs2;
CLUBS_PTR	StaffDislikedClubs3;
STAFF_PTR	StaffFavouriteStaff1;
STAFF_PTR	StaffFavouriteStaff2;
STAFF_PTR	StaffFavouriteStaff3;
STAFF_PTR	StaffDislikedStaff1;
STAFF_PTR	StaffDislikedStaff2;
STAFF_PTR	StaffDislikedStaff3;
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
CONTINENTS_PTR	ClubCompContinent;
NATIONS_PTR	 ClubCompNation;
COLOURS_PTR	 ClubCompForegroundColour;
COLOURS_PTR	 ClubCompBackgroundColour;
COLOURS_PTR	 ClubCompTrimColour;
CHAR	 ClubCompNameSixLetter[ SIX_LETTER_TEXT_LENGTH ];
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
CLUBS_PTR	 ClubCompHistoryRegularSeasonChampions;
SHORT	 ClubCompHistoryYear;
};

// -------------------------- //
// Staff Competitions //
// -------------------------- //

struct STAFF_COMPS
{
LONG	 StaffCompID;
CONTINENTS_PTR	StaffCompContinent;
NATIONS_PTR	 StaffCompNation;
CLUB_COMPS_PTR	StaffCompCompetition;
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
CLUBS_PTR	 StaffCompHistoryFirstPlacedClub;
CLUBS_PTR	 StaffCompHistorySecondPlacedClub;
CLUBS_PTR	 StaffCompHistoryThirdPlacedClub;
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

struct CURRENCIES
{
LONG	 CurrencyID;
NATIONS_PTR	 CurrencyNation;
DOUBLE	 CurrencyExchangeRate;
DOUBLE	 CurrencyApproxExchangeRate;
DOUBLE	 CurrencyVeryApproxExchangeRate;
CHAR	 CurrencyNameGender;
CHAR	 CurrencyShortNameGender;
CHAR	 CurrencyName[ STANDARD_TEXT_LENGTH ];
CHAR	 CurrencyShortName[ SHORT_TEXT_LENGTH ];
CHAR	 Currency3LetterCode[ THREE_LETTER_TEXT_LENGTH ];
CHAR	 CurrencySymbol[ THREE_LETTER_TEXT_LENGTH ];
};

struct STAGE_NAMES
{
LONG	 StageNameID;
CHAR	 StageNameLongName[ STANDARD_TEXT_LENGTH ];
CHAR	 StageNameShortName[ SHORT_TEXT_LENGTH ];
CHAR	 StageNamePluralName[ STANDARD_TEXT_LENGTH ];
CHAR	 StageNameLongNameGender;
CHAR	 StageNameShortNameGender;
CHAR	 StageNamePluralNameGender;
};

struct DRAFTED_PLAYERS
{
LONG	 DraftedPlayerID;
STAFF_PTR	 DraftedPlayerStaffID;
DRAFTS_PTR	 DraftedPlayerDraftID;
CLUBS_PTR	 DraftedPlayerClubID;
SHORT	 DraftedPlayerYear;
SHORT	 DraftedPlayerOverall;
UCHAR DraftedPlayerDraftRound;
};

struct DB_PLAYER_RIGHTS
{
LONG	 PlayerRightsID;
STAFF_PTR	 PlayerRightsStaffID;
CLUB_COMPS_PTR	PlayerRightsCompID;
CLUBS_PTR	 PlayerRightsClubID;
};

struct CLUB_HISTORIES
{
LONG	 ClubHistoryID;
CLUB_COMPS_PTR ClubHistoryComp;
CLUBS_PTR	 ClubHistoryClub;
SHORT	 ClubHistoryYear;
SHORT	 ClubHistoryGoalsScored;
SHORT	 ClubHistoryGoalsAgainst;
SHORT	 ClubHistoryPoints;
CHAR	 ClubHistoryPosition;
CHAR	 ClubHistoryPlayed;
CHAR	 ClubHistoryWon;
CHAR	 ClubHistoryTied;
CHAR	 ClubHistoryLost;
CHAR	 ClubHistoryOvertimeWins;
CHAR	 ClubHistoryOvertimeLosses;
CHAR	 ClubHistoryShootoutWins;
CHAR	 ClubHistoryShootoutLosses;
};

struct DB_CLUB_RECORDS
{
LONG	 ClubRecordsID;
CLUBS_PTR	 ClubRecordsClub;
SHORT	 ClubRecordsMostTeamPoints;
SHORT	 ClubRecordsMostTeamPointsYear;
CHAR	 ClubRecordsMostTeamWins;
SHORT	 ClubRecordsMostTeamWinsYear;
CHAR	 ClubRecordsMostTeamLosses;
SHORT	 ClubRecordsMostTeamLossesYear;
SHORT	 ClubRecordsMostTeamGoals;
SHORT	 ClubRecordsMostTeamGoalsYear;
SHORT	 ClubRecordsMostTeamGoalsAgainst;
SHORT	 ClubRecordsMostTeamGoalsAgainstYear;
SHORT	 ClubRecordsLeastTeamPoints;
SHORT	 ClubRecordsLeastTeamPointsYear;
CHAR	 ClubRecordsMostTeamTies;
SHORT	 ClubRecordsMostTeamTiesYear;
SHORT	 ClubRecordsMostPlayerGoalsSeason;
SHORT	 ClubRecordsMostPlayerGoalsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerGoalsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerGoalsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerGoalsSeasonStaffSecondName;
SHORT	 ClubRecordsMostPlayerAssistsSeason;
SHORT	 ClubRecordsMostPlayerAssistsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerAssistsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerAssistsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerAssistsSeasonStaffSecondName;
SHORT	 ClubRecordsMostPlayerPointsSeason;
SHORT	 ClubRecordsMostPlayerPointsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerPointsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerPointsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerPointsSeasonStaffSecondName;
SHORT	 ClubRecordsMostPlayerPenaltyMinutesSeason;
SHORT	 ClubRecordsMostPlayerPenaltyMinutesSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerPenaltyMinutesSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerPenaltyMinutesSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerPenaltyMinutesSeasonStaffSecondName;
UCHAR	 ClubRecordsMostPlayerWinsSeason;
SHORT	 ClubRecordsMostPlayerWinsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerWinsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerWinsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerWinsSeasonStaffSecondName;
UCHAR	 ClubRecordsMostPlayerShutoutsSeason;
SHORT	 ClubRecordsMostPlayerShutoutsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerShutoutsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerShutoutsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerShutoutsSeasonStaffSecondName ;
SHORT	 ClubRecordsMostPlayerRookiePointsSeason;
SHORT	 ClubRecordsMostPlayerRookiePointsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerRookiePointsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerRookiePointsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerRookiePointsSeasonStaffSecondName;
SHORT	 ClubRecordsMostPlayerGamesCareer;
STAFF_PTR	 ClubRecordsMostPlayerGamesCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerGamesCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerGamesCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerGoalsCareer;
STAFF_PTR	 ClubRecordsMostPlayerGoalsCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerGoalsCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerGoalsCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerAssistsCareer;
STAFF_PTR	 ClubRecordsMostPlayerAssistsCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerAssistsCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerAssistsCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerPointsCareer;
STAFF_PTR	 ClubRecordsMostPlayerPointsCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerPointsCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerPointsCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerPenaltyMinutesCareer;
STAFF_PTR	 ClubRecordsMostPlayerPenaltyMinutesCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerPenaltyMinutesCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerPenaltyMinutesCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerWinsCareer;
STAFF_PTR	 ClubRecordsMostPlayerWinsCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerWinsCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerWinsCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerShutoutsCareer;
STAFF_PTR	 ClubRecordsMostPlayerShutoutsCareerStaff;
CHAR_PTR	 ClubRecordsMostPlayerShutoutsCareerStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerShutoutsCareerStaffSecondName;
SHORT	 ClubRecordsMostPlayerRookieGoalsSeason;
SHORT	 ClubRecordsMostPlayerRookieGoalsSeasonYear;
STAFF_PTR	 ClubRecordsMostPlayerRookieGoalsSeasonStaff;
CHAR_PTR	 ClubRecordsMostPlayerRookieGoalsSeasonStaffFirstName;
CHAR_PTR	 ClubRecordsMostPlayerRookieGoalsSeasonStaffSecondName;
};

struct DRAFTS
{
LONG	 DraftID;
CLUB_COMPS_PTR DraftComp;
CHAR	 DraftName[ STANDARD_TEXT_LENGTH ];
CHAR	 DraftGenderName;
CBOOL	 DraftExtinct;
};

struct STAFF_LANGUAGES
{
LONG	 StaffLanguageID;
STAFF_PTR	 StaffLanguageStaffID;
CHAR	 StaffLanguageProficiency;
};

struct DB_PLAYER_INFO
{
LONG	 StaffPlayerInfoID;
STAFF_PTR	 StaffPlayerInfoStaffID;
SHORT	 ProfessionalGamesPlayedRegularSeason;
SHORT	 ProfessionalGamesPlayedPlayoff;
SHORT	 ProfessionalNHLGamesPlayed;
SHORT	 CanadianJuniorGamesPlayed;
CHAR	 NHLSeasonsAccrued;
CBOOL	 HasPlayedInNorthAmericaAsJunior;
CBOOL	 HasPlayedInCollege; // NB. this is only present if "version" in index.dat is 0x02 ! (added for patch 3.0.3)
CHAR	 NorthAmericaMajorJuniorSeasons;

// total stats
SHORT	 league_appearances_for_club;
SHORT	 league_goals_for_club;
SHORT	 league_assists_for_club;
SHORT	 league_pims_for_club;
SHORT	 league_wins_for_club;
SHORT	 league_shutouts_for_club;

SHORT	 league_total_appearances;
SHORT	 league_total_goals;
SHORT	 league_total_assists;
SHORT	 league_total_pims;
SHORT	 league_total_wins;
SHORT	 league_total_shutouts;
};

struct DB_STAFF_INFO
{
LONG	 StaffInfoID;
STAFF_PTR	 StaffInfoStaffID;
CLUBS_PTR	 StaffInfoLastKnownClub;
};

// reset alignment
#ifdef PLATFORM_MAC
#pragma options align=reset
#endif

#endif