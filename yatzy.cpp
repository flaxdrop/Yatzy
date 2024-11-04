#include <iostream>
#include <cstdlib>
#include <ctime>

class Dice
{
    int dieThrowValues[5];
    public: 
     
    int diceThrow()
    {
        return 1 + rand() % 6;
    }
    void throwFiveDie()
    {
        std::cout << "Du kastar tärningarna!" << std::endl;
        for (int i = 0; i < 4; i++)
        {
            dieThrowValues[i] = diceThrow();
        }
    }
    void printDieValues()
    {
        std::cout << "Dina tärningar visar: ";
        for (int i = 0; i < 4; i++)
        {
            std::cout << dieThrowValues[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    srand(time(NULL));

}
