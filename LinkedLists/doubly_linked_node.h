class Node{
    public:
        typedef int value_type;

        Node(value_type d = value_type(), Node* p = nullptr, Node* n = nullptr);

        // accessor function
        value_type data() const {return data_field;}
        Node* next() const {return next_field;}
        Node* prev() const {return prev_field;}

        // mutators
        void set_data(value_type d) {data_field = d;}
        void set_next(Node* n) {next_field = n;}
        void set_prev(Node* p) {prev_field = p;}

    private:
        value_type data_field;
        Node* next_field;
        Node* prev_field;
};

class DoublyLinked{
    public:
        DoublyLinked() {head = tail = nullptr;}

        // The Big 3

        // other stuff
        void add_end(int num);
        void remove(int target);

    private:
        Node* head;
        Node* tail;
}