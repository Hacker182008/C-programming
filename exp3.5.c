//Write a C program to accept the height of a person in centimetres and categorize the person based on the following criteria:
//Ø Height < 150 cm: Dwarf Ø Height = 150 cm: Average Ø Height > 165 cm: Tall
#include <stdio.h>
int main(){
    int h;
    printf("Enter the height in centimeters : ");
    scanf(" %d", &h);
    if (h<150)
        printf("Dwarf");
    else if(h<165)
        printf("Average");
    else
        printf("Tall");
    return 0;

}

