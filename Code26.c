#include<stdio.h>
int main() {
    int i =42;
    int *ptr_to_ptr = &i;
    printf("Value of i  using pointer to pointer: %d\n", *ptr_to_ptr );
    return 0;

}