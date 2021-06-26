#include<stdio.h>
int main(){
    int a , b , i;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    for(i=a;i<=b;i++){
        if(i%2==0){
            printf("the %d is even\n", i);
        }
        else{
            printf("the %d is odd\n", i);
        }
    }
}