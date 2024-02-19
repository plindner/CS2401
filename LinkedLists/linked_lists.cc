// Linked Lists

struct node{
    int data;
    node* next;
}

void add_to_end(node*& head, int item);
void remove(node*& head, int target);

int main(){
    node* head;

    // mark the list as empty
    head = nullptr; // NULL

    // add a node
    head = new node;
    // mark this as end of the list
    (*head).next = nullptr;
    (*head).data = 5;

    // add more nodes
    (*head).next = new node;
    (*(*head).next).next = nullptr;
    // same as line above
    // head -> next -> next = nullptr;

    // Start the cursor at the first node
    node* cursor = head;
    // Move cursor until it points to the last node (NOT NULL)
    while(cursor -> next != nullptr){
        cursor = cursor -> next;
    }

    // Add a new node to the end of the list
    cursor -> next = new node;
    cursor -> next -> next = nullptr;
    // next 2 do the same thing
    // cursor = cursor -> next;
    // cursor -> next = nullptr;

    // output everything in the list
    cursor = head;
    while(cursor != nullptr){
        cout << cursor -> data << endl;
        cursor = cursor -> next;
    }
    // This line would cause a seg fault because cursor is pointing to NULL after the loop
    cursor -> next = new node;

    add_to_end(head, 9);
    remove(head, 5);
}

void add_to_end(node*& head, int item){
    if(head == nullptr){
        // list is empty
        head = new node;
        head -> next = nullptr;
        head -> data = item;

        return;
    }

    node* cursor = head;

    // move cursor to last node
    while(cursor -> next != nullptr){
        cursor = cursor -> next;
    }

    // add new node
    cursor -> next = new node;
    cursor -> next -> next = nullptr;
    cursor -> next -> data = item;

}

/*
    What will this function do with an empty list?
*/
void remove(node*& head, int target){
    node* cursor = head;
    node* prev = head;

    if(head -> data == target){
        head = cursor -> next;
        
        delete cursor;
        return;
    }

    // move cursor to the target node
    while(cursor != nullptr && cursor -> data != target){
        prev = cursor;
        cursor = cursor -> next;
    }

    if(cursor != nullptr){
        prev -> next = cursor -> next;
        delete cursor;
    }
    else{
        cout << "Target not found\n";
    }
}