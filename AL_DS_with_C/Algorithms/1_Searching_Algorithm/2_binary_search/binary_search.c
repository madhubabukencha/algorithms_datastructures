/*
Unlike linear search, for performing binary search we need
a sorted array. In binary search, we first divide an array
in the middle and we compare whether key is greater than
the middle element. If it is then we will ignore the left
part of the middle element, if it's not then we will consider
the left part. We will repeat this until middle element equal
to key. If element not found then we will return 0.
*/

#include<stdio.h>
#define SIZE 7


int BinarySearch(int arr[], int start, int end, int key) {
    int mid;
    while(start <= end) {
        mid = (start+end)/2;
        if(arr[mid] == key) {
            return 1;
        }

        if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return 0;
}

int main() {
    int arr[SIZE] = {3, 5, 10, 23, 45, 102, 114};
    int start = 0;
    int end = 6;
    int key = 451;
    if(BinarySearch(arr, start, end, key) == 1) {
        printf("Element Found");
    }
    else {
        printf("Element not Found");
    }
}
