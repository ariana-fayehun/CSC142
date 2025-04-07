#include <iostream>
#include <cmath>
#include <iomanip>


//user-inputted vars
double in_x;
double in_y;
double in_z;

double thrust;
double angle;
double warp_factor;

// Vars to be calculated during runtime
double new_x;
double new_y;
double new_z;


int main(){
    // Gather info needed to calculate final coordinates
    std::cout << "Please enter the initial coordinates. \n X Coordinate: " << std::endl;
    std::cin >> in_x;
    std::cout << "Y Coordinate: " << std::endl;
    std::cin >> in_y;
    std::cout << "Z Coordinate: " << std::endl;
    std::cin >> in_z;

    std::cout << "Please enter the thrust: " << std::endl;
    std::cin >> thrust;
    
    std::cout << "Please enter the angle in degrees: " << std::endl;
    std::cin >> angle;

    std::cout << "Please enter the warp factor: " << std::endl;
    std::cin >> warp_factor;

    // Calculated vars
    new_x = (in_x + thrust * cos(angle)) * warp_factor;
    new_y = (in_y + thrust * sin(angle)) * warp_factor;
    new_z = in_z + (thrust / warp_factor);


    std::cout << "New coordinates after hyperspace jump: " << std::endl;
    std::cout << "X: " << new_x << "\nY: " << new_y << "\nZ: " << new_z << std::endl;
}