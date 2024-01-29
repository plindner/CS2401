#include "numbers.h"

void Numbers::show_all() const{
    size_t i;
    for(i = 0; i < used; i++){
        cout << data[i] << endl;
    }
    cout << i;
}

void Numbers::add_item(int n){
    if(used < SIZE){
        data[used] = n;
        used++;
    }
    else{
        cout << "No more room.\n";
    }
}

int Numbers::sum_all() const{
    size_t sum = 0;
    for(size_t i = 0; i < used; i++){
        sum += data[i];
    }
}

