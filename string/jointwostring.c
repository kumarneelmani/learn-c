#include <stdio.h>

int main()
{
  	char str1[20], str2[20];
  	int i, j;
 
  	printf("\n Please Enter the First String :  ");
  	gets(str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(str2);
      for(i=0;str1[i]!='\0'; i++){
      }
      for(j=0;str2[j]!=0;j++, i++){
          str1[i]=str2[j];
      }
      str1[i]!='\0';
      printf("the concatened string is :%s", str1);
      return 0; 
}