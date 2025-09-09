//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int week(int d);
void main()
{
    int day;
    printf("enter the day number to be checked \n");
    scanf("%d",&day);
    week(day);
}
int week(int d)
{
    switch(d)
    {
        case 1:
            printf("the day number %d corresponds to Monday\n",d);
            break;
        case 2:  
            printf("the day number %d corresponds to Tuesday\n",d);
            break;
        case 3:
            printf("the day number %d corresponds to Wednesday\n",d);
            break;
        case 4:
            printf("the day number %d corresponds to Thursday\n",d);
            break;
        case 5:
            printf("the day number %d corresponds to Friday\n",d);
            break;
        case 6:
            printf("the day number %d corresponds to Saturday\n",d);
            break;
        case 7:
            printf("the day number %d corresponds to Sunday\n",d);
            break;
        default:
            printf("invalid input\n");
    }
}
