#include<stdio.h>
int main(){
int i, a[10], even[10], odd[10], odd_count=0,even_count=0;
printf("enter the element of arrey:\n");
for(i=0;i<10;i++){
scanf("%d\n", &a[i]);
}
for(i=0;i<10;i++){
    if(a[i]%2==0){
    even_count++;

}
}
for(i=0;i<10;i++){
    if(a[i]%2!=0){
    odd_count++;
}
}
for(i=0;i<even_count;i++){
    even[10]= even_count;
}
printf("the number of even number is %d\n", even[10]);
for(i=0;i<10;i++){
printf("%d", &even[i]);
}
return 0;
}