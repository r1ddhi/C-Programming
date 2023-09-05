/*
40. Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
Test Data :
Input the first integer: 25
Input the second integer: 45
Expected Output:
30
31
37
38
44
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Input the first number : ");
    scanf("%d",&num1);
    printf("Input the second number : ");
    scanf("%d",&num2);
    for (int  i = num1; i < num2; i++)
    {
        if (i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    
}