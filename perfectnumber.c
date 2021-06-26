#include<stdio.h>
int main(){
	int i,sum=0,no,rem;
	printf("enter a number:");
	scanf("%d",&no);
	for(i=1;i<no;i++){
		rem=no%i;
		if(rem==0){
			sum=sum+i;
		}
	}
	if(sum==no){
	printf("%d is a perfect number\n", no);
	}
	else{
		printf("%d is not a perfect number\n", no);
	}
	return 0;
}