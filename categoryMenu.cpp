#include <iostream>



#include <vector>
#include <string>

const std::vector<std::string> CATEGORY_NAMES = {
    "Ones", "Twos", "Threes", "Fours", "Fives", "Sixes",
    "One Pair", "Two Pairs", "Three of a Kind", "Four of a Kind",
    "Full House", "Small Straight", "Large Straight", "Yatzy", "Chance"
};


void displayScorecard() const {
    std::cout << name << "'s Scorecard:\n";
    std::cout << "--------------------------------------\n";
    std::cout << "Category\tScore\n";
    std::cout << "--------------------------------------\n";

    for (size_t i = 0; i < CATEGORY_NAMES.size(); ++i) {
        if (scores[i] == -1) {
            std::cout << CATEGORY_NAMES[i] << "\t\t" << "Not scored yet\n";
        } else {
            std::cout << CATEGORY_NAMES[i] << "\t\t" << scores[i] << "\n";
        }
    }

    std::cout << "--------------------------------------\n";
}


void chooseCategory() {
    displayScorecard();  // Visa poäng innan man väljer kategori
    std::cout << "Choose a scoring category (1-13): ";
    int category;
    std::cin >> category;

}
