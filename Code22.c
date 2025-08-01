#include<stdio.h>
void changevalue(int*ptr) {
  *ptr = (*ptr) * 10;
}
  int main() {
    int var = 5;
    printf("original value : %d\n ", var);
    changevalue(&var);
    printf("New value : %d\n", var);
    return 0;
  }