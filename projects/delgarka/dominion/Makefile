CFLAGS= -Wall -fpic --coverage -lm -std=c99

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

testUpdateCoins: testUpdateCoins.c dominion.o rngs.o
	gcc -o testUpdateCoins -g  testUpdateCoins.c dominion.o rngs.o $(CFLAGS)

unittestresults:
	gcc -o unittest1 dominion.c rngs.c unittest1.c asserttrue.c $(CFLAGS)
	unittest1 &> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o unittest2 dominion.c rngs.c unittest2.c asserttrue.c $(CFLAGS)
	unittest2 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o unittest3 dominion.c rngs.c unittest3.c asserttrue.c $(CFLAGS)
	unittest3 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o unittest4 dominion.c rngs.c unittest4.c asserttrue.c $(CFLAGS)
	unittest4 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o unittest5 dominion.c rngs.c unittest5.c asserttrue.c $(CFLAGS)
	unittest5 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o cardtest1 dominion.c rngs.c cardtest1.c asserttrue.c $(CFLAGS)
	cardtest1 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o cardtest2 dominion.c rngs.c cardtest2.c asserttrue.c $(CFLAGS)
	cardtest2 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o cardtest3 dominion.c rngs.c cardtest3.c asserttrue.c $(CFLAGS)
	cardtest3 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o cardtest4 dominion.c rngs.c cardtest4.c asserttrue.c interface.c $(CFLAGS)
	cardtest4 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	gcc -o cardtest5 dominion.c rngs.c cardtest5.c asserttrue.c $(CFLAGS)
	cardtest5 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	rm -rf *.gc*

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player

clean:
	rm -f *.o playdom.exe playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
