/*
64. Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
Input a positive integer:
Input next positive integer: 15
Input next positive integer: 25
Input next positive integer: 37
Input next positive integer: 43
Number of positive values entered is 4
Maximum value entered is 43
Minimum value entered is 15
Average value is 30.0000
*/
#include<stdio.h>
int main()
{
    int l=2,num[l],avg,max,min;
    printf("Input a positive integer:\n");
    for (int i = 0; i < l; i++)
    {
        printf("Input next positive integer: \n");
        scanf("%d",&num[i]);
        l++;
    }
    for (int i = 0; i < l; i++)
    {
        if (num[i+1]<num[i])
        {
            min=num[i+1];
            max=num[i];
        }
        avg+=num[i];
    }
    printf("Maximum value entered is %d\n",max);
    printf("Minimum value entered is %d\n",min);
}