class Node{
    public:
        typedef int value_type;

        Node(value_type d = 0, Node* n = nullptr);

        // accessor function
        value_type data() const {return data_field;}
        Node* next() const {return next_field;}

        // mutators
        void set_data(value_type d) {data_field = d;}
        void set_next(Node* n) {next_field = n;}

    private:
        value_type data_field;
        Node* next_field;
};


class LL_Container{
    public:
        LL_Container() {head = tail = nullptr;}

        // The Big 3
        ~LL_Container();
        LL_Container(const LL_Container& other);
        LL_Container& operator = (const LL_Container& other);

        // Other useful things
        void display(ostream& outs) const;

        void add_to_end(int item);
        void remove(int target);
        void add_to_head(int item);

    private:
        Node* head;
        Node* tail;
};