/*
    This class demonstrates 2 things:
    1. A container class using a dynamic array.
    2. A sequence class

    These things do NOT have to be used together, I'm just joining them
    for the sake of time.
*/

class DynamicArray{
    public:
        DynamicArray();

        // The Big 3
        // deconstructor or destructor
        ~DynamicArray();

        // copy constructor
        DynamicArray(const DynamicArray& other);

        // overloaded assignment operator
        void operator = (const DynamicArray& other);

        void add_item(int item);

        // Sequence class stuff
        // iterator functions
        void start() {current_index = 0;}
        void advance() {current_index++;}
        int current() {return data[current_index];}
        bool is_item() {return current_index < used;}

        // other sequence functions
        // take the item at current_index out of the container
        void remove();

        // add item before current_index OR at index 0 if the iterator is invalid
        void insert(int item);

        // add item after current_index OR at end if the iterator is invalid
        void attach(int item);


    private:
        int* data;
        size_t size;
        size_t used;
        // internal iterator
        size_t current_index;

        void resize();
}