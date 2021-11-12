/*
Linear Search or Sequential Search means searching
for an element sequentially in an array of elements

TIME COMPLEXITY
Best Case   : O(1)
Worst Case  : O(n)
*/
#include<stdio.h>
#define SIZE 5


int LinearSearch(int arr[], int key, int size) {
    int i;
    for(i=0; i < size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[SIZE] = {10, 23, 45, 31, 5};
    int key = 31;
    if(LinearSearch(arr, key, SIZE) == 1) {
        printf("Element Found");
    } else {
        printf("Element not Found");
    }
    return 0;
}
