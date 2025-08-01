#include<stdio.h>
int main() {

    int x, y, z;
    printf("Enter the dimensions of 3D array (x y z): ");
    scanf("%d %d %d", &x, &y, &z);
    int arr[x][y][z];
    printf("\nAddress of the elements in the 3D array:\n");
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                printf("Address of arr[%d][%d][%d] = %p\n", i, j, k, (void*)&arr[i][j][k]);
            }
        }
    }
    return 0;
}