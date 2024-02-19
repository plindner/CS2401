/**
 * @brief This file defines a Node class and a Linked List container class.
 *        The Node will be used to create the elements of the list dynamically.
 * 
 */

class Node{
    public:
        /**
         * @brief Construct a new Node object with data set to 0 and next set to nullptr by default
         * 
         * @param d - optional argument to set the data upon creation
         * @param n - optional argument to set the next pointer upon creation
         */
        Node(int d = 0, Node* n = nullptr);

        // accessor functions
        /**
         * @brief return the data value stored in this node
         * 
         * @return int - the data
         */
        int data() const {return data_field;}

        /**
         * @brief return the value of the next pointer in this node
         * 
         * @return Node* - the pointer to the next node
         */
        Node* next() const {return next_field;}

        // mutators
        /**
         * @brief Set the data member
         * 
         * @param d - the value to store in the node
         */
        void set_data(int d) {data_field = d;}

        /**
         * @brief Set the next member
         * 
         * @param n - the location of the next node in the list
         */
        void set_next(Node* n) {next_field = n;}

    private:
        int data_field;
        Node* next_field;
};


class LL_Container{
    public:
        /**
         * @brief Construct a new LL_Container object with an empty list
         * 
         */
        LL_Container() {head = nullptr;}

        // The Big 3
        /**
         * @brief Destroy the LL_Container object deleting all nodes
         * 
         */
        ~LL_Container();

        /**
         * @brief Construct a new LL_Container object that is a copy of another
         * 
         * @param other - the object you want this one to be a copy of
         */
        LL_Container(const LL_Container& other);

        /**
         * @brief Overloaded assignment operator for LL_Containers
         * 
         * @param other - the object you want this one to be a copy of
         * @return LL_Container& - a copy of this object so you can daisy-chain the operator
         */
        LL_Container& operator = (const LL_Container& other);

    private:
        Node* head;
};