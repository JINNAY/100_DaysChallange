//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
void main()
{
    int n, reversed = 0, remainder;
    printf("enter a number n to reverse it\n");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("%d\n", reversed);
}
