class Node{
    public:
        // Need to implement this constructor somewhere
        Node(int d = 0, Node* p = nullptr, Node* n = nullptr);

        int data()const {return data_field;}
        Node* next()const {return next_field;}
        Node* previous()const {return previous_field;}

        void set_data(int d) {data_field = d;}
        void set_next(Node* n) {next_field = n;}
        void set_previous(Node* p) {previous_field = p;}

    private:
        int data_field;
        Node* next_field;
        Node* previous_field;
};

class LL_Container_DL{
    public:
        LL_Container() {head = nullptr;}

        // The Big 3
        // You need these - similar to singly linked, but watch out that you set previous pointers correctly when copying
        ~LL_Container();
        LL_Container(const LL_Container& other);
        LL_Container& operator = (const LL_Container& other);

        // other useful stuff you might want to do
        void add_end(int item);
        void remove(int target);

    private:
        Node* head;
};