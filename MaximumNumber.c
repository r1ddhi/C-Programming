/*
13. Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Input the first integer: ");
    scanf("%d",&num1);
    printf("Input the second integer: ");
    scanf("%d",&num2);
    printf("Input the third integer: ");
    scanf("%d",&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("Maximum value of three numbers: %d",num1);
        }
        
    }
    else if (num2>num1)
    {
        if (num2>num3)
        {
            printf("Maximum value of three numbers: %d",num2);
        }
    }
    else if (num3>num1)
    {
        if (num3>num2)
        {
            printf("Maximum value of three numbers: %d",num3);
        }
    }
    return 0;
}