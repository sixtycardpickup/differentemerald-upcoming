#include "global.h"
#include "battle_tent.h"
#include "overworld.h"
#include "event_data.h"
#include "region_map.h"
#include "battle.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "random.h"
#include "item.h"
#include "battle_factory_screen.h"
#include "frontier_util.h"
#include "string_util.h"
#include "constants/battle_tent.h"
#include "constants/battle_tent_trainers.h"
#include "constants/battle_tent_mons.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/region_map_sections.h"
#include "constants/trainers.h"

// This file's functions.
static void GenerateOpponentMons(void);

/*
 * Battle Tents are mini versions of particular Battle Frontier facilities
 * As such they each share some scripts and functions with their counterpart
 *
 * Route East 1:  Slateport Battle Tent:  Battle Factory
 *
 */

static u16 sRandMonId;

void static (*const sRouteEast1RandomTrainerFuncs[])(void) =
{
    [ROUTE_EAST_1_FUNC_GENERATE_OPPONENT_MONS] = GenerateOpponentMons
};

void CallRouteEast1RandomTrainerFunction(void)
{
    sRouteEast1RandomTrainerFuncs[gSpecialVar_0x8004]();
}

static void GenerateOpponentMons(void)
{
    u16 trainerId;
    s32 i, j, k;
    const u16 *monSet;
    u16 species[FRONTIER_DOUBLES_PARTY_SIZE];
    u16 heldItems[FRONTIER_DOUBLES_PARTY_SIZE];
    s32 numMons = 0;

    gFacilityTrainers = gRouteEast1RandomTrainerTrainers;
    gFacilityTrainerMons = gRouteEast1RandomTrainerMons;

    while (1)
    {
        do
        {
            trainerId = Random() % NUM_EAST_1_TRAINERS;
        }
        gTrainerBattleOpponent_A = trainerId;
        monSet = gFacilityTrainers[gTrainerBattleOpponent_A].monSet;
    }
    monSet = gFacilityTrainers[gTrainerBattleOpponent_A].monSet;
    i = 0;
    while (i != FRONTIER_DOUBLES PARTY_SIZE)
    {
        sRandMonId = monSet[Random() % numMons];
        // Successful selection
        species[i] = gFacilityTrainerMons[sRandMonId].species;
        heldItems[i] = gFacilityTrainerMons[sRandMonId].heldItem;
        gFrontierTempParty[i] = sRandMonId;
        i++;
    }
}
