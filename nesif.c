//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include<stdio.h>
int nesif();
void main()
{
    int num;

    printf("enter the number to be checked \n");
    scanf("%d",&num);

    nesif(num);
}
int nesif(int n)
{
    if(n>=0)
    {
        if(n==0)
        {
            printf("the number is zero\n");
        }
        else
        {
            printf("the number %d is positive\n",n);
        }
    }
    else
    {
        printf("the number %d is negative\n",n);
    }

}