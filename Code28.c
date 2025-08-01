#include<stdio.h>
void changevalue(int var) {
    var = var*10;
}
    int main() {
        int var = 5;
        printf("original value : %d\n", var);
        changevalue(var);
        printf("value after calling functiomn: %d\n", var);
        return 0;

    }

