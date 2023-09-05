/*
21. Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is
negative and greater than 80.
Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]
*/
#include <stdio.h>
int main()
{
    int integer;
    printf("Input an integer:");
    scanf("%d",&integer);
    if (integer>=0 && integer<80)
    {
        if (20>=integer>=0)
        {
            printf("Range[0,20]");
        }
        else if (40>=integer>=20)
        {
            printf("Range[20,40]");
        }
        else if (60>=integer>=40)
        {
            printf("Range[40,60]");
        }
        else
        {
            printf("Range[60,80]");
        }
    }
    else
    {
        printf(" Please enter a valid input ( Conditions input non negative and less than 80 ) ");
    }
    return 0;
}