#ifndef PLAYER_H
#define PLAYER_H

#include "cards.h"
#include "decks.h"

struct Player {
  Card	myCards[3];
  int 	myScore;
  int 	removedCard;
};



void addPoints (Player& p, int howMany);
// add the given number of points to the current score

void dealHandTo (Player& p, Deck& aDeck);
// initialize the data fields for a player

Card draw (Player& p);
// return a random card from our hand

void replaceCard (Player& p, Deck& aDeck);
// replace last card played with new card

int score (const Player& p);
// return the current score


#endif
