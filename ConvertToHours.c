/*
17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/
#include<stdio.h>
int main()
{
    int seconds,hours,minutes,rseconds ;
    printf("Input seconds: ");
    scanf("%ld",&seconds);
    /*
    Logic
    hours : input seconds / 3600
    minutes : (input seconds % 3600)/60
    remaining seconds : */
    hours= seconds/3600;
    printf("%ld HOURS\n",hours);
    minutes = (seconds - (3600*hours))/60;
    printf("%ld MINUTES\n",minutes);
    rseconds = (seconds - (hours*3600)-(minutes*60));
    printf("%ld SECONDS ", rseconds);
    return 0;
}