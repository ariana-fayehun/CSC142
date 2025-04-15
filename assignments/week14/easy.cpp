#include <iostream>

void countdown_to_lightspeed(int seconds) {
    for(; seconds > 0; seconds -= 1) {
        std::cout << "Jumping in " << seconds << std::endl;
    }

    std::cout << "Punch it, Chewie!" << std::endl;
}

int main() {
    countdown_to_lightspeed(5);
    return 0;
}