/*
62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
Input a positive number less than 500:
Sum of the digits of 347 is 14
*/
#include<stdio.h>
int main()
{
    int l,num,sum=0;
    printf("Input a positive number less than 500:");
    scanf("%d",&num);
    l=num;
    if (num<500)
    {
        sum+=num%10;
        l/=10;
        sum+=l%10;
        l /= 10;
        sum+=l%10;
        printf("Sum of the digits is :%d",sum);
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}