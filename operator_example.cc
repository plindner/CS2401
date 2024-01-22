/**
 * @file operator_example.cc
 * @author Patricia Lindner
 * @brief This file demonstrates the difference between friend and member implementations of overloaded operators.
 */

#include <string>
using namespace std;

class Student{
    public:
        Student();

        /**
         * @brief Friend version of boolean equality operator
         * 
         * Usage: s1 == s2
         * 
         * @param s1 - the Student object on the left-hand side of the operator
         * @param s2 - the Student object on the right-hand side of the operator
         * @return true - the two Student objects match exactly
         * @return false - at least one field is different between the two Student objects
         */
        friend bool operator == (const Student& s1, const Student& s2);

        /**
         * @brief Member version of boolean equality operator
         * 
         * Usage: s1 == s2
         * Because this function is a member of the class, it "belongs" with the object on the left-hand side.
         * This means that you do NOT pass the left-hand object into the function as an argument.
         * 
         * NOTE: You cannot have a member and friend version of the function with the same right-hand side parameter.
         *       The code will not compile because it will be ambiguous which one you are trying to use.
         * 
         * @param s2 - the Student object on the right-hand side of the operator
         * @return true - the two Student objects match exactly
         * @return false - at least one field is different between the two Student objects
         */
        //bool operator == (const Student& s2) const;

    private:
        string name;
        int age;
        string id;
};


/**
 * You should put the implementations in a separate file.
 * I've put everything in the same file for this example for simplicity. 
 */

// This is the friend version. Notice that "friend" is not used when defining the function
bool operator == (const Student& s1, const Student& s2){
    return s1.name == s2.name && s1.age == s2.age && s1.id == s2.id;
}

/*
// This is the member version. Notice that I now need to add scope resolution.
// Also, you use the names of the Student class's member variables directly to refer to the object to the left of the operator.
// You still need to use "s2." when you are referring to the members of the object to the right of the operator.

bool Student::operator == (const Student& s2) const{
    return name == s2.name && age == s2.age && id == s2.id;
}

*/