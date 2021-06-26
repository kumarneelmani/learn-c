#include<stdio.h>
int main(){
int i, j=1, n;
printf("factorial of number:");
scanf("%d", &n);
for(i=1;i<=n;i++){
	j=j*i;
}
printf("the value of factorial of a number is %d", j );
return 0;
}