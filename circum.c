//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

void main()
{
	float radius;

	printf("enter the radus of the circle\n");
    
	scanf("%f", &radius);

	printf("the circumference of the circle with radius %f is: %f\n", radius, 2 * (22.0 / 7) * radius);
	printf("the area of the circle with radius %f is: %f\n", radius, (22.0 / 7) * (radius * radius));
}
