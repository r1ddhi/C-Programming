/*
35. Write a C program to check if two numbers in a pair are in ascending order or descending order.
Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
The pair is in descending order!
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Input first number of the pair: ");
    scanf("%d",&num1);
    printf("Input second number of the pair: ");
    scanf("%d",&num2);
    if (num1<num2)
    {
        printf("The pair is in ascending order!");
    }
    else
    {
        printf("The pair is in descending order!");
    }
    return 0;
}