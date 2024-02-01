#include "numbers.h"

void Numbers::show_all() const{
    for(size_t i = 0; i < used; i++){
        cout << data[i] << endl;
    }
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

void Numbers::remove(int target){
    for(size_t i = 0; i < used; i++){
        if(data[i] == target){
            data[i] = data[used - 1];
            used--;
        }
    }
}

bool Numbers::find(int target){
    for(size_t i = 0; i < used; i++){
        if(data[i] == target){
            return true;
        }
    }

    return false;
}

void Numbers::selection_sort(){
    size_t i, j, smallsp;

    // tmp should be of whatever data type the array is storing
    int tmp;

    // this loop (i) keeps track of the position where I am putting the smallest piece of data
    for(i = 0; i < used - 1; i++){
        smallsp = i;

        // this loop (j) looks for the smallest piece of data in the rest of the array
        for(j = i + 1, j < used; j++){
            // if the data where I am looking is "smaller" than the data in the current smallsp, make smallsp equal to j
            if (data[j] < data[smallsp]){
                smallsp = j;
            }
        }

        // swap the smallest data into the correct location (given by i)
        // want to do the swapping in the outer loop not the inner loop
        // if I do it in the inner loop, it will execute MANY times for each iteration of the outer loop (which is not necessary)
        tmp = data[i];
        data[i] = data[smallsp];
        data[smallsp] = tmp;
    }
}

void Numbers::bubble_sort(){
    size_t i, upper_bound = used - 1;

    // tmp should be of whatever data type the array is storing
    int tmp;
    bool done = false;

    while(!done){
        // start by assuming I am done
        done = true;

        // compare i to the item next to it
        for(i = 0; i < upper_bound; i++){
            // if the items are out of order
            if(data[i] > data[i + 1]){
                // swap these items
                tmp = data[i + 1];
                data[i + 1] = data[i];
                data[i] = tmp;

                // need to go again
                done = false;
            }
        }
        upper_bound--;
    }
}

void Numbers::insertion_sort(){
    int next;
    for (size_t i = 1; i < used; i++)
    {
        // Save the value that you are trying to insert
        next = a[i];

        // Move all larger elements up
        int j = i;
        while (j > 0 && a[j - 1] > next)
        {
            a[j] = a[j - 1];
            j--;
        }

        // Insert the element in the correct position
        a[j] = next;
    }
}