/*
48. Write a C program that reads and prints the elements of an array of length 5. Before printing, replace every negative number, zero, with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15

Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15
*/
#include <stdio.h>
int main()
{
    int number[5],x;
    printf("Input the 5 members of the array:\n");
    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d\n",&x);
        if (x>0)
        {
            number[i]=x;
        }
        else
        {
            number[i]=100;
        }
        
    }
    printf("Array values are :\n");
    for (int i = 0; i < 5 ; i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;
}