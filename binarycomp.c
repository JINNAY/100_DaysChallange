//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char binary[65]; // assuming a maximum of 64 bits
    printf("enter a binary number to find its 1's complement\n");
    scanf("%s", binary);
    int len = strlen(binary);
    for (int i = 0; i < len; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else
        {
            printf("Invalid binary number\n");
            return;
        }
    }
    printf("%s\n", binary);
}