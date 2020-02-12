#include "decks.h"
#include "utils.h"
#include <algorithm>

using namespace std;

Card draw (Deck& d)
// remove and return one card from the end of the deck
{
  if (!isEmpty(d))
    {
      Card c = d[d.size()-1];
      d.pop_back();
      return c;
    }
  else {
    // otherwise return ace of spades
    Card spadeAce; setCard(spadeAce, spade, 1);
    return spadeAce;
  }
}


void fillDeck (Deck&  d)
// initialize a deck by creating all 52 cards
{
  d.clear();
  for (int i = 1; i <= 13; i++) {
    Card c1, c2, c3, c4;
    setCard(c1, diamond, i);
    setCard(c2, spade, i);
    setCard(c3, heart, i);
    setCard(c4, club, i);

    d.push_back (c1);
    d.push_back (c2);
    d.push_back (c3);
    d.push_back (c4);
  }
}


bool	isEmpty (const Deck& d )
{
  return d.size() <= 0;
}

void shuffle (Deck& deck)
{
  random_shuffle (deck.begin(), deck.end(), randomizer);
}
