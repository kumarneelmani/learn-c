#include<stdio.h>
int main(){
    int i, j, a[5], k;
    printf("enter the element of an arrey\n");
    for(i=0;i<5;i++){
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<5;i++){
       
        for(j=i+1;j<5;j++){
            if(a[i]<a[j]){
               k=a[i];
               a[i]=a[j];
               a[j]=k;
           }
        }
   }
   printf("arrey element in decending order is \n");
   for(i=0;i<5;i++){
       printf("%d\n",a[i]);
   }
   return 0;
    }
