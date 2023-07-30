#include<stdio.h>
int main()
{
    int number[10],i,max,min,total=0;
    float average;
    for(i=0;i<=9;i=i+1)
    {
    printf("enter a number %d -: ",i+1);
    scanf("%d",&number[i]);
    total=total+number[i];
    }
    max=number[0];
    min=number[0];
    for(i=0;i<=9;i=i+1)
    {
    if(number[i]>max)
    max=number[i];
    if(number[i]<min)
    min=number[i];
    }
printf("max is %d\n",max);
printf("min is %d\n",min);
printf("average is %.2f\n",(float)total/10);
    for(i=9;i>=0;i--)
{
    printf("number %d is %d\n",i+1,number[i]);
}
}