#include "shapes.h"

int main(){
    Circle c;
    //Shape s;
    //cout << s.cost();
    cout << c.cost();

    Shape *s[6];
    s[0] = new Circle;
    s[1] = new Rectangle;
    s[2] = new Triangle;

    cout << s[0] -> cost();
}