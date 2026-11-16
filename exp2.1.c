//Write a C program to declare two integer variables, initialize them with values, and display
//their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int a,b;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("product = %d\n",a*b);
    printf("Quotient = %d\n",a/b);
    return 0;

}
