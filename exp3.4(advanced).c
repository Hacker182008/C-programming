//Write a C program to accept a character from the user and determine whether it is an alphabet, a digit, or a special character.
#include <stdio.h>
int main(){
 char ch ;
 printf("Enter the character: ");
 scanf(" %c",&ch);
 if((ch >= 'A' && ch <= 'Z')|| (ch >'a' && ch <= 'z')){
    printf("Alphabet");
    }
 else if(ch >= '0' && ch <= 'z'){
    printf("digit");
 }
 else
    printf("Special charcter");
 return 0;
}
