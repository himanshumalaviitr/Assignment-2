//Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int a;
    printf("enter any number ");
    scanf("%d",&a);
    printf("no without last digit is %d",a/10);
    return 0;
}
