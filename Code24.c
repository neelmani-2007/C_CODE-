#include<stdio.h>
int sumofnaturalnumber(int n) {
    if(n==1) {
        return 1;
    }
    return n + sumofnaturalnumber(n-1);
}
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sumofnaturalnumber(n));
    return 0;
    
}