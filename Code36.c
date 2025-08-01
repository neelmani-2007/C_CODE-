#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100],temp;
    int i= 0, length;
    printf("Enter a string (using%%s):");
    scanf("%s", str1);
    printf("Enter the same string character by character(using%%c):\n");
    for(i=0; i<length; i++) {
    printf("Enter character %d", i+1);
    getchar();
    scanf("%c", &str2[i]);
    }

    str2[length] = '\0';
   if(strcmp(str1,str2)==0)
   {
    printf("The strings are not equal!\n");

   } else{
    printf("The string are not equal!\n");
   } return 0;
    }

