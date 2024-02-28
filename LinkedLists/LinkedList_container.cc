/**
*   Implementation file for a linked list container with a tail pointer.
*   Code that is commented out only works where there is NOT a tail pointer.
*/

Node::Node(int d, Node* n){
    data_field = d;
    next_field = n;
}


LL_Container::~LL_Container(){
    Node* cursor;

    while(head != nullptr){
        cursor = head;
        head = head -> next;
        delete cursor;
    }
}

LL_Container::LL_Container(const LL_Container& other){
    if(other.head == nullptr){
        head = nullptr;
        return;
    }
    else{
        Node *src;
        // If there is no tail in the container, add a dest Node* and replace tail
        head = new Node(other.head -> data());
        tail = head;

        src = other.head -> next();
        while(src != nullptr){
            tail -> set_next(new Node(src -> data()));
            src = src -> next();
            tail = tail -> next();
        }
    }
}

LL_Container& operator = (const LL_Container& other){
    // check for self-assignment

    // destroy the old list

    // copy the other list

    return *this;
}


void LL_Container::display(ostream& outs) const{
    Node* cursor = head;

    while(cursor != nullptr){
        outs << cursor -> data() << endl;
        cursor = cursor -> next();
    }
}


void LL_Container::add_to_end(int item){
    // Node* cursor = head;

    // if(head == nullptr){
    //     head = new Node(item);
    //     return;
    // }

    // for(; cursor -> next() != nullptr; cursor = cursor -> next());

    // cursor -> set_next(new Node);
    // cursor = cursor -> next();
    // cursor -> set_data(item);

    // tail = cursor;

    if(tail == nullptr){
        head = tail = new Node(item);
        return;
    }
    tail -> set_next(new Node(item));
    tail = tail -> next();

}

void LL_Container::add_to_head(int item){
    head = new Node(item, head);

    // Only need if you have a tail pointer
    if(tail == nullptr) tail = head;
}

void LL_Container::remove(int target){
    // empty list
    if(head == nullptr) return;

    // move cursor to the node being removed
    // move prev to the node before the one being removed
    Node* cursor = head;
    Node* prev = head;
    while(cursor != nullptr && cursor -> data() != target){
        prev = cursor;
        cursor = cursor -> next();
    }

    // case for found the node and list has more than one node or we are not removing the first node
    if(cursor != nullptr && cursor != prev){
        prev -> set_next(cursor -> next());
        if(cursor == tail) tail = prev;
        delete cursor;
    }
    // case for removing head of long list
    // only works for linked list with tail.
    // if you don't have a tail, you don't need this case
    else if(cursor == head && tail != head){
        head = cursor -> next();
        delete cursor;
    }
    // case for removing last node of a single node list
    // also works to remove the head node of a longer list when you don't have a tail if you remove the line that resets tail
    else if(cursor != nullptr){
        head = prev -> next();
        // only need if you have a tail pointer
        tail = nullptr;
        delete prev;
    }
}