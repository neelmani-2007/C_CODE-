#include<stdio.h>
int main() {
    int num, arr[10];
    printf("Enter the number for which multiplication table:");
    scanf("%d", &num);
    for(int i=0; i<10; i++) {
    arr[i] = num*(i+1);

    }
    printf("multiplication tble of %d;\n" ,num);
    for(int i=0; i<10; i++){
        printf("%d*%d=%d\n",num, i+1,arr[i]);

    }
    return 0;

}