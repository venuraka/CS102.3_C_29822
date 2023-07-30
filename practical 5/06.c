#include<stdio.h>
int main()
{
    int exponent,base,number=1;
    printf("Enter a base number:");
    scanf("%d",&base);
    for(exponent=1;exponent<=9;exponent++)
    {
        for(int i=1;i<=exponent;i=i+1)
    {
        number=number*base;
    }
    printf("%d exponent is %d\n",exponent,number);
    number=1;
    } 
    
} 