#include "DArray.h"

using namespace std;

DArray::DArray(){
    size = 5;
    used = 0;
    data = new int[size];
}

void DArray::resize(){
    int *tmp = new int[size + 5];

    for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }

    delete [] data;
    data = tmp;
    size += 5;
}

void DArray::add_item(int item){
    if(used == size){
        // make the array bigger
        resize();
    }
    data[used] = item;
    used++;
}