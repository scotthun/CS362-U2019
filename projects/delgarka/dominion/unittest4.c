/******************************************************************************
* Kamille Delgardo
* CS 362 Software Engineering II
* Unit Test 4 -- Tribute
* 14 July 2019
******************************************************************************/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

/* Basic requirements of Tribute:
* Tribute card should apply to player to immediate left
* Target should reveal top 2 cards in their deck
* Target should reveal no more or less than 2 cards
* Target should not reveal cards from any other location but top of deck
* After play, Target's discard pile should contain the two revealed cards
* After play, Target's deck should not contain the two revealed cards
* If revealed cards are the same, player should receive one bonus
* If revealed cards are different, player should receive bonus for each
* If the card is a curse it should produce no bonus
* If the card has two types, it should give both bonuses
* Player should receive +2 actions for an Action card revealed
* Player should receive +2 coins for a Treasure card revealed
* Player should receive +2 cards for a Victory card revealed
* If target has fewer than 2 cards left in their deck, they should reveal all remaining cards in their deck, shuffle their discard pile, then reveal the remainded needed
* If target does not have enough cards to reveal 2, they should reveal what they can
* No state change should occur for players other than Target and Player
* No state change should occur to supply pile, trash pile, victory card piles, kingdom card piles
*/


int unittest4() {
  /* code */
  return 0;
}
