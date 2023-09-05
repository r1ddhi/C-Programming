/*
41. Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
3 2 1 
6 5 4 
9 8 7 
12 11 10 
15 14 13 
*/
#include <stdio.h>
int main()
{
    int n,j=1;
    printf("Input the lines : ");
    scanf("%d",&n);
    for (int i = 1; i <= n;i++)
    {
        printf("%d %d %d \n",j,j++,j++);
        j++;
    }
    return 0;
}