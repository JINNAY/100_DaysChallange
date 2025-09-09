//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
void main()
{
    int n, product = 1, remainder, hasOdd = 0;
    printf("enter a number n to find the product of its odd digits\n");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10; // get the last digit
        if (remainder % 2 != 0) // check if it's odd
        {
            product *= remainder; // multiply it to product
            hasOdd = 1; // flag to indicate at least one odd digit found
        }
        n /= 10; // remove the last digit from n
    }
    if (!hasOdd) // if no odd digits were found, product should be 1
        product = 1;
    printf("%d\n", product);
}