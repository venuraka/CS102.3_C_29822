#include<stdio.h>
void calculate()
{
int number1,number2,sum,differance;
printf("Input two numbers");
scanf("%d %d",&number1,&number2);
sum=number1+number2;
printf("%d\n",sum);
differance=number1-number2;
printf("%d\n",differance);
}
int main()
{
    calculate();
}
