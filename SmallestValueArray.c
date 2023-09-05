/*
52. Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int length,number[length],tmp,pos=0;
    printf("Input the length of the array: ");
    scanf("%d",&length);
    printf("Input the array element(smallest to biggest): ");
    for (int k = 0; k < length; k++)
    {
        scanf("%d\n",&number[k]);
    }
    for (int i = 0 ; i < length; i++)
    {
        for (int j = i+1 ; j < length ; j++)
        {
            if (number[i] < number[j])
            {
                tmp = number[i];
                pos=i;
            }
        }
    }
    printf("smallest value: %d",tmp);
    return 0;
}
