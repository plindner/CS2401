#ifndef TMPIT 
#define TMPIT
#include "template_node.h"

template <class T> class TempLL;

template <class T>
class NODE_IT{
    public:
        friend class TempLL<T>;

        NODE_IT(TempNode<T>* c = nullptr) {current = c;}

        // pre-fix
        NODE_IT operator ++ ();
        // post-fix
        NODE_IT operator ++ (int);

        bool operator != (NODE_IT other) const;

        T operator * () const;

    private:
        TempNode<T>* current;
};

#include "template_it.template"

#endif