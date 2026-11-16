//Write a C program which takes as input the purchase price of an item (P), its expected
//number of years of service (Y) and its expected salvage value (S). Then outputs the yearly
//depreciation for the item (D). Use the formula: D = (P – S)/ Y.


#include <stdio.h>
int main()
{
    float P,S,D;
    int Y;
    printf("Enter the purchase price : ");
    scanf("%f",&P);
    printf("Enter the salvage value : ");
    scanf("%f",&S);
    printf("Enter the number of year :");
    scanf("%d",&Y);
    D = (P-S)/Y;
    printf("Depreciation for the item : %.2f",D);
    return 0;

}
