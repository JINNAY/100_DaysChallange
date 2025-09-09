/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int fine(int d);
void main()
{
    int days;
    printf("enter the number of late days to be checked \n");
    scanf("%d",&days);
    fine(days);
}
int fine(int d)
{
    int amount;
    if(d<=5)
    {
        amount = d * 2;
        printf("the fine is ₹%d\n",amount);
    }
    else if(d>5 && d<=10)
    {
        amount = (5 * 2) + ((d - 5) * 4);
        printf("the fine is ₹%d\n",amount);
    }
    else if(d>10 && d<=30)
    {
        amount = (5 * 2) + (5 * 4) + ((d - 10) * 6);
        printf("the fine is ₹%d\n",amount);
    }
    else
    {
        printf("membership cancelled\n");
    }
}