/*

Name of File: RectangleTester.cpp
Description: Asks for inputs descriping the length and width of three different rooms,
and responds with the area
Name: Ariana Fayehun
Date: 2/17/25

Your task is to create the complete Rectangle class and test it in a .cpp file  as specified here:
    0. Rename this file to RectangleTester.cpp

    - Remember that only ONE .cpp file can have a main() method!

    -The Rectangle Class
        This class will either be declared and defined within a single header file or
        declared within a header file and defined in a separate .cpp file
        Your class should have two private fields, length and width of type double
        You will then need to declare/define several public methods that will complete the following:
            - A method to get the width
            - A method to get the length
            - A method to set the width
            - A method to set the length
            - A method to get the area
                ** If you're not sure how to calculate the area of a rectangle, look it up **

    - The RectangleTester file
        Your main() program is in the RectangleTester.cpp file. 
        This program will test the Rectangle class, confirming that it works correctly, by
        creating several Rectangle objects that represent rooms of an apartment. The purpose
        of the tester program is to ensure that all the methods work correctly.
        The main() method will perform the following steps:
            1. Create three Rectangle objects, one for each of three rooms in an apartment
            (the kitchen, a bedroom, and the living room).
            2. Ask the user for the length and width of each of the three rooms. Use the "setter"
            methods to set those values in each of the three Rectangle objects.
            3. Report to the user the size (length x width) and area of each of the three rooms,
            using the "getter" methods.
            4. Also report the total area of the apartment by adding the areas of the rooms.
        
Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments are included.
        - The filenames correctly match.
        - The Rectangle class has the proper header and is in a file with the correct name.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - Numbers are printed with reasonable formatting. This means limiting the number
        of decimal digits when appropriate.
        - The program uses the methods and pseudocode defined above and produces
        correct results. In particular, private fields may only be accessed by using the
        setter and getter methods.
        - The program runs without error and does not crash.
        - The program’s input and output are formatted appropriately with sufficient and
        clear explanatory messages.

Finishing Up
    When you have finished, there are up to three files to submit for this assignment:
        - if you chose to declare and define your class in one header file then you only
        need to submit two files with the following names...
            - Rectangle.h
            - RectangleTester.cpp

        - if you chose to declare your class in a header file and define it within a .cpp
        file, then you need to submit three files in total with the following names...
            - Rectangle.h
            - RectangleDefinitions.cpp
            - RectangleTester.cpp
*/

# include <iostream>
# include "Rectangle.h"

std::string lengthInput;
std::string widthInput;
int area1;
int area2;
int area3;
int totalArea;

int main() {
    Rectangle kitchen;
    Rectangle bedroom;
    Rectangle livingRoom;

    std::cout << "Please enter the length and width of the kitchen." << std::endl;
    std::cout << "Length: " << std::endl;
    std::getline(std::cin, lengthInput);
    kitchen.setLength(std::stod(lengthInput));

    std::cout << "Width: " << std::endl;
    std::getline(std::cin, widthInput);
    kitchen.setWidth(std::stod(widthInput));
    area1 = kitchen.getArea();

    std::cout << "Kitchen Dimensions:" << std::endl;
    std::cout << "Length: " << kitchen.getLength() << "     Width: " << kitchen.getWidth() << "     Area: " << kitchen.getArea() << std::endl;


    std::cout << "Please enter the length and width of the bedroom." << std::endl;
    std::cout << "Length: " << std::endl;
    std::getline(std::cin, lengthInput);
    bedroom.setLength(std::stod(lengthInput));

    std::cout << "Width: " << std::endl;
    std::getline(std::cin, widthInput);
    bedroom.setWidth(std::stod(widthInput));
    area2 = bedroom.getArea();

    std::cout << "Bedroom Dimensions:" << std::endl;
    std::cout << "Length: " << bedroom.getLength() << "     Width: " << bedroom.getWidth() << "     Area: " << bedroom.getArea() << std::endl;


    std::cout << "Please enter the length and width of the living room." << std::endl;
    std::cout << "Length: " << std::endl;
    std::getline(std::cin, lengthInput);
    livingRoom.setLength(std::stod(lengthInput));

    std::cout << "Width: " << std::endl;
    std::getline(std::cin, widthInput);
    livingRoom.setWidth(std::stod(widthInput));
    area3 = livingRoom.getArea();

    std::cout << "Living Room Dimensions:" << std::endl;
    std::cout << "Length: " << livingRoom.getLength() << "     Width: " << livingRoom.getWidth() << "     Area: " << livingRoom.getArea() << std::endl;

    totalArea = area1 + area2 + area3;
    std::cout << "" << std::endl;
    std::cout << "The total area is: " << totalArea << std::endl;

    return 0;
}