#include<stdio.h>
int main()
{
    int number;
    printf("input number");
    scanf("%d",&number);
    if (number%2==0)
    printf("%d Entered number is even\n",number);
    else 
    printf("%d Entered number is odd\n",number);
}