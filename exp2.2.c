//Write a C program to convert a given value in inches into centimeters
#include <stdio.h>
int main() {
    float inches, centimeters ;
    printf("enter  the number in inches: ");
    scanf("%f",&inches);
    centimeters = inches * 2.54;
    printf("converted number in centimeters is : %.2f",centimeters);
    return 0 ;

}
