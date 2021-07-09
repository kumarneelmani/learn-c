#include<stdio.h>
int fab(int no){
    if(no<=1){
        return no;
    }
    else{
        return fab(no-1)+fab(no-2);
    }

}
int main()
{
int i,n;
printf("enter a number\n");
scanf("%d", &n);
printf("fabonachi series is %d", fab(n));
}