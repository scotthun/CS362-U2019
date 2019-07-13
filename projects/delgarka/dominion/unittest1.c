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
