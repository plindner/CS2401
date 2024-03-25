#ifndef TMPLL 
#define TMPLL

#include "template_it.h"
#include "template_node.h"

template <class T>
class TempLL{
    public:
        typedef NODE_IT<T> iterator;
        
        TempLL();
        ~TempLL();
        TempLL(const TempLL& other);
        TempLL& operator = (const TempLL& other);

        iterator begin() const {return iterator(head);}
        iterator end() const {return iterator(nullptr);}

        insert()
        remove()

    private:
        TempNode<T>* head;
        TempNode<T>* tail;
};

#include "template_LL.template"

#endif