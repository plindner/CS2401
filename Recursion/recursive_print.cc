void print_backward(node* head){
    STACK<node*> s;
    node* cursor = head;

    while(cursor != nullptr){
        s.push(cursor);
        cursor = cursor -> next();
    }

    while(!s.empty()){
        cout << s.top() -> data() << endl;
        s.pop();
    }
}

// Recursive implementation 
void print_backward(node* head){
    // base case - where to stop recalling the function 
    if(head == nullptr){
        return;
    }
    else{
        print_backward(head -> next()); // variant expression 
        cout << head -> data() << endl;
    }
    return;
}