//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int hcf(int a, int b);
void main()
{
    int a, b, result;
    printf("enter two numbers to find their HCF\n");
    scanf("%d %d", &a, &b);
    result = hcf(a, b);
    printf("%d\n", result);
}
int hcf(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
