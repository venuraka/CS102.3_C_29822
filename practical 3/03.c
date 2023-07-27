#include<stdio.h>
int main()
{
    char employeename[15];
    float newsalary,basicsalary,increment;
    printf("Enter employee name");
    scanf("%s",employeename);
    printf("Input basic salary");
    scanf("%f",&basicsalary);
    if(basicsalary<5000)
    increment=(basicsalary*5)/100;
    if(basicsalary>=5000)
    increment=(basicsalary*10)/100;
    if(basicsalary>=10000)
    increment=(basicsalary*15)/100;
    newsalary=basicsalary+increment;
    printf("New salary is %.2f\n",newsalary);

    
}