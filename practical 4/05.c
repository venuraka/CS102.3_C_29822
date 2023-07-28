#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    switch (number)
    {
    case 1:printf("31 days in this month\n");
        break;
    case 2:printf("28 days in this month\n");
        break;
    case 3:printf("31 days in this month\n");
        break;
    case 4:printf("30 days in this month\n");
        break;
    case 5:printf("31 days in this month\n");
        break;
    case 6:printf("30 days in this month\n");
        break;
    case 7:printf("31 days in this month\n");
        break;
    case 8:printf("31 days in this month\n");
        break;
    case 9:printf("30 days in this month\n");
        break;
    case 10:printf("31 days in this month\n");
        break;    
    case 11:printf("30 days in this month\n");
        break;
    case 12:printf("31 days in this month\n");
        break;
    default:printf("%d invalied number\n",number);
    }
}