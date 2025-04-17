#include <iostream>
#include <utility>

int main(){
    std::string gadget1 = "Batarang";
    std::string gadget2 = "Grappling Hook";

    std::cout << "\nGadget 1: " << gadget1 << "Gadget 2: " << gadget2 << std::endl;

    swap(gadget1, gadget2);

    std::cout << "\nGadget 1: " << gadget1 << "Gadget 2: " << gadget2 << std::endl;
}