int main(){
    STACK<int> nums;
    STACK<char> ops;
    char tmp;
    int n1, n2, n3;

    tmp = cin.get();
    while(tmp != '\n'){
        // if tmp is a number
        if(isdigit(tmp)){
            cin.putback(tmp);
            cin >> n1;
            nums.push(n1);
        }
        // if tmp is +, -, *, /
        else if(isop(tmp)){
            ops.push(tmp);
        }
        else if(tmp == ')'){
            if(!nums.empty()){
                n1 = nums.top();
                nums.pop();
            }
            if(!nums.empty()){
                n2 = nums.top();
                nums.pop();
            }

            n3 = evaluate(n2, n1, ops.top());
            ops.pop();
            nums.push(n3);
        }

        tmp = cin.get();
    }
    if(!nums.empty()){
        cout << "Answer: " << nums.top() << endl;
        nums.pop();
    }
}

((6 + (5 * 4)) * 2)

6 5 4 * + 2 * // RPN

