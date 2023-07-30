#include<stdio.h>
int multiplication(int a,int b)
{
    int multiplication;
    multiplication=a*b;
    return multiplication;
}
int main()
{
    int number1,number2;
    printf("enter 2 numbers");
    scanf("%d %d",&number1,&number2);
    printf("multplication is %d\n",multiplication(number1,number2));
}