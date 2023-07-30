#include<stdio.h>
int main()
{
    int number,digit;
    printf("Enter a number");
    scanf("%d",&number);
    do
    {
        digit=number%10;
        number=number/10;
        printf("%d",digit);
    } while (number>0);
}