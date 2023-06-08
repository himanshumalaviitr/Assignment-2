/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>
int main()
{
    float r;
    printf("Enter amount in INR ");
    scanf("%f",&r);
    r=r/76.23;
    printf("amount in USD %f",r);
    return 0;
}
