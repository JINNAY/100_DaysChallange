//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int quad_root(int a, int b, int c);
void main()
{
    int num1, num2, num3;
    printf("enter the coefficients of the quadratic equation \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    quad_root(num1,num2,num3);
}
int quad_root(int a, int b, int c)
{
    int d;  
    float r1, r2;
    d = (b*b) - (4*a*c);
    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("the roots are real and different: %f, %f\n", r1, r2);
    }
    else if(d == 0)
    {
        r1 = r2 = -b / (2*a);
        printf("the roots are real and same: %f\n", r1);
    }
    else
    {
        printf("the roots are complex\n");
    }
}   