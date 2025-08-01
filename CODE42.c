#include<stdio.h>
int main() {
    FILE *file;
    int number, i;
    printf("Enter a number:");
    scanf("%d", &number);

    file = fopen("multiplication_table.txt", "w");
    if(file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    for(i = 1; i <= 10; i++) {
        fprintf(file, "%d*%d=%d\n", number, i, number * i);
    }
    fclose(file);
    printf("Multiplication table generated successfully!\n");
    return 0;
}