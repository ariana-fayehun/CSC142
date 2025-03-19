#include <iostream>

std::string name;
int age;
int daysOld;

int main(){

    std::cout << "Please enter your name:" << std::endl;
    std::getline(std::cin, name);

    std::cout << "Please enter your age:" << std::endl;
    std::cin >> age;

    daysOld = age * 365;

    std::cout << "Hello, " << name << ". You are approximately " << daysOld << " days old!" << std::endl;

}