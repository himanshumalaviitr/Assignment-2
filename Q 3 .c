//Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b respectively ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);
    return 0;
}
