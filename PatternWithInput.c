/*
43. Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
*/
#include <stdio.h>
int main()
{
    int lines, numbers ,newnum ;
    printf("Input the number of lines: ");
    scanf("%d",&lines);
    printf("Input the number of numbers in a line: ");
    scanf("%d",&numbers);
    newnum=1;
    for (int  i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= numbers; j++)
        {
            printf("%d ",newnum);
            newnum++;
        }
        printf("\n");
    }
    return 0;
}