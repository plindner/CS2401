
void DoublyLinked::add_end(int num){
    if(tail == nullptr){
        head = tail = new Node(num);
        return;
    }
    tail -> set_next(new Node(num, tail));
    tail = tail -> next();
}

void DoublyLinked::remove(int target){
    // empty list
    if(head == nullptr) return;

    if(head -> data() == target){
        Node* tmp = head;
        head = head -> next();
        delete tmp;
        if(head != nullptr)
            head -> set_prev(nullptr);
        else
            tail = nullptr;

        /*
        // no tmp
        head = head -> next();
        delete head -> prev();
        head -> set_prev(nullptr);
        */
        return;
    }
    // if(tail -> data() == target){
    //     tail = tail -> prev();
    //     delete tail -> next();
    //     tail -> set_next(nullptr);
    // }

    // normal case
    Node* cursor = head;
    while(cursor != nullptr && cursor -> data() != target){
        cursor = cursor -> next();
    }
    // either cursor = nullptr or cursor = target
    if(cursor != nullptr){
        cursor -> prev() -> set_next(cursor -> next());
        if(cursor == tail){
            tail = tail -> prev();
        }
        else{
            cursor -> next() -> set_prev(cursor -> prev());
        }
        delete cursor;
    }
}