#include<stdio.h>
int fact(int no){
    if(no==1){
        return no;
    }
    else{
        return (no)*fact(no-1);
    }

}
int main(){
    int i,n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("factorial of a number is %d\n",fact(n));
    return 0;
}