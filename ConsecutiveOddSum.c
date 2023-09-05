/*
34. Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24
*/
#include <stdio.h>
int main()
{
    int n ,sum,first,last;
    int numbers[last],odd_num[last];
    printf("Input first number of the pair: ");
    scanf("%d",&first);
    printf("Input second number of the pair: ");
    scanf("%d",&n);
    last = n-first;
    for (int  i = 0; i <last; i++)
    {
        printf("%d ",first);
        numbers[i]=first;
        ++first;
    }
    printf("\nData\n");
    for (int  i = 0; i <last; i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("\nThe odd numbers are : ");
    for (int num = 0; num < last ; num++)
    {
        if ((numbers[num]%2) != 0)
        {
            printf("\n %d ",numbers[num]);
            sum+=numbers[num];
        }
    }
    printf("\nSum=%d",sum);
    
return 0;  
}