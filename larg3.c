//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int larg3(int a, int b, int c);
void main()
{
    int num1, num2, num3;
    printf("enter the three numbers to be checked \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    larg3(num1,num2,num3);
}
int larg3(int a, int b, int c)
{
    if(a>=b && a>=c)
    {
        printf("the largest number among %d, %d and %d is: %d\n",a,b,c,a);
    }
    else if(b>=a && b>=c)
    {
        printf("the largest number among %d, %d and %d is: %d\n",a,b,c,b);
    }
    else
    {
        printf("the largest number among %d, %d and %d is: %d\n",a,b,c,c);
    }
}   