#include<stdio.h>
int main()
{
    int number,letter;
    printf("input number");
    scanf("%d",&number);
    letter=number%2;
    switch (letter)
    {
        break;
    case 1:printf("odd\n");
        break;
    default:printf("even\n");
        break;
    }
}