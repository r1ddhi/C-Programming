/*
12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/
#include<stdio.h>
int main()
{
    char emp_id[10];
    double hours,salary_hr;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s",&emp_id);
    printf("Input the working hrs: ");
    scanf("%lf",&hours);
    printf("Salary/hr : ");
    scanf("%lf",&salary_hr);
    printf("Employees ID: %s",emp_id);
    printf("\nSalary = U$ %.2f",salary_hr*hours);
    return 0 ;
}