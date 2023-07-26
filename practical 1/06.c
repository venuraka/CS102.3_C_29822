#include<stdio.h>
int main()
{
    char name[20];
    int birthyear,age;
    printf("Enter student name\n");
    scanf("%s",name);
    printf("Enter birth year\n");
    scanf("%d",&birthyear);
    age=2023-birthyear;
    printf("students name is %s and age is %d\n",name,age);

}