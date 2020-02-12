#include "cards.h"
#include "decks.h"
#include "players.h"
#include "utils.h"

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
  if (argc <= 1)
    srand (time(NULL));
  else
    srand(argc);

  Deck theDeck; // create and shuffle the deck
  fillDeck(theDeck);
  shuffle(theDeck);

  // create the two players and deal their hands to them
  Player player1;
  dealHandTo (player1, theDeck);
  Player player2;
  dealHandTo (player2, theDeck);

  // play until deck is empty
  while (!isEmpty(theDeck) ) {
    Card card1  = draw(player1);
    cout << "Player 1 plays " << toString(card1) << endl;
    Card card2 = draw(player2);
    cout << "Player 2 plays " << toString(card2) << endl;

    if (card1.rank == card2.rank) { // tie
      addPoints(player1, 1);
      addPoints(player2, 1);
      cout << "Players tie\n";
    }
    else if (card1.rank > card2.rank) {
      addPoints(player1, 2);
      cout << "Player 1 wins round\n";
    }
    else {
      addPoints(player2, 2);
      cout << "Player 2 wins round\n";
    }

    // now replace the cards drawn
    replaceCard(player1, theDeck);
    replaceCard(player2, theDeck);
  }
  cout << "Player 1 score " << score(player1) << endl;
  cout << "Player 2 score " << score(player2) << endl;

  return 0;
}
