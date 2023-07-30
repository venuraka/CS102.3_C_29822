#include<stdio.h>
int main()
{
    int number,x;
    printf("input number");
    scanf("%d",&number);
    for(x=1;x<=number;x=x+1)
    {
        if(number%x==0)
        {
            printf("%d\n",x);
        }
    }
}




