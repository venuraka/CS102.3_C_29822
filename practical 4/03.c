#include<stdio.h>
int main()
{
    char character;
    float π=3.147,output;
    printf("Enter 'c' for circumferance\n");
    printf("Enter 'a' for area\n");
    printf("Enter 'v' for volume\n");
    scanf(" %c",&character);

    float r;
    printf("Enter radius");
    scanf("%f",&r);

    switch (character)
    {
    case 'c':output=2*π*r;
    printf("circumferance is %f\n",output);
        break;
    case 'a':output=π*r*r;
    printf("area is %f\n",output);
        break;
    case 'v':output=(4.0/3.0)*π*r;
    printf("volume is %f\n",output);
        break;
    
    default:printf("invalied character");
        break;
    }

}