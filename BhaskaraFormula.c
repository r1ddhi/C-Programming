/*
20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to 
find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float x, y;
    printf("Input the first number(a): ");
    scanf("%f",&a);
    printf("Input the second number(a): ");
    scanf("%f",&b);
    printf("Input the third number(a): ");
    scanf("%f",&c);
    printf("The equation is : %.2f x^2 + %.2f x + %.2f = 0 \n",a,b,c);

    x= (-b + (sqrt((pow(b,2))-(4*a*c))))/(2*a);
    y = (-b - (sqrt((pow(b,2))-(4*a*c))))/(2*a);
    printf("%.5f\n",x);
    printf("%.5f\n",y);
    return 0;

}