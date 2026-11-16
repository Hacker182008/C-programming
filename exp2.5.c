//Write a C program to demonstrate type conversion by converting a float to an integer and an
//integer to a float and displaying the results.
#include <stdio.h>
int main()
{
   float f;
   int i;
   printf("Enter the float value: ");
   scanf("%f",&f);
   printf("Enter the integer value: ");
   scanf("%d",&i);
   printf("Float to integer: %d\n", (int)f);
   printf("Integer to float: %f\n", (float)i);
   return 0 ;
}


