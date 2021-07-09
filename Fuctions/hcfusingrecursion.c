#include<stdio.h>
int hcf(int a,int b);
int main(){
    int x, y;
    printf("enter first number\n");
    scanf("%d",&x);
    printf("enter second number\n");
    scanf("%d",&y);
    hcf(x,y);
    printf("the hcf of these two number is %d\n", hcf(x,y));
}
  int hcf(int a, int b){
      if(b==0){
         return b=a;
      }
      else{
          return hcf(b,a%b);
      }
  }