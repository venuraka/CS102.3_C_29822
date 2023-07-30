#include<stdio.h>
int main()
{
    int matrix1[3][3],c1,r1;
    for(c1=0;c1<3;c1++)
    {
        for(r1=0;r1<3;r1++)
        {
        printf("enter a number\n");
        scanf("%d",&matrix1[r1][c1]);
        }
    }
    for(c1=0;c1<3;c1++)
    {
        for(r1=0;r1<3;r1++)
        {
        printf("%d\t",matrix1[r1][c1]);
        }
        printf("\n");
    }
    int matrix2[3][3],c2,r2;
    for(c2=0;c2<3;c2++)
    {
        for(r2=0;r2<3;r2++)
        {
        printf("enter a number\n");
        scanf("%d",&matrix2[r2][c2]);
        }
    }
    for(c2=0;c2<3;c2++)
    {
        for(r2=0;r2<3;r2++)
        {
        printf("%d\t",matrix2[r2][c2]);
        }
        printf("\n");
    }
    int total[3][3],r3,c3;
    for(c3=0;c3<3;c3++)
    {
        for(r3=0;r3<3;r3++)
        {
        total[r3][c3]=matrix1[r3][c3]+matrix2[r3][c3];
        }
    }
    printf("total is : \n");
    for(c3=0;c3<3;c3++)
    {
        for(r3=0;r3<3;r3++)
        {
            printf("%d\t",total[r3][c3]);
        }
        printf("\n");
    }
}
