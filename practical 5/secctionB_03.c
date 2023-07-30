#include<stdio.h>
int main()
{
    int x=1,price,count=0;
    float total,average;
    while (x<=10)
    {
        printf("enter price");
        scanf("%d",&price);
        if(price>200)
        count=count+1;
        total=total+price;
        x=x+1;
        
    }average=total/10;
    printf("average price is %.2f\n",average);
    printf("%d items value more than RS 200\n",count);
}