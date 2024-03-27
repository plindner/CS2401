// fully parenthesized calculator

int main(){
    STACK<int> nums;
    STACK<char> ops;
    char tmp;
    int n1, n2, n3;

    tmp = cin.get();
    while(tmp != '\n'){
        if(isdigit(tmp)){
            cin.putback(tmp);
            cin >> n1;
            nums.push(n1);
        }
        else if(isop(tmp)){
            ops.push(tmp);
        }
        else if(tmp == ')'){
            // do math
            if(!nums.empty()){
                n3 = nums.top();
                nums.pop();
            }
            else{
                cout << "ERROR!\n";
                return 1;
            }

            if(!nums.empty()){
                n2 = nums.top();
                nums.pop();
            }
            else{
                cout << "ERROR!\n";
                return 2;
            }

            if(!ops.empty()){
                tmp = ops.top();
                ops.pop();
            }
            else{
                cout << "ERROR!\n";
                return 3;
            }

            nums.push(eval(n2, n3, tmp));
        }

        tmp = cin.get();
    }

    if(!nums.empty()){
        cout << "Answer: " << nums.top() << endl;
        nums.pop();
    }
    else{
        cout << "ERROR: stack was empty at end of expression.\n";
        return 4;
    }
}