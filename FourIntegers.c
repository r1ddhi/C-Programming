/*
19. Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and 
s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values
*/
#include <stdio.h>
int main()
{
    int p, q, r, s;
    printf("Input the second integer: ");
    scanf("%d",&p);
    printf("Input the third integer: ");
    scanf("%d",&q);
    printf("Input the fourth integer: ");
    scanf("%d",&r);
    if (r>=0 && q>=0 && s>=0 && p%2==0 && q>=r && s>=p && (r+s)>(p+q))
    {
        printf("Correct Values");
    }
    else
    {
        printf("Wrong values");
    }
    return 0;
}