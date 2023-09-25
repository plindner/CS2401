#include "DArray.h"

using namespace std;

DArray::DArray(){
    size = 5;
    used = 0;
    data = new int[size];
}

DArray::~DArray(){
    delete []data;
}

DArray::DArray(const DArray& other){
    size = other.size;
    used = other.used;

    data = new int[size];
    // copy stuff using a loop or the copy function from algorithm
}

void DArray::operator = (const DArray& other){
    // check for self assignment
    if(this == &other){
        return;
    }

    // deallocate the existing array
    // put the deconstructor code here

    // make a copy
    // put the copy constructor code here
}

void DArray::resize(){
    // Create a tmp pointer and allocate a bigger array
    int *tmp = new int[size + 5];

    // Copy all items to the new array
    for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }
    
    // Instead of the for loop above, you can use the copy function from the algorithm library
    // #include <algorithm> // this should go at the beginning of the file
    // copy(begin, end, destination)
    // copy(data, data + used, tmp);

    // Deallocate the old array
    delete [] data;

    // Move the data pointer to the new array
    data = tmp;

    // Remember that you increased the size by 5
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