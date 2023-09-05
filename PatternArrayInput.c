/*
49. Write a C program to read and print the elements of an array with length 5. Before printing, insert the triple of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
Test Data:
Input the first number of the array: 5
Expected Output:
n[0] = 5
n[1] = 15
n[2] = 45
n[3] = 135
n[4] = 405
*/
#include <stdio.h>
int main()
{
    int numbers[5],tmp;
    printf("Input the first number of the array:");
    scanf("%d",&tmp);
    for (int i = 0; i < 5; i++)
    {
        numbers[i]=tmp;
        tmp*=3;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("n[%d] = %d\n",i,numbers[i]);
    }
    return 0;
}
