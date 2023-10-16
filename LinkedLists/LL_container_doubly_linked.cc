#include "LL_container_double_linked.h"

using namespace std;

void LL_Container_DL::add_end(int item){
    // with no tail
    if(head == nullptr){
        head = new Node(item);
        return;
    }

    Node* cursor = head;
    while(cursor -> next() != nullptr){
        cursor = cursor -> next();
    }

    cursor -> set_next(new Node(item, cursor));
}

/* This won't compile unless you add the tail pointer to the container first!!! */
/*
void LL_Container_DL::add_end(int item){
    // with tail - add tail to container first
    if(head == nullptr){
        head = tail = new Node(item);
        return;
    }

    tail -> set_next(new Node(item, tail));
    tail = tail -> next();
}
*/

void LL_Container_DL::remove(int target){
    // with no tail
    if(head == nullptr){
        return;
    }
    else if(head -> data() == target){
        Node* cursor = head;
        head = head -> next();
        delete cursor;
        if(head != nullptr){
            // There are still nodes in the list
            head -> set_previous(nullptr);
        }
    }
    else{
        Node* cursor = head;
        while(cursor != nullptr && cursor -> data() != target){
            cursor = cursor -> next();
        }

        if(cursor != nullptr){
            // found what I was looking for
            cursor -> previous() -> set_next(cursor -> next());
            if(cursor -> next() != nullptr){
                // There is a node after the one I'm removing
                cursor -> next() -> set_previous(cursor -> previous())
            }

            delete cursor;
        }
    }
}

/* This won't compile unless you add the tail pointer to the container first!!! */
/*
void LL_Container_DL::remove(int target){
    // with tail
    if(head == nullptr){
        return;
    }
    else if(head -> data() == target){
        Node* cursor = head;
        head = head -> next();
        delete cursor;
        if(head != nullptr){
            // There are still nodes in the list
            head -> set_previous(nullptr);
        }
        else{
            // I removed the only node in the list so need to mark it as empty
            tail = nullptr;
        }
    }
    else{
        Node* cursor = head;
        while(cursor != nullptr && cursor -> data() != target){
            cursor = cursor -> next();
        }

        if(cursor != nullptr){
            // found what I was looking for
            cursor -> previous() -> set_next(cursor -> next());
            if(cursor -> next() != nullptr){
                // There is a node after the one I'm removing
                cursor -> next() -> set_previous(cursor -> previous())
            }
            else{
                // There is not a node after the one I'm removing (I'm removing the tail)
                tail = cursor -> previous();
            }

            delete cursor;
        }
    }
}
*/