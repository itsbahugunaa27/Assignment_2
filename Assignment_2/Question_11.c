#include<stdio.h>
int main()
{
    float INR,USD;
    printf("Enter the amount of INR\n");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("INR value=%.2f and USD value=%.2f",INR,USD);
    return 0;
}
