//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int classify_triangle(int a, int b, int c);
void main()
{       
    int side1, side2, side3;
    printf("enter the three sides of the triangle \n");
    scanf("%d %d %d",&side1,&side2,&side3);
    classify_triangle(side1,side2,side3);
}
int classify_triangle(int a, int b, int c)
{
    if(a==b && b==c)
    {
        printf("the triangle with sides %d, %d and %d is Equilateral\n",a,b,c);
    }
    else if(a==b || b==c || a==c)
    {
        printf("the triangle with sides %d, %d and %d is Isosceles\n",a,b,c);
    }
    else    
    {
        printf("the triangle with sides %d, %d and %d is Scalene\n",a,b,c);
    }
}
