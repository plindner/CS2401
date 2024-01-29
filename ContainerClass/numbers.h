/* Container classes */
#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers{
    public:
        static const size_t SIZE = 100;
        Numbers(size_t u = 0) {used = 0;}

        void add_item(int n);
        int sum_all() const;
        void show_all() const;

        

    private:
        int data[SIZE];
        size_t used;
};

#endif // end of NUMBERS_H