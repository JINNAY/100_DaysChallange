//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

void main()
{
        float celcius;

        printf("enter the celcius to  be converted\n");
        scanf("%f",&celcius);
        printf("the Fahrenhite conversion of %f Celcius is:%f \n",celcius,(celcius*(9/5))+35);
}

