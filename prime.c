//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int n);
void main()
{
    int n;
    printf("enter a number n to check if it is prime\n");
    scanf("%d", &n);
    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
