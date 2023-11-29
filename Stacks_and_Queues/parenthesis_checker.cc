#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    STACK<char> s;
    char tmp;

    tmp = cin.get(); // cin >> tmp;
    while(tmp != '\n'){
        if(tmp == '(' || tmp == '{' || tmp == '['){
            s.push(tmp);
        }
        else if(tmp == ')'){
            if(!s.empty() && s.top() == '(')
                s.pop();
            else{
                cout << "ERROR\n";
                return 1;
            }
        }
        else if(tmp == '}'){
            if(!s.empty() && s.top() == '{')
                s.pop();
            else{
                cout << "ERROR\n";
                return 1;
            }
        }
        else if(tmp == ']'){
            if(!s.empty() && s.top() == '[')
                s.pop();
            else{
                cout << "ERROR\n";
                return 1;
            }
        }
        tmp = cin.get();
    }

    if(s.empty()){
        cout << "All good\n";
    }
    else{
        // stack is not empty
        cout << "ERROR: too many (\n";
    }
}