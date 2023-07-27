#include<stdio.h>
int main()
{
    float r,diameter,circumference,area,π=3.14159;
    printf("Enter radius of a circle");
    scanf("%f",&r);
    diameter=2*r;
    printf("Diameter is %f\n",diameter);6
    circumference=2*π*r;
    printf("Circumference is %f\n",circumference);
    area=π*(r*r);
    printf("Area is %f\n",area);
}