#include "numbers.h"
#include <iostream>
using namespace std;

void Numbers::see_all()const{
    for(int i = 0; i < used; i++){
        cout << data[i] << endl;
    }
}

double Numbers::sum_all()const{
    int i = 0;
    double sum = 0;
    while(i < used){
        sum += data[i];
        i++;
    }

    return sum;
}

void Numbers::add_item(double item){
    if(used < SIZE){
        data[used] = item;
        used++;
    }
    else{
        cout << "No room available\n";
    }
}

void Numbers::remove(double item){
    int i = 0;
    while(i < used){
        if(data[i] == item){
            data[i] = data[used - 1];
            used--;
            // only want to remove the first instance
            //break;
            // want to remove ALL instances
            i--;
        }
        i++;
    }
}

bool Numbers::search(double item)const{
    int i = 0;
    while(i < used && data[i] != item){
        i++;
        //if(i >= used) return false;
    }

    if(i < used) return true;
    else return false;
}

void Numbers::selection_sort(){
    int i, j, smallsp;
    double tmp;

    for(i = 0; i < used - 1; i++){
        smallsp = i;

        for(j = i + 1; j < used; j++){
            if(data[j].get_name() < data[smallsp].get_name()){
                smallsp = j;
            }
        }

        // swap
        tmp = data[i];
        data[i] = data[smallsp];
        data[smallsp] = tmp;
    }
}

void Numbers::bubble_sort(){
    int i, upper_bound = used - 1;
    double tmp;
    bool done = false;

    while(!done){
        done = true; //assume I am done

        // compare adjacent items
        for(i = 0; i < upper_bound; i++){
            if(data[i] > data[i + 1]){
                // out of order, so swap
                tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;

                //not done
                done = false;
            }
        }
        upper_bound--;
    }
}

void Numbers::insertion_sort(){
    for(int i = 1; i < used; i++){
        int tmp = data[i];

        int j = i;
        while(j > 0 && data[j - 1] > tmp){
            data[j] = data[j - 1];
            j--;
        }
        data[j] = tmp;
    }
}