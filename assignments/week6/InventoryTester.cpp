/*

Name of File: InventoryTester.cpp
Description: 
Name: Ariana Fayehun
Date: 2/24/25

There are two main tasks in this lab:
    - Task 1: Create the Inventory class. The Inventory
        class will manage an array of Book objects
    - Task 2: Create a simple main() method that will test the Inventory class. 
        This will be in the file InventoryTester.cpp

Task 2: Create the InventoryTester Program
    Create your main() method in your InventoryTester.cpp file based on the
    pseudocode given below. Remember that all your files must be in the same folder. 
    Your testing program (with the main() method) must be stored in a file named
    InventoryTester.cpp, and must be in the same folder with your Book.h file and 
    your Inventory.h file. (Also with your Def.cpp files if you have them)

    Your inventory tester program will do the following:
        1. Create an Inventory object of size 10.
        2. You will use the following data to create several Book objects. For each line,
        create a new Book object and then add it to the Inventory using addBook().
        (The first three books are the same as from the previous lab.)
        Be sure to check the return value from the addBook() method to confirm that the
        operation was successful.

        "013478796X", "Tony Gaddis", "Starting Out With Java: From Control
        Structures through Data Structures", 4, "PE", 121.75
        "0321409493", "John Lewis", "Java Software Solutions: Foundations of
        Program Design", 5, "AW", 94.00
        "0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12,
        "PE", 134.84
        "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00
        "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95
        "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70

        3. Use the printInventory() method to display the initial inventory report.
        4. Test the changePrice() method by attempting the following changes. (You will
        need to use the ISBN codes to specify the book.)
        a. Change the price of the Gaddis book (013478796X) to $50.00.
        b. Change the price of the Kurzweil book (0143067889) to $9.95.
        c. Change the price of the Deitel book (0134743350) to $100.00.
        5. Use the printInventory() method again to display the final inventory report.
        
        
Finishing Up:
    When you have finished, there are up to five (5) files to submit for this assignment:
        - if you chose to declare and define your classes in one header file each, 
        then you only need to submit three (3) files with the following names...
            - Book.h
            - Inventory.h
            - InventoryTester.cpp

        - if you chose to declare your classes in a header file and define them within a .cpp
        file, then you need to submit five (5) files in total with the following names...
            - Book.h
            - BookDef.cpp
            - Inventory.h
            - InventoryDef.cpp
            - InventoryTester.cpp

*/

# include "Inventory.h"
# include "Book.h"
# include <iostream>
# include <cstdio>

int main() {
    Inventory inventory1(10);

    Book book1("013478796X", "Tony Gaddis", 
        "Starting Out With Java: From Control Structures through Data Structures", 
        4, "PE", 118.30);

    Book book2("0321409493", "John Lewis", 
        "Java Software Solutions: Foundations of Program Design", 
        5, "AW", 94.05);

    Book book3("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
        12, "PE", 134.84);
    
    Book book4("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);

    Book book5("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);

    Book book6("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    inventory1.addBook(book1);
    inventory1.addBook(book2);
    inventory1.addBook(book3);
    inventory1.addBook(book4);
    inventory1.addBook(book5);
    inventory1.addBook(book6);

    std::cout << "Showing initial report..." << std::endl;

    inventory1.printInventory();

    inventory1.changePrice("013478796X", 50.00);
    inventory1.changePrice("0143067889", 9.95);
    inventory1.changePrice("0134743350", 100.00);

    std::cout << "" << std::endl;
    std::cout << "Showing changed report..." << std::endl;

    inventory1.printInventory();
}