#include<stdio.h>
int main() {
    int arr[10];
    for(int i=0; i<10; i++) {
        arr[i]  = i+1;
    }
    int *ptr = arr;
    printf("The third element  of the array using pointer arithmetic is: %d\n", *(ptr + 2));
    return 0;
    }

