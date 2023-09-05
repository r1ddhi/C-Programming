/*
28. Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00
*/
#include <stdio.h>
int main()
{
    int number[5],positive[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the numbers : \n");
        scanf("%d",&number[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if (number[j]>=0)
        {
            positive[j]=number[j];
        }
    }
    printf("Positive:\n");
    for (int m = 0; m < 5; m++)
    {
        if (positive[m]>0)
        {
            printf("%d\n",positive[m]);
        }
    }
    return 0;
}