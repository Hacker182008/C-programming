//Write a C program to calculate the Body Mass Index (BMI) of a person using weight (in kilograms) and height (in metres). Display the BMI value and classify it according to the following categories:
//Ø BMI < 18.5: Underweight Ø 18.5 ≤ BMI < 25.0: Normal Weight Ø 25.0 ≤ BMI < 30.0: Overweight Ø BMI ≥ 30.0: Obese
#include <stdio.h>
int main() {
    float w,h,BMI;
    printf("Enter the weight in (kg): ");
    scanf("%f",&w);
    printf("Enter the height in (m): ");
    scanf("%f",&h);
    BMI = w/(h*h);
    printf("BMI is = %.2f\n",BMI);
    if(BMI<18.5)
        printf("Underweight");
    else if(BMI>=18.5 && BMI<25.0)
        printf("Normal Weight");
    else if(BMI>=25.0 && BMI<30.0)
        printf("Overweight");
    else
        printf("Obesse");
    return 0;


}
