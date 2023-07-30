#include<stdio.h>
int main()
{
    int x=1,marks,maximum=0,minimum=0;
    float total=0,average;
    printf("enter marks");
    scanf("%d",&marks);
    maximum=marks;
    minimum=marks;
    while(x<=9)
    {
        printf("enter marks");
        scanf("%d",&marks);
        total=total+marks;
        if (marks>maximum)
        {
        maximum=marks;
        }
        if (marks<minimum)
        {
            minimum=marks;
        }
        x=x+1;
  }average=total/10;
printf("total is %.2f\n",total);
printf("average is %.2f\n",average);
printf("maximum is %d\n",maximum);
printf("minimum is %d\n",minimum);
}  



