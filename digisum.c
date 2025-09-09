//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
void main()
{
    int n, sum = 0, remainder;
    printf("enter a number n to find the sum of its digits\n");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10; // get the last digit
        sum += remainder;    // add it to sum
        n /= 10;            // remove the last digit from n
    }
    printf("%d\n", sum);
}