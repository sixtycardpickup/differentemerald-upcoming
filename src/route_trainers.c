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
//static void InitSlateportTentChallenge(void);
//static void GetSlateportTentPrize(void);
//static void SetSlateportTentPrize(void);
//static void SaveSlateportTentChallenge(void);
//static void SetRandomSlateportTentPrize(void);
//static void GiveSlateportTentPrize(void);
//static void SelectInitialRentalMons(void);
//static void SwapRentalMons(void);
static void GenerateOpponentMons(void);
//static void GenerateInitialRentalMons(void);

/*
 * Battle Tents are mini versions of particular Battle Frontier facilities
 * As such they each share some scripts and functions with their counterpart
 *
 * Slateport Battle Tent:  Battle Factory
 *
 */

static u16 sRandMonId;

void static (*const sSlateportTentFuncs[])(void) =
{
    //[SLATEPORT_TENT_FUNC_INIT]                   = InitSlateportTentChallenge,
    //[SLATEPORT_TENT_FUNC_GET_PRIZE]              = GetSlateportTentPrize,
    //[SLATEPORT_TENT_FUNC_SET_PRIZE]              = SetSlateportTentPrize,
    //[SLATEPORT_TENT_FUNC_SAVE]                   = SaveSlateportTentChallenge,
    //[SLATEPORT_TENT_FUNC_SET_RANDOM_PRIZE]       = SetRandomSlateportTentPrize,
    //[SLATEPORT_TENT_FUNC_GIVE_PRIZE]             = GiveSlateportTentPrize,
    //[SLATEPORT_TENT_FUNC_SELECT_RENT_MONS]       = SelectInitialRentalMons,
    //[SLATEPORT_TENT_FUNC_SWAP_RENT_MONS]         = SwapRentalMons,
    [SLATEPORT_TENT_FUNC_GENERATE_OPPONENT_MONS] = GenerateOpponentMons,
    //[SLATEPORT_TENT_FUNC_GENERATE_RENTAL_MONS]   = GenerateInitialRentalMons
};

//static const u16 sSlateportTentRewards[] = {ITEM_FULL_HEAL};

void CallSlateportTentFunction(void)
{
    sSlateportTentFuncs[gSpecialVar_0x8004]();
}

//static void InitSlateportTentChallenge(void)
//{
    //gSaveBlock2Ptr->frontier.challengeStatus = 0;
    //gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    //gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    //SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
//}

//static void GetSlateportTentPrize(void)
//{
    //gSpecialVar_Result = gSaveBlock2Ptr->frontier.slateportTentPrize;
//}

//static void SetSlateportTentPrize(void)
//{
    //gSaveBlock2Ptr->frontier.slateportTentPrize = gSpecialVar_0x8006;
//}

//static void SaveSlateportTentChallenge(void)
//{
    //gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    //VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    //gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    //SaveGameFrontier();
//}

//static void SetRandomSlateportTentPrize(void)
//{
    //gSaveBlock2Ptr->frontier.slateportTentPrize = sSlateportTentRewards[Random() % ARRAY_COUNT(sSlateportTentRewards)];
//}

//static void GiveSlateportTentPrize(void)
//{
    //if (AddBagItem(gSaveBlock2Ptr->frontier.slateportTentPrize, 1) == TRUE)
    //{
        //CopyItemName(gSaveBlock2Ptr->frontier.slateportTentPrize, gStringVar1);
        //gSaveBlock2Ptr->frontier.slateportTentPrize = ITEM_NONE;
        //gSpecialVar_Result = TRUE;
    //}
    //else
    //{
        //gSpecialVar_Result = FALSE;
    //}
//}

//static void SelectInitialRentalMons(void)
//{
    //ZeroPlayerPartyMons();
    //DoBattleFactorySelectScreen();
//}

//static void SwapRentalMons(void)
//{
    //DoBattleFactorySwapScreen();
//}

//bool8 InSlateportBattleTent(void)
//{
    //return gMapHeader.regionMapSectionId == MAPSEC_SLATEPORT_CITY
           //&& (gMapHeader.mapLayoutId == LAYOUT_BATTLE_TENT_CORRIDOR || gMapHeader.mapLayoutId == LAYOUT_BATTLE_TENT_BATTLE_ROOM);
//}

