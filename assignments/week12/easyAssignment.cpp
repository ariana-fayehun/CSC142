#include <iostream>

int potionAmt;
int goldAmt = 100;
int cost;

int main() {
    std::cout << "Welcome to the Potion Shop! A healing potion costs 10 coins each." << std::endl;
    std::cout << "How many potions would you like to buy? " << std::endl;

    std::cin >> potionAmt;

    cost = potionAmt * 10;

    if(goldAmt >= cost) {
        goldAmt -= cost;
        std::cout << "Remaining Amout of Money: " << goldAmt << std::endl;
    }
    else {
        std::cout << "Not Enough Money." << std::endl;
    }
}