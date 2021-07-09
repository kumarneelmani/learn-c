#include<stdio.h>
int main(){
    int i, j, a[5],high,low, n=4;
    printf("the element of arrey is\n");
      for(i=0;i<=n;i++){
          scanf("%d",&a[i]);
      }
      high=a[0];
      low=a[0];
     
      for(i=1;i<=n;i++){
          
              if(high<a[i]){
                  high=a[i];
          }
          if(low>a[i]){
              low=a[i];
          }
       
      }
     printf("the largest element of an arrey is:%d\n", high);
     printf("the largest element in an arrey is :%d", low);
     return 0;
}