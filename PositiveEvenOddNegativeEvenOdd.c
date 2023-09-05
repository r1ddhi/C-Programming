/*
31. Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd
Click me to see the solution
*/
#include <stdio.h>
int main()
{
    int input;
    printf("Input an integer : ");
    scanf("%d",&input);
    if (input%2==0 && input>=0)
    {
        printf("Positive Even");
    }
    else if (input%2!=0 && input>=0)
    {
       printf("Positive Odd ");
    }
    else if (input%2==0 && input<0)
    {
       printf("Negative Even ");
    }
    else
    {
        printf("Negative Odd");
    }
    return 0;
}