# include <iostream>

int main() {
    std::cout << "Countdown..." << std::endl;

    for(int i = 10; i > 0; i--) {
        std::cout << i << "..." << std::endl;
    }

    std::cout << "Lift off!" << std::endl;
}