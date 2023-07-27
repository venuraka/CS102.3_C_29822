#include<stdio.h>
int main()
{
    int number1,number2,number3,max,min;
    printf("Input three integers");
    scanf("%d %d %d",&number1,&number2,&number3);
    max=number1;
    if(number2>max)
    max=number2;
    if(number3>max)
    max=number3;
    printf("%d is the maximum number\n",max);
    min=number1;
    if(number2<min)
    min=number2;
    if(number3<min)
    min=number3;
    printf("%d is the minimum number\n",min);
}