//static void GenerateInitialRentalMons(void)
//{
    //s32 i, j;
    //u8 firstMonId;
    //u16 monSetId;
    //u16 currSpecies;
    //u16 species[PARTY_SIZE];
    //u16 monIds[PARTY_SIZE];
    //u16 heldItems[PARTY_SIZE];

    //firstMonId = 0;
    //gFacilityTrainers = gSlateportBattleTentTrainers;
    //for (i = 0; i < PARTY_SIZE; i++)
    //{
        //species[i] = 0;
        //monIds[i] = 0;
        //heldItems[i] = 0;
    //}
    //gFacilityTrainerMons = gSlateportBattleTentMons;
    //currSpecies = SPECIES_NONE;
    //i = 0;
    //while (i != PARTY_SIZE)
    //{
        // Cannot have two Pokémon of the same species.
        //monSetId = Random() % NUM_SLATEPORT_TENT_MONS;
        //for (j = firstMonId; j < firstMonId + i; j++)
        //{
            //if (monIds[j] == monSetId)
                //break;
            //if (species[j] == gFacilityTrainerMons[monSetId].species)
            //{
                //if (currSpecies == SPECIES_NONE)
                    //currSpecies = gFacilityTrainerMons[monSetId].species;
                //else
                    //break;
            //}
        //}
        //if (j != i + firstMonId)
            //continue;

        // Cannot have two same held items.
        //for (j = firstMonId; j < i + firstMonId; j++)
        //{
            //if (heldItems[j] != 0 && heldItems[j] == gFacilityTrainerMons[monSetId].heldItem)
            //{
                //if (gFacilityTrainerMons[monSetId].species == currSpecies)
                    //currSpecies = SPECIES_NONE;
                //break;
            //}
        //}
        //if (j != i + firstMonId)
            //continue;

        //gSaveBlock2Ptr->frontier.rentalMons[i].monId = monSetId;
        //species[i] = gFacilityTrainerMons[monSetId].species;
        //heldItems[i] = gFacilityTrainerMons[monSetId].heldItem;
        //monIds[i] = monSetId;
        //i++;
    //}
//}

static void GenerateOpponentMons(void)
{
    u16 trainerId;
    s32 i, j, k;
    const u16 *monSet;
    u16 species[FRONTIER_PARTY_SIZE];
    u16 heldItems[FRONTIER_PARTY_SIZE];
    s32 numMons = 0;

    gFacilityTrainers = gSlateportBattleTentTrainers;
    gFacilityTrainerMons = gSlateportBattleTentMons;

    while (1)
    {
        do
        {
            // Choose a random trainer, DON'T worry about ensuring no repeats in this challenge
            trainerId = Random() % NUM_BATTLE_TENT_TRAINERS;
            /*for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum; i++)
            {
                if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                    break;
            }*/
        } //while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum);

        gTrainerBattleOpponent_A = trainerId;
        /*monSet = gFacilityTrainers[gTrainerBattleOpponent_A].monSet;
        while (monSet[numMons] != 0xFFFF)
            numMons++;
        if (numMons > 8)
            break;
        numMons = 0;*/
    }

    //if (gSaveBlock2Ptr->frontier.curChallengeBattleNum < TENT_STAGES_PER_CHALLENGE - 1)
        //gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum] = gTrainerBattleOpponent_A;

    monSet = gFacilityTrainers[gTrainerBattleOpponent_A].monSet;
    i = 0;
    while (i != FRONTIER_DOUBLES PARTY_SIZE)
    {
        sRandMonId = monSet[Random() % numMons];

        // Ensure none of the opponent's Pokémon are the same as the potential rental Pokémon for the player
        /*for (j = 0; j < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons); j++)
        {
            if (gFacilityTrainerMons[sRandMonId].species == gFacilityTrainerMons[gSaveBlock2Ptr->frontier.rentalMons[j].monId].species)
                break;
        }
        if (j != (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons))
            continue;*/

        // Ensure this species hasn't already been chosen for the opponent
        //for (k = 0; k < i; k++)
        //{
            //if (species[k] == gFacilityTrainerMons[sRandMonId].species)
                //break;
        //}
        //if (k != i)
            //continue;

        // Ensure held items don't repeat on the opponent's team
        //for (k = 0; k < i; k++)
        //{
            //if (heldItems[k] != ITEM_NONE && heldItems[k] == gFacilityTrainerMons[sRandMonId].heldItem)
                //break;
        //}
        //if (k != i)
            //continue;

        // Successful selection
        species[i] = gFacilityTrainerMons[sRandMonId].species;
        heldItems[i] = gFacilityTrainerMons[sRandMonId].heldItem;
        gFrontierTempParty[i] = sRandMonId;
        i++;
    }
}
