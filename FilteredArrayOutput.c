/*
50. Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0
*/
#include <stdio.h>
int main()
{
    int number[5];
    printf("Input the 5 members of the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n",&number[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (number[i]<5)
        {
            printf("n[%d] = %d\n",i,number[i]);
        }
    }
    return 0;
}