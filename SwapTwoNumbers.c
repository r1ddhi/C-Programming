/*
55. Write a C program that swaps two numbers without using a third variable.
Input value for x & y:
Before swapping the value of x & y: 5 7
After swapping the value of x & y: 7 5
*/
#include <stdio.h>
int main()
{
    int num1,num2,tmp;
    printf("Input first number: \n");
    scanf("%d",&num1);
    printf("Input second number: \n");
    scanf("%d",&num2);
    printf("Before swapping the value is %d and %d\n",num1,num2);
    tmp=num1;
    num1=num2;
    num2=tmp;
    printf("After swapping the value is %d and %d\n",num1,num2);
}