//Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'|| ch >= 'a' && ch <= 'z'){
        printf("IT is Alphabet");
    }
    else
        printf("It is not Alphabet ");
    return 0;
}
