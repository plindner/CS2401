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

        void add_item(int item);

    private:
        int* data;
        size_t size;
        size_t used;

        void resize();
}