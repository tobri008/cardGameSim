#ifndef CARDS_H
#define CARDS_H

#include <string>

enum suits {diamond, club, heart, spade};

struct Card {
  int  	rank;           // hold rank of card
  suits	suit;           // hold suit of card
};

void setCard (Card& c, suits sv, int rv);
// initialize a new Card using the argument values

std::string toString (const Card& aCard);
// output a textual representation of a Card


#endif
