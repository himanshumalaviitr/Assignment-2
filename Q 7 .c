//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any no:- ");
    scanf("%d",&n);
    for(i=1;n!=1;i++)
        if(n%2==1)
            break;
        else
            n=n/2;
    printf("LSB=%d",i);
}
