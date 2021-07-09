#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,sum=0;
int *ptr;
printf("enter the value of n\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("enter value of elements\n");
for(i=0;i<n;i++){
     scanf("%d",ptr+i);
}
for(i=0;i<n;i++){
  sum=sum+ *(ptr+i);
}
printf("the value of sum of element of arrey is %d\n", sum);
free(ptr);
}