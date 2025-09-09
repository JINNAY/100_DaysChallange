//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
void main()
{
    int n, original, remainder, result = 0, digits = 0;
    printf("enter a number n to check if it is an Armstrong number\n");
    scanf("%d", &n);
    original = n;
    // count digits
    while (original != 0)
    {
        original /= 10;
        digits++;
    }
    original = n;
    // calculate sum of powers of digits
    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    if (result == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
