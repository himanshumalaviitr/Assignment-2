/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number.*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number and a digit ");
    scanf("%d%d",&a,&b);
    a=a*10+b;
    printf("After append no is %d",a);
    return 0;
}
