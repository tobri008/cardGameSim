#include "players.h"
#include "utils.h"

void addPoints (Player& p, int howMany)
// add the given number of points to the current score
{
  p.myScore += howMany;
}

void dealHandTo (Player& p, Deck& aDeck)
// initialize the data fields for a player
{
  p.myScore = 0;
  for (int i = 0; i < 3; i++)
    p.myCards[i] = draw(aDeck);
  p.removedCard = 0;
}

Card draw (Player& p)
// return a random card from our hand
{
  p.removedCard = randomizer(3);
  return p.myCards[p.removedCard];
}

void replaceCard (Player& p, Deck& aDeck)
// replace last card played with new card
{
  p.myCards[p.removedCard] = draw(aDeck);
}

int score (const Player& p)
// return the current score
{
  return p.myScore;
}
