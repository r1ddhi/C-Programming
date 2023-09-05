/*
53. Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000
*/
#include <stdio.h>
int main()
{
    int principle,rate,time,simpleInterest;
    printf("Input principle: \n");
    scanf("%d",&principle);
    printf("Input rate of interest: \n");
    scanf("%d",&rate);
    printf("Input time: \n");
    scanf("%d",&time);
    simpleInterest=(principle*rate*time)/100;
    printf("Simple interest: %d",simpleInterest);
    return 0;
}