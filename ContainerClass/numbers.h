// Container classes - store a collection of objects as the main private data of a class
// This example shows a container that uses an automatically allocated array of a static size

// int myarray[5];
// myarray[3] = 23;

// for(int i = 0; i < 5; i++){
//     myarray[i] = 0;
// }

// Bankacct accounts[5];
// cout << accounts[1].get_balance() << endl;


class Numbers{
    public:
        static const size_t SIZE = 500;

        /**
         * @brief Construct a new Numbers object
         *        Set the used counter to 0 to indicate that there is no data stored yet
         * 
         */
        Numbers() {used = 0;}

        /**
         * @brief store a new double in the container's data array
         * 
         * @param item - the double to be added
         */
        void add_item(double item);

        /**
         * @brief return the sum of all numbers the user has stored
         * 
         * @return double - the sum of all used elements of the array
         */
        double sum_all()const;

        /**
         * @brief output all the used elements of the array
         * 
         */
        void see_all()const;

        /**
         * @brief remove an item from the array
         *        since order does not matter, this is the "easy" method
         * 
         * @param item - the number you want to remove
         */
        void remove(double item);

        /**
         * @brief search for an item in the array using a linear search
         *        (n)
         * 
         * @param item - the number you are interested in finding
         * @return true - the number is in the array
         * @return false - the number is NOT in the array
         */
        bool search(double item)const;

        // sorts
        /**
         * @brief sort the array using a selection sort
         *        O(n^2)
         * 
         */
        void selection_sort();


    private:
        double data[SIZE];
        size_t used;
};