/*
32. Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Input an integer : ");
    scanf("%d",&num);
    for (int i = 1; i <=100; i++)
    {
        if (i%num==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    
}