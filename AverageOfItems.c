/*
11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/
#include<stdio.h>
int main()
{
    double weight1,item1,weight2,item2,average;
    printf("Enter the first weight: ");
    scanf("%lf",&weight1);
    printf("Enter the number of item: ");
    scanf("%lf",&item1);
    printf("Enter the second weight: ");
    scanf("%lf",&weight2);
    printf("Enter the number of item: ");
    scanf("%lf",&item2);
    average=((weight1*item1)+(weight2*item2))/(item1+item2);
    printf("Average Value = %f",average);
    return 0 ;
}