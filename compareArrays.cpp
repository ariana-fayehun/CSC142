#include <iostream>

int array1[5] = {1, 2, 3, 4, 5};
int array2[5] = {1, 2, 3, 4, 5};
bool arraysMatch;

int main() {
    for(int i = 0; i < 5; i++) {
        if(array1[i] != array2[i]) {
            std::cout << "The arrays do NOT match." << std::endl;
            arraysMatch = false;
            break;
        }
        else{
            arraysMatch = true;
        }
    }
    if(arraysMatch){
        std::cout << "The arrays DO match." << std::endl;
    }
}