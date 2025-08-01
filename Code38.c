#include<stdio.h>
struct vector{
    float x;
    float y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main() {
    struct vector v1 = {1.0, 2.0};
    struct vector v2 = {3.0, 4.0};
    struct vector sum = sumVector(v1, v2);
    printf("Sum of vector: (%.2f, %.2f)\n", sum.x, sum.y);
    return 0;
}