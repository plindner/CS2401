// Parenthesis checker

int main(){
    STACK<char> s;
    char tmp;

    tmp = cin.get();
    while(tmp != '\n'){
        if(tmp == '(' || tmp == '{' || tmp == '['){
            s.push(tmp);
        }
        else if(tmp == ')'){
            if(!s.empty() && s.top() == '('){
                s.pop();
            }
            else{
                cout << "ERROR: mismatch\n";
                cout << "Either expression starts with ) or there are too many )\n";
            }
        }

        tmp = cin.get();
    }
    if(!s.empty()){
        cout << "ERROR: too many (\n";
    }
}