/*
18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
*/
#include<stdio.h>
int main()
{
    int Tdays,years,months,Rdays;
    printf("Input no. of days : ");
    scanf ("%d",&Tdays);
    if (Tdays >= 0)
    {
        
        years = Tdays/365;
        months = (Tdays - (years*365))/30;
        Rdays = (Tdays - (years*365)-(months*30));
        printf("%d Year\n%d Months\n%d Days\n ",years,months,Rdays);
    }
    

}