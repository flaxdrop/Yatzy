#include <iostream>




int calculateScore(int category) {
        int values[6] = {0};
        for (int i = 0; i < 5; ++i) {
            values[dice[i].getValue() - 1]++;
        }

        int score = 0;
        switch (category) {
            case 1: case 2: case 3: case 4: case 5: case 6:  // Ones, Twos, Threes, Fours, Fives, Sixes
                for (int i = 0; i < 5; ++i) {
                    if (dice[i].getValue() == category) score += dice[i].getValue();
                }
                break;
            case 7:  // Three of a Kind
                for (int i = 0; i < 6; ++i) if (values[i] >= 3) score = sumDice();
                break;
            case 8:  // Four of a Kind
                for (int i = 0; i < 6; ++i) if (values[i] >= 4) score = sumDice();
                break;
            case 9:  // Full House (e.g., 3+2)
                if (std::find(values, values + 6, 3) != values + 6 &&
                    std::find(values, values + 6, 2) != values + 6)
                    score = 25;
                break;
            case 10:  // Small Straight (1-5)
                if (values[0] >= 1 && values[1] >= 1 && values[2] >= 1 && values[3] >= 1 && values[4] >= 1) score = 30;
                break;
            case 11:  // Large Straight (2-6)
                if (values[1] >= 1 && values[2] >= 1 && values[3] >= 1 && values[4] >= 1 && values[5] >= 1) score = 40;
                break;
            case 12:  // Yatzy (all five dice the same)
                if (*std::max_element(values, values + 6) == 5) score = 50;
                break;
            case 13:  // Chance (sum of all dice)
                score = sumDice();
                break;
            default:
                break;
        }
        return score;
    }