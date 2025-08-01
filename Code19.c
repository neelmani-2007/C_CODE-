#include<stdio.h>
int main() {
    int number[8] = {8,8,8,8,8,8,8,8};
    int index = 7; 
    while(index>=0) {
        printf("%d\n", number[index]);
        
        index--;

    }
    return 0;
}