//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
void main()
{
    int n, reversed = 0, remainder, original;
    printf("enter a number n to check if it is a palindrome\n");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10; // get the last digit
        reversed = reversed * 10 + remainder; // build the reversed number
        n /= 10; // remove the last digit from n
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
}