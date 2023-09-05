/*
6. Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("PERIMETER: %.2f\n", 3.14*radius );
    printf("AREA: %.2f", 2*3.14*radius);
    return 0;
}