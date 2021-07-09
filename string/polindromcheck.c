#include<stdio.h>
int main(){
   
    char str[20], i, len, flag=0;
    printf("enter a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
       for(i=0;i<len;i++){
           flag=0;
       if(str[i]==str[len-i]){  
            flag=1;
   }
}
if(flag==1){
    printf("the string is palendrom");
}
else{
    printf("the string is not palendrom\0");
}
    return 0;
}