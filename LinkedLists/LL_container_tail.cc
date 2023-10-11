#include "LL_container.h"
using namespace std;

LL_Container::~LL_Container(){
    Node* rmptr;
    while(head != nullptr){
        rmptr = head;
        head = head -> next();
        delete rmptr;
    }
    head = nullptr;
    tail = nullptr;
}

LL_Container::LL_Container(const LL_Container& other){
    if(other.head == nullptr){
        head = tail = nullptr;
    }
    else{
        Node *src;
        head = new Node(other.head -> data());
        src = other.head -> next();
        tail = head;

        while(src != nullptr){
            tail -> set_next(new Node(src -> data()));
            src = src -> next();
            tail = tail -> next();
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
    if(head == nullptr){
        head = tail = new Node(item, head);
    }
    else{
        head = new Node(item, head);
    }
}

void LL_Container::add_end(int item){
    if(head == nullptr){
        head = tail = new Node(item);
    }
    else{
        tail -> set_next(new Node(item));
        tail = tail -> next();
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
            if(head == nullptr){
                tail = nullptr;
            }
        }
        else{
            while(cursor != nullptr && cursor -> data() != target){
                prev = cursor;
                cursor = cursor -> next();
            }
            if(cursor != nullptr){
                prev -> set_next(cursor -> next());
                if(cursor == tail){
                    tail = prev;
                }
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