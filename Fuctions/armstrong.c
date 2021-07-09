#include<stdio.h>
int checkarm(int no){
  int sum=0, temp, rem;
  temp=no;
  while(no!=0){
      rem=no%10;
      sum+=rem*rem*rem;
      no/=10;
  }
  if(temp==sum){
    printf("the number is armstrong\n");
  }
  else{
      printf("the number is not armstrong\n");
  }
}
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    checkarm(n);
    
}