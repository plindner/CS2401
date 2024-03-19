template <class T>
class TempNode{
    public:
        TempNode(T d = T(), TempNode* p = nullptr, TempNode* n = nullptr);

        // accessor function
        T data() const {return data_field;}
        TempNode* next() const {return next_field;}
        TempNode* prev() const {return prev_field;}

        // mutators
        void set_data(T d) {data_field = d;}
        void set_next(TempNode* n) {next_field = n;}
        void set_prev(TempNode* p) {prev_field = p;}

    private:
        T data_field;
        TempNode* next_field;
        TempNode* prev_field;
};

template <class T>
TempNode<T>::TempNode(T d, TempNode<T>* p, TempNode<T>* n){
    data_field = d;
    next_field = n;
    prev_field = p;
}
