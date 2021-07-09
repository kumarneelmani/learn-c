#include<stdio.h>
int main(){
   
    char str[20], i;
    int len;
   printf("enter a string\n");
   gets(str);
   for(i=0;str[i]!='\0';i++){
   len++;
   }
printf("the length of string is %d\n", len);

    return 0;
}