/*
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
*/


# pragma once

class Rectangle {
    private:
        double length = 5;
        double width = 5;

    public:
        double getLength() {
            return length;
        }

        double getWidth() {
            return width;
        }

        void setLength(double inputLength) {
            length = inputLength;

        }

        void setWidth(double inputWidth) {
            width = inputWidth;

        }

        double getArea() {
            return length * width;
        }
};
