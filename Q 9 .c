//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    printf("\nint variable      %d byte",sizeof(int));
    printf("\nfloat variable    %d byte",sizeof(float));
    printf("\nchar variable     %d byte",sizeof(char));
    printf("\ndouble variable   %d byte",sizeof(double));
    return 0;
}
