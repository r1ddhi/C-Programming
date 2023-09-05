/*
54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches
*/
#include<stdio.h>
int main()
{
    float cm,inches;
    printf("Input cm: \n");
    scanf("%f",&cm);
    inches = cm/2.54;
    printf("Distance of %.2f cms is %.2f inches",cm,inches);
    return 0;
}