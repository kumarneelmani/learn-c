#include<stdio.h>
int main()

{
    int a , b;
    printf("enter a age\n");
    scanf("%d", &a);
    printf("enter price \n");
    scanf("%d", &b);
    if(a < 18){
        if(b>500){
            printf("discount will be 10 percent");
        }
        else{
            printf("discount will be 5 percent");
        }
    }
    else{
        if(b>500){
            printf("discount will be 8 pecent");
        }
        else{
            printf("discount will be 2 percent");
        }
    }
    
    return 0;
}