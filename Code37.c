#include<stdio.h>
struct vector{
    float x;
    float y;

};
int main() {
    struct vector v1 = {3.4, 5.6};
    struct vector v2 = {2.1,4.3};
    printf("Vector1:(%2f,%2f)\n",v1.x,v1.y);
    printf("vector 2: (%2f,%2f)\n",v2.x,v2.y);
    return 0;
}