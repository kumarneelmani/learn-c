#include<stdio.h>
int main(){
    int i, j, a[5],temp, n=4;
    printf("the element of arrey is\n");
      for(i=0;i<=n;i++){
          scanf("%d",&a[i]);
      }
     
      for(i=0;i<=n;i++){
          for(j=i+1;j<=n;j++){
              if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
              }
          }
       
      }
     printf("the largest element of an arrey is:%d\n", a[n]);
     printf("the smallest element in an arey is :%d\n", a[0]);
}