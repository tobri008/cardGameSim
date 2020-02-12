# cardGameSim
Simulated "highest value card wins" game

===============================

Utils file provides the randomizer.
Players are initalized in the players file
Cards are given value in the cards file
The deck is initalized and shuffled in the decks file
Game file acts as the "main" and calls to the other header files to run the simulated highest value wins card game


====================== Description ======================

52 standards playing card values are "shuffled" into a deck and dealt to the players. (using the randomizer in utils)

Players 1 and 2 play out their turns either winning a round, losing, or by having a tie.

The winning player gains points, 1 point per round won.

The players play until the deck is out of cards.

Once out of cards, the score of both players is displayed.

