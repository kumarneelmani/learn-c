#include<stdio.h>
int volumecyl();
int main(){
   
    volumecyl();
}
    int volumecyl(){
     float a=3.14, r, h;
    double b=a*r*r*h;
    printf("radius = \n");
    scanf("%f", &r);
    printf("height= \n");
    scanf("%f",&h);
    printf("volume of cylinder is :%f \n",b);
}