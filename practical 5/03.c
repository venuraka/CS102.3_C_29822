#include <stdio.h>
int main()
{
    int number,factorial=1;
    printf("Enter a number : ");
    scanf("%d",&number);
if(number>0)
{
while (number>0)
{
    factorial=number*factorial;
    number=number-1;
}
printf("Factorial is %d\n",factorial);
}
else
{
    printf("There is no factorials for negative numbers");
}
}
   