/*
51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15
*/
#include <stdio.h>
#define AL 5
int main()
{
    int num[AL];
    printf("Input the 5 members of the array:\n");
    for (int i = AL-1; i >= 0; i--)
    {
        scanf("%d\n",&num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("array_n[%d] = %d\n",i,num[i]);
    }
    return 0;    
}