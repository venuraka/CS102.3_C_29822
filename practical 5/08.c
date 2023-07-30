#include<stdio.h>
int main()
{
    int number,act_number,digit,power3=0,power;
    printf("Enter a number");
    scanf("%d",&number);
    act_number = number;
    do
    {
        digit=number%10;
        power=digit*digit*digit;
        power3=power3+power;
        number=number/10;
    } while (number>0);
    if (power3==act_number)
    {
        printf("%d is an Armstrong number\n",act_number);
    }
    else
    {
        printf("%d isn't an Armstrong number\n",act_number);
    }
}