#include<stdio.h>
int main(){
    int a[10], i, j ,n=10, k;
    printf("enter the element in arrey\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
        }
    }
     printf("The numbers arranged in descending order are given below \n");
 
        for (i = 0; i < n; ++i)
        {
            printf("%d\n", a[i]);
        }
 
        printf("The 2nd largest number is  = %d\n", a[1]);
        printf("The 2nd smallest number is = %d\n", a[n - 2]);
 
    return 0;
}