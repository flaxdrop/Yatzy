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


