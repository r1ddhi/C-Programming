/*
47. Write a C program that finds all the divisors of an integer.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45
*/
#include <stdio.h>
int main()
{
    int inp;
    printf("Input an integer : ");
    scanf("%d",&inp);
    printf("All the divisor of %d: ",inp);
    for (int i = 1; i <=inp; i++)
    {
        if (inp % i==0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}