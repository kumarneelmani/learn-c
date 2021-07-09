#include<stdio.h>
int main(){
int i, a[10];
printf("enter the element of arrey:\n");
for(i=0;i<10;i++){
scanf("%d\n", &a[i]);
}
printf("these element is even:\n");
for(i=0;i<10;i++){
    if(a[i]%2==0){
    printf("%d\n", a[i]);
}
}
printf("these element is odd:\n");
for(i=0;i<10;i++){
    if(a[i]%2!=0){
    printf("%d\n", a[i]);
}
}
return 0;
}