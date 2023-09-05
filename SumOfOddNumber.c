/*
22. Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46
*/
#include <stdio.h>
int main()
{
    int number[5],sum=0;
    printf("Input the first number:");
    scanf("%d",&number[1]);
    printf("Input the second number:");
    scanf("%d",&number[2]);
    printf("Input the third number:");
    scanf("%d",&number[3]);
    printf("Input the fourth number:");
    scanf("%d",&number[4]);
    printf("Input the fifth number:");
    scanf("%d",&number[5]);
    // sum = a+b+c+d+e;
    // if (a%2==0)
    // {
    //     printf("Sum of all odd values: %d",(sum-a));
    // }
    // else if (b%2==0)
    // {
    //     printf("Sum of all odd values: %d",(sum-b));
    // }
    // else if (c%2==0)
    // {
    //     printf("Sum of all odd values: %d",(sum-c));
    // }
    // else if (d%2==0)
    // {
    //     printf("Sum of all odd values: %d",(sum-d));
    // }
    // else if (e%2==0)
    // {
    //     printf("Sum of all odd values: %d",(sum-e));
    // }
    for (int i = 1 ;i <=5 ;i++)
    {
        if ((number[i]%2) !=0)
        {
            sum+=number[i];
        }  
        // printf("%d\n",sum);
    }
    printf("Sum of all odd values : %d",sum);
    return 0;
}