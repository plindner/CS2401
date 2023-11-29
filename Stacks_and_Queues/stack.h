// Stacks - LIFO - last in first out

template<class T>
class STACK{
    public:
        STACK() {topPtr = nullptr;}

        // The Big 3 for a singly linked list

        // add a new item to the stack
        void push(const T& item);

        // remove the top of the stack
        void pop();

        // look at the data in the top of the stack
        T top()const {return topPtr -> data();}

        // check if there is anything in the stack
        bool empty()const {return topPtr == nullptr;}

    private:
        NODE<T>* topPtr;
};

template <class T>
void STACK<T>::push(const T& item){
    topPtr = new NODE<T>(item, topPtr);
}

template<class T>
void STACK<T>::pop(){
    if(topPtr != nullptr){
        NODE<T>* rmptr = topPtr;

        topPtr = topPtr -> next();
        delete rmptr;
    }
}