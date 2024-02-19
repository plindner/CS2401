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
        Node *src, *dest;
        head = new Node(other.head -> data());

        src = other.head -> next();
        dest = head;
        while(src != nullptr){
            dest -> set_next(new Node(src -> data()));
            src = src -> next();
            dest = dest -> next();
        }
    }
}

LL_Container& operator = (const LL_Container& other){
    // check for self-assignment

    // destroy the old list

    // copy the other list

    return *this;
}