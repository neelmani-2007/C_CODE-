#include<stdio.h>
struct point {
    int x;
    int y;
};
int main() {
   struct point P1 = {10, 20};
   struct point *ptr = &P1;
   printf("Accessing structure members using ->: \n");
   printf("x = %d\n", ptr->x);
   printf("y = %d\n", ptr->y);
   return 0;
}