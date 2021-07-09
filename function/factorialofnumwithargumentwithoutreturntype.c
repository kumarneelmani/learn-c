#include<stdio.h>
void facto(int a);
int main(){
    int x;
    facto(x);
     
}
void facto(int a){
    int i, fact=1;
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        fact=fact*i;
        }
         printf("factorial of %d is :%d\n", a, fact);
    }

