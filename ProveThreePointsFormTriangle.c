/*
CONDITIONS TO CHECK POINTS : sum of 2 sides > third side
23. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0
*/
#include <stdio.h>
int main()
{
    int p1,p2,p3;
    printf("Input the first number: ");
    scanf("%d",&p1);
    printf("Input the second number: ");
    scanf("%d",&p2);
    printf("Input the third number: ");
    scanf("%d",&p3);
    if ((p1+p2)>p3 && (p2+p3)>p1 && (p3+p1)>p2) 
    {
        printf("Perimeter : %d",(p1+p2+p3));
    }
    else
    {
        printf("The points do not construct a triangle");
    }
    return 0 ;
}