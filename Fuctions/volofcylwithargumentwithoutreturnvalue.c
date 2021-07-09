#include<stdio.h>
void volumecyl(float, float);
int main()
{
	float r,h;
    printf("radius of cylinder is\n");
	scanf("%f", &r);
    printf("height of cylinder is\n");
	scanf("%f", &h);
	volumecyl(r,h);
}
void volumecyl(float a,float b){
	float vol=3.14*a*a*b;
    
	printf("the volume of cylinder is %f", vol);

}