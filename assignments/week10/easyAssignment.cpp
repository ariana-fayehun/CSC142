#include <iostream>

void drinkPotion(int& hp, int healAmt){
    hp += healAmt;
}

void damageHero(int* hp, int damageAmt){
    *hp -= damageAmt;
}

int main(){
    int hp = 10;

    std::cout << "Starting HP: " << hp << std::endl;
    std::cout << "Drinking potion... (+10 HP)" << std::endl;

    drinkPotion(hp, 10);

    std::cout << "Current Health: " << hp << std::endl;
    std::cout << "Taking damage... (-20 HP)" << std::endl;
    damageHero(&hp, 20);

    std::cout << "Current Health: " << hp << std::endl;
}