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
class Player
{
  public:
  std::string name;
  int points;
  int turn;

};


int main()
{
    //std::string playerName, playerName2;
    Player players1;
    Player players2;
    srand(time(NULL));
    
    std::cout<< "Ange namnet av spelare 1: " << std::endl;
    std::cin >> players1.name;
    std::cout<< "Ange namnet av spelare 2: " << std::endl;
    std::cin >> players2.name;
     
}


