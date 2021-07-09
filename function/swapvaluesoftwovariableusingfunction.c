#include <stdio.h>  
void swap(int , int);    
int main()  
{  
    int a = 10;  
    int b = 20; 
    swap(a,b);  
  return 0;  
}  
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf(" after swaping value of a=%d and b=%d\n",a,b);   
}  