#include<stdio.h>
int main()
{
    float averagespeed,distanceteavelled,timetaken;
    printf("Input distance");
    scanf("%f",&distanceteavelled);
    printf("Input time");
    scanf("%f",&timetaken);
    averagespeed=distanceteavelled/timetaken;
    printf("Average speed is %.2f\n",averagespeed);
}