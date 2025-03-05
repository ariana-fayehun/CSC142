/*    Task 3:
        If an addBook() attempt fails, print a message identifying which book failed (by title or
        ISBN number).
        One or more of these new books will fail to add to the inventory, causing addBook() to
        return false. Your inventoryTester program must check the return status of each call to
        addBook().
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

    Book book7("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95);

    Book book8("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95);

    Book book9("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38);

    Book book10("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38);

    Book book11("0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95);

    Book book12("0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50);

    inventory1.addBook(book1);
    inventory1.addBook(book2);
    inventory1.addBook(book3);
    inventory1.addBook(book4);
    inventory1.addBook(book5);
    inventory1.addBook(book6);
    inventory1.addBook(book7);
    inventory1.addBook(book8);
    inventory1.addBook(book9);
    inventory1.addBook(book10);
    inventory1.addBook(book11);
    inventory1.addBook(book12);

    std::cout << "Showing initial report..." << std::endl;

    inventory1.printInventory();

    inventory1.changePrice("013478796X", 50.00);
    inventory1.changePrice("0143067889", 9.95);
    inventory1.changePrice("0134743350", 100.00);

    std::cout << "\nShowing changed report..." << std::endl;

    inventory1.printInventory();
}