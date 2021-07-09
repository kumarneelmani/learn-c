#include<stdio.h>
int main(){
    int i, j, a[5], b[5], c[5],sum=0;
    printf("the element of first array is\n");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
printf("the element of second arrey is\n");
for(i=0;i<5;i++){
    scanf("%d",&b[i]);
}

for(i=0;i<5;i++){
   c[i]=a[i]+b[i];
}
 printf("the value of c[i] is\n");
for(i=0;i<5;i++){
    printf("%d\n",c[i]);
}
return 0;
}