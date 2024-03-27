#include "clock.h"

int main(){
    Clock c1, c2;
    Alarm a1, a2;

    c1.set_time(10, 9);
    c1.advance();
    c1.advance(10);
    c1.output();

    a1.set_alarm(12, 0);
    a1.set_time(10, 15);
    al.output();

    c1.is_equal(c2);
    a1.is_equal(a2);

    a1.is_equal(c1);
    c1.is_equal(a1);

    c1 = a1; // works - but slices
    a1 = c1; // doesn't work 

    c1 = c2; // Parent = Parent
    a1 = a2; // Child = Child
}