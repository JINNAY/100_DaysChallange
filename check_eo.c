//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include<stdio.h>

int evenOdd();

void main()
{
    int num;

    printf("enter the number to be checked \n");
    scanf("%d",&num);

    evenOdd(num);
}

int evenOdd(int n)
{
    if(n%2 == 0)
    {
        printf("the number %d is even\n",n);
    }
    else
    {
        printf("the number %d is odd\n",n);
    }

}