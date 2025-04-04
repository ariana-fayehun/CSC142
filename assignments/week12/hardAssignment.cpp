#include <iostream>
#include <cstdlib>
#include <ctime>

int heroAC = 15;
int heroHP = 20;

int goblinAC = 10;
int goblinHP = 12;

int d20;

int heroDamage;
int goblinDamage;

std::string whosTurn = "hero";


int main() {
    srand(time(0));
    std::cout << "Combat begins between hero and goblin." << std::endl;

    while(heroHP > 0 and goblinHP > 0) {
        if(whosTurn == "hero") {
            d20 = 1 + rand() % 20;
            std::cout << "\n-- Hero's Turn --" << std::endl;
            if(d20 >= goblinAC) {
                heroDamage = 1 + rand() % 8;
                std::cout << "Hero rolls a " << d20 << " and hits the goblin!" << std::endl;
                goblinHP -= heroDamage;
                if(goblinHP < 0) {
                    goblinHP = 0;
                }
                std::cout << "Dealt " << heroDamage << " damage. Goblin has " << goblinHP << " HP remaining." << std::endl;
                whosTurn = "goblin";
            }
            else {
                std::cout << "Hero rolls a " << d20 << " and misses." << std::endl;
                whosTurn = "goblin";
            }
        }
        else {
            d20 = 1 + rand() % 20;
            std::cout << "\n-- Goblin's Turn --" << std::endl;
            if(d20 >= heroAC) {
                goblinDamage = 1 + rand() % 6;
                std::cout << "Goblin rolls a " << d20 << " and hits the hero!" << std::endl;
                heroHP -= goblinDamage;
                if(heroHP < 0) {
                    heroHP = 0;
                }
                std::cout << "Dealt " << goblinDamage << ". Hero has " << heroHP << " HP remaining." << std::endl;
                whosTurn = "hero";
            }
            else {
                std::cout << "Goblin rolls a " << d20 << " and misses." << std::endl;
                whosTurn = "hero";
            }

        }

    }
    if(heroHP == 0) {
        std::cout << "Hero has fallen! Goblin Wins!" << std::endl;
    }
    else {
        std::cout << "Goblin has fallen! Hero Wins!" << std::endl;
    }
}