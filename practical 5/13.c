#include<stdio.h>
int main()
{
    int number,total=0;
    printf("Enter a number");
    
    do{
        scanf("%d",&number);
        if (number!=-1)
        {
        total=total+number;
        printf("Enter a number");
        }
    }while(number!=-1);
    
   printf("total is %d\n",total);      
} 