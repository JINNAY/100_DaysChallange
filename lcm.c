//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int lcm(int a, int b);
void main()
{
    int a, b, result;
    printf("enter two numbers to find their LCM\n");
    scanf("%d %d", &a, &b);
    result = lcm(a, b);
    printf("%d\n", result);
}
int lcm(int a, int b)
{
    int max = (a > b) ? a : b; // start from the larger
    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}