/*
29. Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34
*/
#include <stdio.h>
int main()
{
    int number[5],odd[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number : \n");
        scanf("%d",&number[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if (number[j]%2!=0)
        {
            odd[j]=number[j];
        }
    }
    for (int m = 0; m < 5; m++)
    {
            sum+=odd[m];
    }
    printf("Sum of all odd values: %d",sum);
    return 0;
}