#include <iostream>

class Inventory{
    private:
        std::string* items;
        int count;
        int capacity;

    public:
        Inventory(int cap = 10)
            : capacity(cap), count(0){
                items = new std::string[capacity];
        }

        Inventory(const Inventory& other)
            : capacity(other.capacity), count(other.count) {
            items = new std::string[capacity];
            for (int i = 0; i < count; i++) {
                items[i] = other.items[i];
            }
        }


        ~Inventory(){
            delete[] items;
        }

        void addItem(const std::string& item){
            if(count < capacity) {
                items[count++] = item;
                std::cout << item << " added." << std::endl;
            }
            else{
                std::cout << "Capacity full. Can't add any more." << std::endl;
            }

        }

        void showInventory(){
            for(int i; i < count; i++){
                std::cout << "- " << items[i] << std::endl;
            }
        }
};

int main() {
    Inventory inventory1;

    inventory1.addItem("Magic Sword");
    inventory1.addItem("Potion of Healing");

    Inventory inventory2 = inventory1;
    inventory2.addItem("Bag of Holding");

    std::cout << "\nInventory 1" << std::endl;

    inventory1.showInventory();

    std::cout << "\nInventory 2" << std::endl;

    inventory2.showInventory();
}