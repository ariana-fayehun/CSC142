#include <iostream>

enum class CharacterClass {
    Warrior,
    Mage,
    Archer,
    Rogue
};

struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

std::string toString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior:
            return "Warrior";
        case CharacterClass::Mage:
            return "Mage";
        case CharacterClass::Archer:
            return "Archer";
        case CharacterClass::Rogue:
            return "Rogue";
        default:
            return "Unknown";
    }
}

int main() {
    Character characters[4] = {
        {"Person1", CharacterClass::Warrior, 90, 90},
        {"Person2", CharacterClass::Mage, 910, 910},
        {"Person3", CharacterClass::Archer, 40, 450},
        {"Person4", CharacterClass::Rogue, 30, 20}
    };

    std::cout << "Characters \n------------------------------------------------------------" << std::endl;
    for(int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name  << "     Class: " << toString(characters[i].type)  << "     Health: " << characters[i].health  << "     Strength: " << characters[i].strength << std::endl;
    }
    std::cout << "------------------------------------------------------------" << std::endl;
}