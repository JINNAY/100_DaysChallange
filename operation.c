//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include  <stdio.h>

void main()
{
     int a,b,c;

        printf("enter 2 numbers\n");

        scanf("%d",&a);
        scanf("%d",&b);

        
        printf(" the sumation is %d \n the subtraction is %d \n the multiplication is %d \n the division is %d \n",a+b,a-b,a*b,a/b);
}
