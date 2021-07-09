#include<stdio.h>
int main(){
    int a[3][3],b[3][3], i, j;
    printf("the element of an arrey is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("3*3 matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
      printf("the value of transpose maatrix is \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
       b[i][j]=a[j][i];
       printf("%d\t", b[i][j]);
        }
        printf("\n");
        }
       
}