#include<stdio.h>
int main(){
    int i, a[10], sum=0;
    printf("the value of arrey is\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the of element of arrey is %d\n ", sum);
    return 0;
}
