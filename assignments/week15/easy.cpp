#include <iostream>
#include <utility>

int main(){
    std::pair<std::string, std::string> batSignal("Joker", "Arkham Asylum");

    std::cout << "\n" << batSignal.first << " spotted at " << batSignal.second << "!\n" << std::endl;
}