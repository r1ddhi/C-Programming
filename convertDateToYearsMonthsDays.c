/*
8. Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
Months: 7(taking default month of 30)
*/
#include <stdio.h>
int main()
{
    int days,weeks,months,years,solo_days;
    printf("Enter the number of days : ");
    scanf("%d",&days);
    if (days >= 0)
    {
        years = days/365;
        weeks = (days%365)/7;
        months = (days%365)/30;
        solo_days = (days%365)%7;
    }
    else 
    {
        printf("Enter valid input");
    }
    
    printf("Years: %d\nWeeks : %d\nDays : %d\nMonths : %d",years,weeks,solo_days,months);
    return 0;
    
}