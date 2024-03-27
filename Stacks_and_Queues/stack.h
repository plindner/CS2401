// Stacks

template <class T>
class STACK{
    public:
        STACK() {topPtr = nullptr;}

        // The big 3 for singly linked list

        // add to top
        void push(T item);

        // remove top
        void pop();

        // look at data in top
        T top()const;

        // check if stack is empty
        bool empty()const;

    private:
        node<T>* topPtr;
};