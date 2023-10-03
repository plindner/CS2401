/*************************************************************************
 * This program demonstrates that you can change the value of a pointer
 * but you should not or you will cause a segmentation fault.
*************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int* x = new int;
    cout << "x's Value              : " << x << endl;
    cout << "x's Address            : " << &x << endl;
    cout << "Value x is pointing to : " << *x << endl;
    // deallocating the memory beause I'm about to lose track of where it is
    delete x;

    cout << "\n***** CHANGING THE VALUE OF THE POINTER *****\n";
    /* 
     * have to cast 5 to an int* or you SHOULD get a compilation error
     * x = static_cast<int*> (5); woulb be safer, but does not compile for this example
     * because it tries to protect you from doing the bad thing this program demonstrates
    */
    x = (int*) 5;
    cout << "x's Value              : " << x << endl;
    cout << "x's Address            : " << &x << endl;
    cout << "Value x is pointing to : " << *x << endl;
}