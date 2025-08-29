//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
void main()
{
	int breth,length,area;

	printf("enter the breth of the rectangle \n");

	scanf("%d",&breth);

        printf("enter the lenght of the rectangle \n");

	scanf("%d",&length);
        printf("the premiter of rectangle of length %d and breth %d is: %d \n",length,breth,2*(length+breth));
	printf("the area of rectangle of length %d and breth %d is: %d \n",length,breth,length*breth);
}
