#include<stdio.h>

void reversearray(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[10];
    int size = 10;

    // Array को 1 से 10 तक भरना
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Array को उल्टा करना
    reversearray(arr, size);

    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}