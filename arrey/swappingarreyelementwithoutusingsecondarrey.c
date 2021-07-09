#include<stdio.h>
int main(){
    int i,a[5],n=5, temp;
    printf("enter the element of array\n");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++){
        temp=a[i];
        a[i]=a[n-i];
        a[n-i]=temp;
    }
    for(i=0;i<5;i++){
        printf("%d\n", a[i]);
    }
return 0;
}
