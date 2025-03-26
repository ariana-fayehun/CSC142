#include <iostream>

class MagicItem {
    public:
        MagicItem(const std::string& itemName, const std::string& magicType, int chargeNumber) 
            : item{itemName}, magic{magicType}, charges{chargeNumber} {
                std::cout << "\n" << item << " created (Power type: " << magic << ") Created with " << charges << "charges" << std::endl;
            }

    void useItem() {
        if(charges > 0) {
            charges -=1;
            std::cout << item << " (" << magic << ") used. " << charges << " charges left." << std::endl;
        }
        else {
            std::cout << "No charges left to use for " << item << " (" << magic << ")" << std::endl;
        }
    }

    private:
        std::string item;
        std::string magic;
        int charges;
};

int main () {
    MagicItem item1("Super Cool Wand", "Wand Orbs", 5);
    item1.useItem();
    item1.useItem();
    item1.useItem();

    MagicItem item2("Super Uncool Staff", "Wand Hits", 3);
    item2.useItem();
    item2.useItem();
    item2.useItem();
    item2.useItem();
    item2.useItem();
}