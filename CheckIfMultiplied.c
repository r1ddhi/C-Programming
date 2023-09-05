/*
24. Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!
*/
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Input the first number: ");
    scanf("%d",&num1);
    printf("Input the second number: ");
    scanf("%d",&num2);
    if (num2%num1==0)
    {
        printf("Multiplied!");
    }
    else
    {
        printf("Not Multiplied!");
    }
    return 0;
}