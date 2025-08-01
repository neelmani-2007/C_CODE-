#include<stdio.h>
int main() {
    int arr[10];
    for(int i= 0; i<10; i++) {
        arr[i] = 5*(i+1);
    }
        printf("Multioplication table of 5:\n");
        for(int i=0; i<10; i++){
            printf("5*%d=%d\n", i+1, arr[1]);
        }
        return 0;
    }

