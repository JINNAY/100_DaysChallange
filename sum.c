//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include  <stdio.h>

void main()
{
     int a,b,c;

	printf("enter 2 numbers\n");

	scanf("%d",&a);
	scanf("%d",&b);

	c = a+b;
	printf("the sumation is %d\n",c);
}
