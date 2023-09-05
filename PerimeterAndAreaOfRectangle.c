/*
5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/
#include <stdio.h>
int main()
{
    int height, width;
    printf("Enter the height of rectangle : ");
    scanf("%d",&height);
    printf("Enter the width of rectangle : ");
    scanf("%d",&width);
    printf("PERIMETER: %d \n",2*(height+width));
    printf("AREA: %d",(height*width));
    return 0;
}