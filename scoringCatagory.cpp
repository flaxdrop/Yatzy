#include <iostream>




void chooseCategory() {
    displayScorecard();
    std::cout << "Choose a scoring category (1-13): ";
    int category;
    std::cin >> category;

    // Denna kollar ifall ditt val är giltigt och sparar ditt poäng
    if (category >= 1 && category <= 13 && scores[category - 1] == -1) {
        scores[category - 1] = calculateScore(category);
        totalScore += scores[category - 1];
        std::cout << "Scored " << scores[category - 1] << " points in " << CATEGORY_NAMES[category - 1] << ".\n";
    } else {
        std::cout << "Invalid choice or category already used. Choose another category.\n";
        chooseCategory();  // Ber användaren välja kategori igen då det var ett ogiltigt svar.
    }
}
