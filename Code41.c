#include<stdio.h>
int main() {
    FILE *file;
    int a,b,c;
    file = fopen("Input.txt","r" );
    if(file==NULL) {
        printf("error opening file\n");
        return 1;
    }
    fscanf(file,"%d%d%d",&a,&b,&c);
    printf("The integers are : %d %d %d\n",a,b,c);
    fclose(file);
    return 0;


}