/*
39. Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521
*/
#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("Input the first number : ");
    scanf("%d",&num1);
    printf("Input the second number : ");
    scanf("%d",&num2);
    for (int i = num1; i <=num2; i++)
    {
            if (num1%17 != 0)
            {
                sum+=num1;
            }
            num1++;
    }
    printf("%d",sum);
    return 0;
}