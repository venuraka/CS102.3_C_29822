#include<stdio.h>
int main()
{
    float F,C;
    printf("Input temperature in Fahrenheit");
    scanf("%f",&F);
    C=(5.0/9.0)*(F-32.0);
    printf("Temperature is %.2f\n",C);
}