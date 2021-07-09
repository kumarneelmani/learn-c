#include<stdio.h>
int main(){
    int i, j,temp, a[10], flag=0;
 printf("the element of arrey is \n");
 for(i=0;i<10;i++){
     scanf("%d", &a[i]);
 }
 printf("prime numbers are\n");
         for(i=0;i<10;i++){
             flag=0;
             for(j=2;j<a[i];j++){
        if(a[i]%j==0){
            flag=1;
            break;
            }
        }
        if(flag==0){
            printf("%d ", a[i]);
        }
    }


    
 return 0;
 }