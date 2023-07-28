#include<stdio.h>
int main ()
{
    int basicsalary,workingyears,monthlysales,bonus1,bonus2,bonus3,finalsalary;
    char workingarea;
    printf("Input basic salary\n");
    scanf("%d",&basicsalary);
    printf("Input working years");
    scanf("%d",&workingyears);
    if (workingyears>=5)
    bonus1=(basicsalary*10)/100;
    else
    bonus1=0;
    printf("Input first letter of working area");
    scanf(" %c",&workingarea);
    if (workingarea=='c')
    bonus2=2500;
    else
    bonus2=0;
    printf("Input monthly sales");
    scanf("%d",&monthlysales);
    if (monthlysales<25000)
    bonus3=(monthlysales*10)/100;
    else if (monthlysales<50000)
    bonus3=(monthlysales*12)/100;
    else
    bonus3=(monthlysales*15)/100;
    finalsalary=basicsalary+bonus1+bonus2+bonus3;
    printf("Gross monthly remuneration is %d\n",finalsalary);
}
