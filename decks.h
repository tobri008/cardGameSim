#ifndef DECKS_H
#define DECKS_H

#include "cards.h"
#include <vector>

typedef std::vector<Card> Deck;

Card draw (Deck& d);
// remove and return one card from the end of the deck

void fillDeck (Deck&  d);
// initialize a deck by creating all 52 cards

bool	isEmpty (const Deck& d );

void shuffle (Deck& deck);


#endif
