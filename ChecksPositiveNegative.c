/*
27. Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2
*/
#include<stdio.h>
int main()
{
    int number[5],positive,negative;
    positive=0;
    negative=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the numbers : \n");
        scanf("%d",&number[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if (number[j]>=0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
    
    
}
