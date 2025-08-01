#include<stdio.h>
int main() {
    int var = 10;
    int *ptr =  &var;
    printf("Address of var :%p\n", ptr);
    printf("Value of var using pointer: %d\n", *ptr);
    return 0;
}