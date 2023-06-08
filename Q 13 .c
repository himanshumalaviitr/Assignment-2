/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter three digit number:");
    scanf("%d",&a);
    a=a%10*100+a/10;
    printf("rotating it towards right %d",a);
    return 0;
}
