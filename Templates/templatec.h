//templatec.h
template <class T>
class TemplateC{
    public:
        static const size_t SIZE = 200;

        TemplateC();

        void add (const T& item);
        void display() const;

    private:
        T data[SIZE];
        size_t used;

        // Dynamic Array
        //T* data;
};

#include "templatec.template"