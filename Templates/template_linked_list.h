template<class T>
class TLList{
    public:
        typedef node_iterator<T> iterator;

        TLList();

        iterator begin()const;

        // begin, end, r_begin, r_end - all return iterators
        // front_insert, rear_insert, front_remove, rear_remove
        // insert_before, insert_after, remove

    private:
        NODE<T>* head;
        NODE<T>* tail;
};
