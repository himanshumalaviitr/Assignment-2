//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
  int a,s=0;
  printf("Enter any 3 digit no.");
  scanf("%d",&a);
  s=s+a%10;
  a=a/10;
  s=s+a%10;
  a=a/10;
  s=s+a%10;
  printf("sum of digit=%d",s);
  return 0;
}
