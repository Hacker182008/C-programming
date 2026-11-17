//Write a C program to find whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int Y;
    printf("Enter the year to check whther it is leap year or not: ");
    scanf("%d",&Y);
    if(Y%400==0)
        printf("it is the leap year");

    else if(Y%100!=0 && Y%4==0)
        printf("it is a leap year");

    else
        printf("It is not the Leap year");

    return 0;

}
