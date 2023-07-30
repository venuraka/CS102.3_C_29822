#include<stdio.h>
int main()
{
    int number,digit,total=0;
    printf("Enter a number");
    scanf("%d",&number);
    do
    {
        digit=number%10;
        total=digit+total;
        number=number/10;
    } while (number>0);
    printf("Sum of all digit is %d\n",total);
}