/*
- Diagram for the Book class:

            * Anything marked with " — " is private *
            * Anything marked with " + " is public *
            * When you see a colon " : ", anything to the left of the colon is a name
                and anything to the right of the colon is the data type of said name *

            Book
            — codeNum : string    ----
            — author : string        |
            — title : string         |____ Fields
            — edition : int          |
            — pubCode : string       |
            — price : double      ----
            
            + Book(cn:string, au:string, ti:string, ed:int, pc:string, pr:double) <- Constructor

            + getTitle( )                               -----
            + getAuthor( )                                  |
            + getPrice( )                                   |
            + getEdition( )                                 |______ Methods
            + getISBN( )                                    |
            + getPubCode( )                                 |
            + changePrice(newPrice : double) : void     -----

    The Book Constructor:
        In addition to fields and methods, a class definition can also include a constructor,
        which is a special method that is used to create a new object of that class. In the
        previous lab we did not use a constructor for the Rectangle class, so C++ created each
        new Rectangle object with the fields set to the default value 0.0.
        For the Book class we will use a constructor to create new objects of the class. The
        constructor will set the initial field values, avoiding the need for using separate setter
        methods.
        The constructor for a Book is given here. You may copy and paste this code directly into
        your Book class:

            Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
                codeNum = cn;
                author = au;
                title = ti;
                edition = ed;
                pubCode = pc;
                price = pr;
            }

        Note that the name of a constructor method is the same as the class name, and the
        constructor has no return type (not even void). This constructor takes six input
        parameters which are used to assign values to the six field variables.
        When a constructor is defined, then it can be used in main() when a new object is
        created. For example, in main() you can create a Book object like this:
        Book book1 = Book(
            "013478796X", "Tony Gaddis",
            "Starting Out with Java: From Control Structures to Data Structures",
            4, "PE", 118.30
        );
*/

# pragma once
# include <iostream>

class Book {
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        std::string getTitle() {
            return title;

        }

        std::string getAuthor() {
            return author;

        }

        double getPrice() {
            return price;

        }

        int getEdition() {
            return edition;

        }

        std::string getISBN() {
            return codeNum;

        }

        std::string getPubCode() {
            return pubCode;

        }

        void changePrice(double newPrice) {
            price = newPrice;
            
        }
};