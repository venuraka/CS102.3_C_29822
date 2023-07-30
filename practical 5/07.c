#include<stdio.h>
int main()
{
    int number1=0,number2=1,number3,count=2;
    printf("1 number is %d\n2 number is %d\n",number1,number2);
    do 
    {
        number3=number1+number2;
        number1=number2;
        number2=number3;
        count=count+1;
        
        printf("%d number is %d\n",count,number3);    
    }while (count<=9);
    
}
