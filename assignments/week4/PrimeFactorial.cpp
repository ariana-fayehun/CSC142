/*

Name of File: PrimeFactorial.cpp
Description: Picks a random number between 0 and 51 and determines whether its prime.
If it is, it calculates the factorial.
Name: Ariana Fayehun
Date: 2/12/25

Your task
    0. Rename file to PrimeFactorial.cpp

    Write a program that implements the following pseudocode:
    main():
        - Generate a random integer less than 50.

        - If the number is prime:
            Calculate and display the number and its factorial.
        - Otherwise:
            Display the number with a message that it is not prime.

        - Ask the user if they wish to repeat. If they say yes, the
        entire process is repeated. Otherwise, the program terminates with a
        ‘goodbye’ message.

        -You must define and use the methods isPrime() and factorial() described here:
            isPrime():
                This method takes one integer input argument, and returns true if the number is
                prime, otherwise it returns false.
                Remember that a prime number is a number that is evenly divisible only by itself
                and 1. For example, the number 5 is prime because it can only be evenly divided
                by 1 and 5. The number 6, however, is not prime because it can be evenly
                divided by 1, 2, 3, and 6.
                (Note: By definition, 0 and 1 are not prime. Your code must account for this.)
                Hint: An easy way to determine if a number a is evenly divisible by another
                number b is to use the modulus operator %. This operator performs integer
                division between the two numbers and returns the remainder of the division.
                In an expression such as (a % b), the % operator will return 0 only if a is
                evenly divisible by b. The following pseudocode implements this:
                Use a for loop, starting at b=2, continuing as long as b<a, and at each
                pass increment b by 1.
                If at any time (a % b) is 0, then immediately return false (the number
                is not prime). If the for loop completes without this happening, then
                return true (the number is prime).

            factorial():
                This takes one integer input argument and returns its factorial as a double.
                Note: while a factorial is technically an integer value, the int datatype in C++ is
                limited to a maximum value of about 2×109. (Why? How many bits are used
                to represent an int?) Factorials get very large (factorial(50) ≈ 1065) so this is
                insufficient. The best choice is to use a return value of type double. (What is
                the largest value of a double?)
                Remember that the factorial of a number n (written as n! ) is defined as the
                product of all the integers from 1 to n :

                - In general: factorial(𝑛) = 1 ∗ 2 ∗ 3 ∗ ... ∗ (𝑛 − 1) ∗ 𝑛
                - For example: factorial(7) = 1 ∗ 2 ∗ 3 ∗ 4 ∗ 5 ∗ 6 ∗ 7 = 5,040
                - Special case: factorial(0) = 1
                Since calculating the factorial of a number is a repetitive process it is natural to
                use a looping algorithm. Since we know exactly how many numbers we want to
                multiply (the integers from 1 to n) this is a perfect opportunity to use a for loop.
                Your factorial() method will be almost identical to the summation() method
                we briefly covered in class on Monday. The differences are:
                - Use multiplication instead of addition.
                - Start with an initial value of 1 instead of 0.

Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - The program uses the methods and pseudocode defined above and produces
        correct results.
        - The program runs without error and does not crash.
        - The is formatted appropriately with sufficient and clear explanatory messages. 
            In particular:
                The randomly selected number is displayed.
                If the randomly selected number is prime, the factorial value is displayed on a
                separate line, with all digits and no decimal places.
        - The program repeats as long as the user confirms that they want to repeat.

*/

# include <iostream>
# include <ctime>

std::string continueLoop = "y"; // Defines whether the loop will repeat or not

bool isPrime(int pNum) { // Function that determines wheter an entered number is prime
    if (pNum <= 1) {
        return false; // Return false if a number is NOT prime
    }

    for (int i = 2; i < pNum; i++) {
        if (pNum % i == 0) {
            return false;
        }
    }
    return true; // Return true if a number IS prime
}

double factorial(int fNum) { //Function to calculate the factorial of a number
    double calculateFac = 1;
    for (int j = 1; j <= fNum; j++) {
        calculateFac *= j;
        }
    return calculateFac;
}

int main() {

    do { 
        srand(time(0));

        int randInt = rand() % 51; // Picks a random number between 0 and 51

        std::cout << "The number was: " << randInt << std::endl;

        if (isPrime(randInt)) { // If the number was prime, calculate the factorial
            double factorialResult = factorial(randInt);
            std::cout << randInt << " IS prime." << std::endl;
            std::cout << "The factorial of " << randInt << " is: " << factorialResult << std::endl;

        } else { // Else, state that the number was not prime.
            std::cout << randInt << " is NOT prime." << std::endl;
        }

        std::cout << "Would you like to continue? (y/n)" << std::endl; //Prompt user to ask whether they would like to continue
        std::getline(std::cin, continueLoop);
    } while (continueLoop == "y"); //If yes, repeat the loop

    std::cout << "Goodbye!" << std::endl; // If not yes, end program.

}