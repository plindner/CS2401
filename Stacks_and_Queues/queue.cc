// Queue - FIFO - first in first out 

template <class T>
class QUEUE{
    public:
        QUEUE() {front = back = nullptr;}

        // The Big 3 for a signly linked list

        void push(const T& item); // add to "tail"

        void pop(); // remove "head"

        T front()const {return front -> data();}

        bool empty()const {return front == nullptr;}

    private:
        NODE<T>* front;
        NODE<T>* back;
};



template<class T>
class QUEUE_C{
    public:
        static const int SIZE = 100;

    private:
        int next_item(int n) {return (n + 1) % SIZE;}

        T data[SIZE];
        int front, back;
};