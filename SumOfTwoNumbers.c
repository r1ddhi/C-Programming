/*
9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Sum of the above two integers = %d",(num1+num2));
    return 0;
}