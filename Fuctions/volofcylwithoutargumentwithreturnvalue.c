#include<stdio.h>
int volumecyl();
int main(){
   float vol;
    vol=volumecyl();
	printf("the volume of cylinder is %f\n", vol);

}
    int volumecyl(){
     float a=3.14, r, h;
    float b;
    printf("radius = \n");
    scanf("%f", &r);
    printf("height= \n");
    scanf("%f",&h);
	b=a*r*r*h;
    return b;
}