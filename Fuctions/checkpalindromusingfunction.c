#include<stdio.h>
int checkpalindrom(int n);
int main(){
    int a;
     printf("enter a number\n");
    scanf("%d",&a);
    checkpalindrom(a);
    
    
}

int checkpalindrom(int n){
int temp,sum=0, r, flag;
   
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
       printf("the number is palindrom\n");
    }
    else{
        printf("the number is not palindrom");
    }
}