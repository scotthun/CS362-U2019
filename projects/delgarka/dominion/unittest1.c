/******************************************************************************
* Kamille Delgardo
* CS 362 Software Engineering II
* Unit Test 1 -- Baron
* 14 July 2019
******************************************************************************/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

/* Basic requirements of Baron:
* Player should gain one buy
* Player should have 2 choices
* Player should choose only one choice
* If choice1 Player should have an estate in hand to discard
* If choice1 Player should discard an estate
* If choice1 Player should gain 4 coins
* If choice2 Player should gain an Estate to their deck
* If choice2 but there are no Estates left, Player should not gain an Estate
* If choice2 the number of Estates in victory pile should decrease by 1
* Other players should see no state change
* No state change should occur to supply pile, trash pile, kingdom card piles
*/

int unittest1() {
    int seed = 1000;
    int numPlayer = 2;
    int PLAYER = 0;
    int r;
    int k[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    int deckCount;
    struct gameState G;

    printf ("TESTING handleBaron():\n");
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game

    // test player has no estates
    for (size_t i = 2; i < G.handCount[PLAYER]; i++) {
      G.hand[PLAYER][i] = adventurer;
    }
    G.hand[PLAYER][0] = baron;
    G.hand[PLAYER][1] = baron;
    deckCount = G.deckCount[PLAYER];

    cardEffect(baron, 1, 0, 0, &G, 0, 0);
    assert(G.deck[PLAYER][G.deckCount[PLAYER]] == estate);
    assert(G.deckCount[PLAYER] == deckCount + 1);

    // test player has estates

    // choice1 --  discard estate to gain 4 coins

    // choice2 -- gain estate

    // test no estates left to gain
    printf("All tests passed!\n");

    return 0;
}
