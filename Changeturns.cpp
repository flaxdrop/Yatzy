#include <iostream>



void playGame() {
        for (int round = 1; round <= 13; ++round) {
            std::cout << "\n--- Round " << round << " ---\n";
            for (int i = 0; i < players.size(); ++i) {
                std::cout << players[i].getName() << "'s turn:\n";
                players[i].rollDice();
                players[i].reRollDice();
                players[i].chooseCategory();
            }
        }
}