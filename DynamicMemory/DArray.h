
// macro guards
#ifndef DARRAY_H
#define DARRAY_H

class DArray{
    public:
        // The Big 3

        // Destructor or Deconstructor
        /**
         * @brief Destroy the DArray object (deallocate any dynamically allocated memory)
         * 
         */
        ~DArray();

        // Copy constructor
        /**
         * @brief Construct a new DArray object that is a copy of an existing one
         * 
         * @param other - the object you want to make a copy of
         */
        DArray(const DArray& other);

        // overloaded assignment operator
        /**
         * @brief Make this object a copy of another one
         * 
         * @param other - the object you want to make a copy of
         */
        void operator = (const DArray& other);

        /**
         * @brief Construct a new DArray object
         * 
         */
        DArray();

        /**
         * @brief Add a new item into the array
         * 
         * @param item - the item you want to add
         */
        void add_item(int item);

    private:
        int *data;
        int size;
        int used;
        void resize();
};

#endif