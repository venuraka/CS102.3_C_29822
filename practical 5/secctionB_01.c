#include<stdio.h>
int main()
{
    int x=0,number,positive=0,negative=0,zero=0;
    while (x<=9)
    {
        printf("input a number");
        scanf("%d",&number);
        x=x+1;
        if (number>0)
        positive=positive+1;
        else if (number<0)
        negative=negative+1;
        else 
        zero=zero+1;
    }
    printf("number of positive is %d\nnumber of negative is %d\nnumber of zero is %d\n",positive,negative,zero);
    
}