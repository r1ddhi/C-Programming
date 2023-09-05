/*
15. Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

#include<stdio.h>
#include <math.h>
int main()
{
    int X1,X2,Y1,Y2;
    float distance ;
    printf("Input X1: ");
    scanf("%d",&X1);
    printf("Input Y1: ");
    scanf("%d",&Y1);
    printf("Input X2: ");
    scanf("%d",&X2);
    printf("Input Y2: ");
    scanf("%d",&Y2);
    distance = sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
    printf("%.4f",distance);
    return 0;

}