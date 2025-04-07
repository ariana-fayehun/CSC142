#include <iostream>

class Goblin{
    public:
        Goblin(){
            std::cout << "A goblin has been summoned!" << std::endl;
        }

        ~Goblin(){
            std::cout << "The goblin has been vanquished!" << std::endl;
        }
};

int main(){
    Goblin summonGoblin;
}