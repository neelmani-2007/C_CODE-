#include<stdio.h>
void calculate(int*a, int *b ,int *sum, float*avg) {
    *sum = *a+*b;
    *avg = (float)(*sum)/2;
}
    int main() {
  int num1 =8, num2 = 12, sum;
  float avg;
  calculate(&num1, &num2, &sum,&avg);
  printf("sum = %d\n", sum);
  printf("avg = %.2f\n", avg);
  return 0;
}
