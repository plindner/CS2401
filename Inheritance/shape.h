class Shape{
    public:
        double cost() {return area() * cost_per;}
        virtual double area() = 0;

    private:
        double cost_per;
};

class Rectangle:public Shape{
    public:
        double area() {return base * height;}

    private:
        double base;
        double height;
};

class Triangle:public Shape{
    public:
        double area() {return 0.5 * base * height;}

    private:
        double base;
        double height;
};

class Circle:public Shape{
    public:
        double area() {return 3.14159265 * radius * radius;}

    private:
        double radius;
};