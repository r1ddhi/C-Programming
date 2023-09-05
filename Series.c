/*
45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50
*/
#include<stdio.h>
int main()
{
    float s=0 ,j=0;
    for (int i = 1; i <= 50; i++)
    {
            s+=((float)1/i);
    }
 printf("%.2f",s);
 return 0;    
}