#include "cards.h"
#include <sstream>

using namespace std;

void setCard (Card& c, suits sv, int rv)
// initialize a new Card using the argument values
{
  c.rank = rv;
  c.suit = sv;
}

string toString (const Card& aCard)
// output a textual representation of a Card
{
  string result;
  // first output rank
  switch (aCard.rank) {
  case 1:  result = "Ace";   break;
  case 11: result = "Jack";  break;
  case 12: result = "Queen"; break;
  case 13: result = "King";  break;
  default:	// output number
    ostringstream out;
    out << aCard.rank;
    result = out.str();
    break;
  }

  // then output suit
  switch (aCard.suit) {
  case diamond: result += " of Diamonds"; break;
  case spade:   result += " of Spades";   break;
  case heart:   result += " of Hearts";   break;
  case club:    result +=  " of Clubs";    break;
  }
  return result;
}
