#include<stdio.h>
#include<stdlib.h>
int main(){
  int *ptr, i, n;
  
  printf("enter how many elements you want\n");
    scanf("%d",&n);
  
  ptr=(int*)malloc(n*sizeof(int));
  printf("element are:\n");
  for(i=0;i<n;i++){
    scanf("%d", ptr+1);
  }
  for(i=0;i<n;i++){
    printf("%d",*(ptr+1));
  }
  free(ptr);
  
}