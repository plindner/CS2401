class Node{
    public:
        Node(int d = 0, Node* n = nullptr);

        int data()const {return data_field;}
        Node* next()const {return next_field;}

        void set_data(int d) {data_field = d;}
        void set_next(Node* n) {next_field = n;}

    private:
        int data_field;
        Node* next_field;
};

class LL_Container{
    public:
        LL_Container() {head = tail = nullptr;}

        // The Big 3
        ~LL_Container();
        LL_Container(const LL_Container& other);
        LL_Container& operator = (const LL_Container& other);

        // other useful stuff you might want to do
        void add_head(int item);
        void add_end(int item);
        void remove(int target);

        void display()const;
    private:
        Node* head;
        Node* tail; // keep track of last node in the list
};