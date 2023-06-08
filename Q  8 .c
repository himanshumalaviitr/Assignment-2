/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no:- ");
    scanf("%d",&n);
    if((n&1)==0)
        printf("%d is Even Number",n);
    else
        printf("%d is Odd Number",n);
}
