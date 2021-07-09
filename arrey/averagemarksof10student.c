#include<stdio.h>
int main(){
    int no, i , j, a[10],n=10;
    float avg , sum=0 ;
    printf("enter the marks of students\n");
    for(i=0;i<n;i++){
      scanf("%d\n",&a[i]);
    }
   for(i=0;i<n;i++){
       sum=sum+a[i];
   }
   
   printf("the average is %f\n", sum/n);
   return 0;
}