#include<stdio.h>
int main() {
    float income, tax;
    printf("Enter your Income:");
    scanf("%f", &income);
    if(income<=250000) {
        tax = 0;
    }
    else if(income<=500000) {
        tax = (income - 250000) * 0.05;
    }
    else if(income<=1000000)  {
        tax = (income - 500000) * 0.20+(500000 - 250000) * 0.05;

    }
    else {
        tax = (income -  1000000) *0.30 + (1000000 - 500000) * 0.05 + (500000 - 250000) * 0.05;
        printf("The income tax you need to pay is: %2f\n", tax);
    }
    return 0;
}