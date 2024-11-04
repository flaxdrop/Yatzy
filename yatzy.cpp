#include <iostream>
#include <cstdlib>
#include <ctime>

class yatzy
{
    public: 
    int diceThrow()
    {
        return 1 + rand() % 6;
    }
};

int main()
{
    std::string playerName, playerName2;
    Player players[2];
    srand(time(NULL));
    
    std::cout<< "Ange namnet av spelare 1: " << std::endl;
    std::cin >> playerName;
    std::cout<< "Ange namnet av spelare 2: " << std::endl;
    std::cin >> playerName2;
     
}

class Player
{
  public:
  std::string name;
  int points;
  int turn;

};



