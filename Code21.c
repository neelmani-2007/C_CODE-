#include<stdio.h>
void printAddress(int *ptr) {
    printf("Address of variable inside function: %p\n", (void *)ptr);
}
int main() {
int var =20;
printf("Address of var in main : %p\n", (void *)&var);
printAddress(&var);

}