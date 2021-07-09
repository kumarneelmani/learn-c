#include<stdio.h>
int main(){
    int i;
    double j;
    char c;
   int *ptr=&i;
    double *ptr1=&j;
    char *ptr2=&c;
    printf("the address of i is %u\n", ptr);
    printf("the address of j is %u\n", ptr1);
    printf("address of c is %u\n", ptr2);
    return 0;
}