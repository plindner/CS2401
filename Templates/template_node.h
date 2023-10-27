template<class T>
class NODE{
    public:
        NODE(T d = T(), NODE* n = nullptr);

        T data()const {return data_field;}
        NODE* next()const {return next_ptr;}

        void set_data(T item){data_field = item;}
        void set_next(NODE* n){next_ptr = n;}

    private:
        T data_field;
        NODE* next_ptr;
};