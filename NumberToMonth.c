/* 
25. Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
August
*/
#include<stdio.h>
int main()
{
    int inm;
    // for (int i=0; i<=11; i++)
    // {
    //    for (int j=1; j<=12; j++)
    //    {
    //         number[i]=j;
    //    }  
    // }
    for (int i = 0; i <=12; i++)
    {
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d",&inm);
    if (13>inm>0)
    {
    if (inm == 1)
        {
             printf("January\n");
        }
    else if (inm == 2)
        {
             printf("February\n");
        }
    else if (inm == 3)
        {
             printf("March\n");
        }
    else if (inm == 4)
        {
             printf("April\n");
        }
    else if (inm == 5)
        {
             printf("May\n");
        }
    else if (inm == 6)
        {
             printf("June\n");
        }
    else if (inm == 7)
        {
             printf("July\n");
        }
    else if (inm == 8)
        {
             printf("August\n");
        }
    else if (inm == 9)
        {
             printf("September\n");
        }
    else if (inm == 10)
        {
             printf("October\n");
        }
    else if (inm == 11)
        {
             printf("November\n");
        }
    else if (inm == 12)
        {
             printf("December\n");
        }
    
    }
    else
    {
        printf("Enter valid input");
    }
    }
    return 0;
}