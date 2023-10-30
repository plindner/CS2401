/**
* This main demonstrates how to make a polymorphic array
*/

int main(){
    Triangle t;
    Circle c;
    Rectangle r;
    //Shape s;

    //s.cost();
    t.cost();

    // Use polymorphism to create an array that seems to store different types of objects
    Shape* s[10];
    Shape* item;
    item = new Circle;
    s[0] = item;
    s[0] -> cost();
    s[1] = new Triangle;
    s[1] -> cost();
    s[2] = new Rectangle;
    s[2] -> cost();

    // This code compiles if the parent function is NOT purely virtual, but has consequences (data slicing)
    Shape s2[10];
    s2[0] = c;
}