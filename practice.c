#include<stdio.h>
int incrementVal(int x){
 
  return x++;
} 
int main(){
  int i;
 static int x=20;
  for(i=0;i<5;i++){
    printf("value is :%d\n",x++);
  }
   return 0;
}