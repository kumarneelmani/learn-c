#include<stdio.h>
	int main(){
		int no,rem, sum=0, i, t, digit;
		printf("enter a number");
		scanf("%d", &no);
         t= no;
		for(i=1;i<=no;i++){
			rem=no%10;
            no=no/10;
			digit=rem%2;
			if(digit==0){
				sum=sum+rem;
			}
		}
		printf("the sum of %d is %d\n", t, sum);
	return 0;
}