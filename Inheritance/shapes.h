/**
* This file contains example code for declaring virtual and purely virtual functions.
*/

class Shape{
    public:
        double cost() {return area() * cost_per;}

        // Virtual function w/ implementation for parent
        virtual double area() {return 0;}

        // Purely virtual function (no meaning for the parent)
        //virtual double area() = 0;

    private:
        double cost_per;
};

class Rectangle:public Shape{
    public:
        double area(){return length * width;}

    private:
        double length;
        double width;
};

class Circle:public Shape{
    public:
        double area() {return PI * radius * radius;}

    private:
        double radius;
};

class Triangle:public Shape{
    public:
        double area(){return 0.5 * base * height;}

    private:
        double base;
        double height;
};