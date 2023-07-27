#include<stdio.h>
int main()
{
    int number1,number2,remainder;
    printf("Input two numbers");
    scanf("%d %d",&number1,&number2);
    remainder=number1%number2;
    if (remainder==0)
    printf("%d is multiple of %d\n",number1,number2);
    else
    printf("%d isn't multiple of %d\n",number1,number2);
}