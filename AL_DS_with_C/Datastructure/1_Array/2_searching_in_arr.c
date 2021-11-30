/*
This program helps in looking for an element in an array
if element found then it will return index of the element
else it will return -1

TIME COMPLEXITY
Best Case  : O(1)
Worst Case : O(N+1)
**/
#include<stdio.h>

int search(int arr[], int size, int key) {
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main() {
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int i, arr[size], key;
    for(i=0; i<size; i++) {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the key:");
    scanf("%d", &key);
    printf("%d", search(arr, size, key));
}
