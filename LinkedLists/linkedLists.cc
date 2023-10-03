// Linked list
struct Node{
    int data;
    Node* next;
};

// This stuff could be done in a main or other function given the struct above
Node* head;
head = nullptr; // head = NULL;
head = new Node;
(*head).data = 1;
(*head).next = nullptr;
(*head).next = new Node;
(*(*head).next).data = 2;
// next 2 lines are equivalent
(*(*head).next).next = nullptr;
head -> next -> next = nullptr;

Node* ptr;
ptr = head;
// next 2 lines are equivalent
ptr = (*ptr).next;
ptr = ptr -> next;


// output all items in linked list
Node* cursor;
cursor = head;
while(cursor != nullptr){
    cout << cursor -> data << endl;
    cursor = cursor -> next;
}

/***********************************************************************/
// add a new item to the linked list
void add_to_end(Node*& head, int item){
    // Why this special case?
    if(head == nullptr){
        head = new Node;
        head -> data = item;
        head -> next = nullptr;
    }
    else{
        Node* cursor = head;

        // Why cursor -> next?
        while(cursor -> next != nullptr){
            cursor = cursor -> next;
        }

        cursor -> next = new Node;

        cursor -> next -> data = item;
        cursor -> next -> next = nullptr;
        // next 3 are equivalent to previous 2
        // cursor = cursor -> next;
        // cursor -> data = item;
        // cursor -> next = nullptr;
    }
}

void remove(Node*& head, int target){
    // Why do you need this case?
    if(head == nullptr){
        return;
    }
    // Why do you need this case?
    if(head -> data == target){
        //delete head;
        Node* rmptr = head;
        head = head -> next;
        delete rmptr;
    }
    // Default case
    else{
        // Why 2 pointers?
        Node* cursor = head;
        Node* previous = head;

        // Why this compound condition?
        while(cursor != nullptr && cursor -> data != target){
            previous = cursor;
            cursor = cursor -> next;
        }

        if(cursor != nullptr){
            previous -> next = cursor -> next;
            delete cursor;
        }
        else{
            cout << "Target not found\n";
        }
    }
}