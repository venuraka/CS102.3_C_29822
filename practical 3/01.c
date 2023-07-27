#include<stdio.h>
int main()
{
    int number1,number2,max;
    printf("Input two numbers");
    scanf("%d %d",&number1,&number2);
    if (number1 >number2)
    printf("%d is highest number\n",number1);
    else 
    printf("%d is highest number\n",number2);
}