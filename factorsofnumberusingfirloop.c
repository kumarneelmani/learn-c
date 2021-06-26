#include<stdio.h>
int main(){
	int i,j,no;
	printf("enter a number");
	scanf("%d",&no);
	printf("the factors of % is:", no);
	for(i=1;i<=no;i++){
      
	  if(no%i==0){
		 
	  printf("%d ", i);
	  }
	}
	return 0;
}