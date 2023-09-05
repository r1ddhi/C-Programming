/*
61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
Input value of x: .6235
Value of sin(1/x) is 0.9995
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result;
    printf("Input value of X: \n");
    scanf("%lf",&num);
    if (num>=0)
    {
        result= sin(1/num);
        printf("Output: %.4lf",result);
    }
    else
    {
        printf("Enter valid input");
    }
    
    return 0;
}