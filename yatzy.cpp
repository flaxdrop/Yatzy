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
    srand(time(NULL));

}
