#include<stdio.h>
int main(){
    int a , i, flag=0 ;
    scanf("%d",&a);
    for(i=2;i<a-1;i++){ 
        if(a%i==0){
            printf("the number is not  prime\n");
            flag=1;
            break;

        }
    }
    if(flag == 0){
            printf("the number is prime\n");
    }
    return 0;
}