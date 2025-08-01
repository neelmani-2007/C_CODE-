#include<stdio.h>
#define PI 3.14159
double area_of_circle(double radius){
    return PI * radius * radius;
}
double volume_of_cylinder(double radius,double height) {
    return PI * radius * radius * height;
}
int main() {
    double radius, height;
    printf("Enter the radius of the circle/cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    printf("Area of the circle: %lf\n", area_of_circle(radius));
    printf("Volume of the cylinder: %lf\n", volume_of_cylinder(radius, height));
    return 0;
}
