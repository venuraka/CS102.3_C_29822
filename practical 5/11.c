#include<stdio.h>
int main()
{
    int number,zcount=0,xcount=0,devider=2,out;
    printf("input number");
    scanf("%d",&number);
    while(devider<=8)
    {
    out=number%devider;
    devider=devider+1;
    if(out==0)
    {
        zcount=zcount+1;
    }
    else
    {
        xcount=xcount+1;
    }
    }
    if (zcount>=2)
    printf("Entered number is composite number\n");
    else 
    printf("Entered number is prime number\n");
    
}