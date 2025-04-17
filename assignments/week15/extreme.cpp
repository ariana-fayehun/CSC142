#include <iostream>
#include <tuple>

int main(){
    int riddleNum;
    std::string riddleText;
    bool isSolved;

    std::tuple<int, std::string, bool> riddle(7, "What has roots as nobody sees, is taller than trees...", true);

    std::tie(riddleNum, riddleText, isSolved) = riddle;

    std::cout << "Riddle #" << riddleNum << ": " << riddleText << std::endl;
    std::cout << "Solved: " << (isSolved ? "Yes": "No") << std::endl;
}