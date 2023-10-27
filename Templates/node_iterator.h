//forward declaration
template<class T> class TLList;

template<class T>
class node_iterator{
    public:
        friend class TLList<T>;

        node_iterator(NODE<T>* c = nullptr){current = c;}

        bool operator ==(node_iterator other)const;
        bool operator !=(node_iterator other)const;

        T operator *()const;

        node_iterator operator ++(); // prefix
        node_iterator operator ++(int); // postfix

        // -- : pre and post fix

    private:
        NODE<T>* current;
};