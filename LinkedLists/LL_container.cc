#include "LL_container.h"
using namespace std;

LL_Container::~LL_Container(){
    Node* rmptr;
    while(head != nullptr){
        rmptr = head;
        head = head -> next();
        delete rmptr;
    }
}

LL_Container::LL_Container(const LL_Container& other){
    if(other.head == nullptr){
        head = nullptr;
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

LL_Container& LL_Container::operator = (const LL_Container& other){
    // check for self assignment
    if(this == &other){
        return *this;
    }

    // delete the old list - deconstructor code

    // make a copy - copy constructor code
}

void LL_Container::add_head(int item){
    head = new Node(item, head);
}

void LL_Container::add_end(int item){
    if(head == nullptr){
        head = new Node(item);
    }
    else{
        Node* cursor = head;
        while(cursor -> next() != nullptr){
            cursor = cursor -> next();
        }
        cursor -> set_next(new Node(item));
    }
}

void LL_Container::remove(int target){
    if(head == nullptr){
        return;
    }
    else{
        Node *cursor, *prev;
        cursor = head;
        prev = head;

        if(head -> data() == target){
            head = head -> next();
            delete cursor;
        }
        else{
            while(cursor != nullptr && cursor -> data() != target){
                prev = cursor;
                cursor = cursor -> next();
            }
            if(cursor != nullptr){
                prev -> set_next(cursor -> next());
                delete cursor;
            }
        }
    }
}

void LL_Container::display()const{
    Node* cursor = head;
    while(cursor != nullptr){
        cout << cursor -> data() << endl
        cursor = cursor -> next();
    }

    // as a for loop
    for(Node* cursor = head; cursor != nullptr; cursor = cursor -> next()){
        cout << cursor -> data() << endl;
    }
}