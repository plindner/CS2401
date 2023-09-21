// macro guards
#ifndef DARRAY_H
#define DARRAY_H

class DArray{
    public:
        DArray();

        void add_item(int item);

    private:
        int *data;
        int size;
        int used;
        void resize();
};

#endif