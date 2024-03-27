// Queues

template<class T>
class QUEUE{
    public:
        QUEUE() {front = back = nullptr;}

        // The big 3 for a singly linked list

        void push(T item); // add to end

        T front()const;

        void pop(); // remove head

        bool empty() const;

    private:
        node<T>* front;
        node<T>* back;
};