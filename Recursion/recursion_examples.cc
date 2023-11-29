void selection_sort_recursive(int a[], int size){
    // base case
    if(size <= 1){
        return;
    }
    else{
        // assume find_min returns index of smallest element
        int smallsp = find_min(a, size);

        int tmp = a[0];
        a[0] = a[smallsp];
        a[smallsp] = tmp;

        selection_sort_recursive(a + 1, size - 1);
    }
}


void print_vertical(int n){
    if(n < 10){
        cout << n << endl;
    }
    else{
        print_vertical(n / 10);
        cout << n % 10 << endl;
    }
}


int sum_all(int n){
    if(n == 0){
        return 0;
    }
    else{
        return sum_all(n - 1) + n;
    }
}


node* search(node* head, int target){
    if(head == nullptr){
        return nullptr;
    }
    else if(head -> data() == target){
        return head;
    }
    else{
        return search(head -> next(), target);
    }
}