#include<stdio.h>
int main()
{
int a;
printf("enter a number\n");
scanf("%d", &a);
if(a>0){
    printf("the %d is positive\n", a);
}
else if(a<0){
    printf("the %d is negative\n",a);
}
else{
    printf("number is zero\n");
}

return 0;
}