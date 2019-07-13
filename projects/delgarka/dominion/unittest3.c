/******************************************************************************
* Kamille Delgardo
* CS 362 Software Engineering II
* Unit Test 3 -- Ambassador
* 14 July 2019
******************************************************************************/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

/* Basic requirements of Ambassador:
* Player should reveal a card from their hand
* Player should return 0, 1, or 2 copies of a card from hand to Supply pile
* Each other player should gain a copy of revealed card from Supply
* If Supply has fewer than N-1 (M) copies of the card, the M players to the left should gain a copy of that card to their decks
* After play, Supply should contain M fewer copies of revealed card
* After play, Player's hand should contain 0, 1, or 2 fewer copies of revealed card
* After play, M other players' decks should contain 1 more card
* No state change should occur to trash pile, victory card piles, kingdom card piles, or to other players' hands
*/
