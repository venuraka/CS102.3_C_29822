#include<stdio.h>
int main()
{
    int marks,count=0,total=0,average;
    do
    {
        printf("input marks");
        scanf("%d",&marks);
        count=count+1;
        total=marks+total;
    }while(count<=9);
    average=total/10;
    printf("%.2f\n",(float)average);
    if (average>50)
    printf("pass\n");
    else
    printf("Fail\n");
    
}