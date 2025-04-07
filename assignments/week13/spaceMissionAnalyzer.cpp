#include <iostream>

int distance;
int fuel;
int crew_size;
int spaceship_weight;
int life_support_duration;

bool mission_viability;

int main() {
    std::cout << "Please enter the distance to the planet (million km):" << std::endl;
    std::cin >> distance;

    std::cout << "Please enter the crew size:" << std::endl;
    std::cin >> crew_size;

    std::cout << "Please enter the available fuel:" << std::endl;
    std::cin >> fuel;

    std::cout << "Please enter the spaceship weight:" << std::endl;
    std::cin >> spaceship_weight;

    std::cout << "Please enter the life support duration (days):" << std::endl;
    std::cin >> life_support_duration;

    int efficiency = (fuel / spaceship_weight) * 100;
    int speed = (fuel * 10000) / (crew_size * spaceship_weight);
    int travel_time = (distance * 1000000) / speed;

    if(efficiency >= 20 and life_support_duration >= travel_time + 10 and (crew_size >= 2 and crew_size <= 8) and spaceship_weight < 500) {
        std::cout << "Mission Status: VIABLE" << std::endl;
    }
    else {
        std::cout << "Mission Status: NOT VIABLE" << std::endl;
    }
}