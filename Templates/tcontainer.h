template<class T>
class Tcontainer{
    public:
        static const int SIZE = 100;

        Tcontainer();

        void add(T item);
        void display(ostream& outs);

        // begin, end, r_begin, r_end - all return iterators
        // front_insert, rear_insert, front_remove, rear_remove
        // insert_before, insert_after, remove

    private:
        T data[SIZE];
        int used;
};

#include "tcontainer.template"