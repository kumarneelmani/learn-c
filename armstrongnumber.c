#include<stdio.h>
#include<math.h>
int main()
{
    int no,t, r, m,n=0;
    printf("enter the value of no:");
    scanf("%d",&no);
    t=no;
    while(no>0){
    r=no%10;
    m=r*r*r;
    n=n+m;
    no=no/10;
    }
printf("the value of n is %d \n", n);
if(n==t){
    printf("%d is armstrong number", t);
}
else{
    printf("%d is not armstrong number",t);
}
    
    return 0;
}