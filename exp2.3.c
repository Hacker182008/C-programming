//Write a C program to accept a character from the user and display its ASCII value
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the chararcter: ");
    scanf(" %c",&ch);
    printf("The ASCII value of the character is: %d", ch);
    return 0 ;
}
