//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int upperlower(char c);
void main() 
{
    char ch;
    printf("enter the character to be checked \n");
    scanf("%c",&ch);    
    upperlower(ch);
}
int upperlower(char c)
{
    if(c>='A' && c<='Z')
    {
        printf("the character %c is an uppercase alphabet\n",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("the character %c is a lowercase alphabet\n",c);    
    }
    else if(c>='0' && c<='9')
    {
        printf("the character %c is a digit\n",c);    
    }
    else
    {
        printf("the character %c is a special character\n",c);    
    }
}