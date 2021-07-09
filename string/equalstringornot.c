#include <stdio.h>

int main()
{
  	char Str1[20], Str2[20];
  	int result, i;
 
  	printf("\n Please Enter the First String :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
 if(Str1[i]==Str2[i]){
    printf("string is equal\n");
 }
  	else{
          printf("the string is not equal\n");
      }
  	return 0;
}