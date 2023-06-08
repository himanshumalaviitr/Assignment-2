//Write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any no. ");
    scanf("%d",&a);
    a=a-a%10;
    printf("\n\nAns:- %d\n",a);
    return 0;
}
