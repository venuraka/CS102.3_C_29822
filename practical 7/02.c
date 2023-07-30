#include<stdio.h>
void sum(int a,int b)
{
    int sum,diff;
    sum=a+b;
    diff=a-b;
    printf("Total is %d\n",sum);
    printf("Differance is %d\n",diff);
}
int main()
{
    int number1,number2;
    printf("Enter 2 numbers");
    scanf("%d %d",&number1,&number2);
    sum(number1,number2); 
}