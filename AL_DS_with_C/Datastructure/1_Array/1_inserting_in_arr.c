/*
Inserting element at the specified location
*/

#include<stdio.h>
#define SIZE 5

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int pos = 0;
    int element = 10;
    for(int i=SIZE; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = 10;
    for(int j=0; j<6; j++) {
     printf("%d ", arr[j]);
    }
    return 0;
}
