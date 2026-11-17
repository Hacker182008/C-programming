//Write a C program to read an integer value m and display the value of n according to the following conditions:
//Ø If m is greater than 0, n = 1 Ø If m is equal to 0, n = 0 Ø If m is less than 0, n = -1
#include<stdio.h>
int main(){
    int m;
    printf("enter the value of m: ");
    scanf(" %d",&m);
    if(m>0)
        printf("n=1");
    else if(m==0)
        printf("n=0");
    else
        printf("n=-1");
    return 0;
}
