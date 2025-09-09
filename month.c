//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
int month(int m);
void main()
{
    int mon;
    printf("enter the month number to be checked \n");
    scanf("%d",&mon);
    month(mon);
}
int month(int m)
{
    switch(m)
    {
        case 1:          
            printf("the month number %d corresponds to January, 31 days\n",m);
            break;
        case 2:  
            printf("the month number %d corresponds to February, 28 days\n",m);
            break;
        case 3:
            printf("the month number %d corresponds to March, 31 days\n",m);
            break;
        case 4:
            printf("the month number %d corresponds to April, 30 days\n",m);
            break;
        case 5:
            printf("the month number %d corresponds to May, 31 days\n",m);
            break;
        case 6:
            printf("the month number %d corresponds to June, 30 days\n",m);
            break;
        case 7:
            printf("the month number %d corresponds to July, 31 days\n",m);
            break;
        case 8:
            printf("the month number %d corresponds to August, 31 days\n",m);
            break;
        case 9:
            printf("the month number %d corresponds to September, 30 days\n",m);
            break;
        case 10:
            printf("the month number %d corresponds to October, 31 days\n",m);
            break;
        case 11:
            printf("the month number %d corresponds to November, 30 days\n",m);
            break;
        case 12:
            printf("the month number %d corresponds to December, 31 days\n",m);
            break;
        default:
            printf("invalid input\n");
    }
}