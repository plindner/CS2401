#include "template_node.h"
#include "template_it.h"

template <class T>
class TempLL{
    public:
        TempLL();
        ~TempLL();
        TempLL(const TempLL& other);
        TempLL& operator = (const TempLL& other);

        NODE_IT<T> begin() const {return NODE_IT(head);}
        NODE_IT<T> end() const {return NODE_IT(nullptr);}

    private:
        TempNode<T>* head;
        TempNode<T>* tail;
};
