#include<stdio.h>
void printpattern(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");

    }
}
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d", &n);
    printpattern(n);
    return 0;
}