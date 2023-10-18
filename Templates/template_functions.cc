#include <string>
using namespace std;

// Template function
// T - type of data I'm swapping
template<class T>
void my_swap(T &a, T &b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


// T - type of data I'm sorting
// S - type of the size of the array (int, size_t, unsigned, long)
template<class T, class S>
void selection_sort(T a[], S used){
    S smallsp;

    for(S i = 0; i < used - 1; i++){
        smallsp = i;
        for(S j = i + 1; j < used; j++){
            if(a[j] < a[smallsp]){
                smallsp = j;
            }
        }
        my_swap(a[i], a[smallsp]);
    }
}


int main(){
    int m = 4, n = 5;
    double x = 13.6, y = 33.4;
    string a = "hello", b = "world";
    FoodItem data[100];

    my_swap(m, n); // instantiation for int
    my_swap(x, y); // instantiation for double
    my_swap(a, b); // instantiation for string
    my_swap(m, b); // error - unable to instantiate

    selection_sort(data, 100);
}