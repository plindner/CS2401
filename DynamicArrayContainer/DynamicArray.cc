#include "DynamicArray.h"
#include <algorithm>

DynamicArray::DynamicArray(){
    size = 5;
    used = 0;
    data = new int[size];
}

DynamicArray::~DynamicArray(){
    delete []data;
}

DynamicArray::DynamicArray(const DynamicArray& other){
    size = other.size;
    used = other.used;
    current_index = other.current_index;

    data = new int[size];
    //copy(other.data, other.data + other.used, data);
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void operator = (const DynamicArray& other){
    // check for self assignment
    if(this == &other){
        return;
    }

    // destroy old array
    delete []data;

    // make a copy
    size = other.size;
    used = other.used;
    current_index = other.current_index;

    data = new int[size];
    //copy(other.data, other.data + other.used, data);
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void DynamicArray::resize(){
    int* tmp;
    tmp = new int[size + 5];

    for(int i = 0; i < size; i++){
        tmp[i] = data[i];
    }
    // copy - algorithm library
    // copy(begin, end, destination)
    // copy(data, data + size, tmp);

    size += 5;
    delete []data;
    data = tmp;
}

void DynamicArray::add_item(int item){
    if(used == size){
        resize();
    }

    data[used] = item;
    used++;
}