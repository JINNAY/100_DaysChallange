//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int vow(char ca);
void main()
{
    char ch;
    printf("enter the character to be checked \n");
    scanf("%c",&ch);    
    vow(ch);
}
int vow(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("the character %c is a vowel\n",c);
    }
    else
    {
        printf("the character %c is a consonant\n",c);    
    }
}