/*
38. Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Input two number : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1%num2 == 0)
    {
        printf("Output : %d",num1/num2);
    }
return 0;
}