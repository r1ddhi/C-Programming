/*
57. Write a C program to reverse and print a given number.
Input a number:
The original number = 234
The reverse of the said number = 432
*/
#include <stdio.h>
int main ()
{
    int string[50],n;
    printf("Enter the number of characters: \n");
    scanf("%d",&n);
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d",&string[i]);
    }
    printf("Reverse of the string : ");
    for (int i = n-1 ; i > 0; i++)
    {
        printf("%d",string[i]);
    }
    return 0;
}