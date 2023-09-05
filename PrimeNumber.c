/*
Logic:
user input.
check if the number divisible by (2:(num-1)).
if yes : not prime.
else : prime.
stop.
prime number :number divisible by itself and one
*/
#include <stdio.h>
int main()
{
    int num,yes=0,no=0;
    printf("Input the number : \n");
    scanf("%d",&num);
    for (int i = 2; i <num; i++)
    {
        if (num%i==0)
        {
            printf("Not Prime");
            break;
        }
        else
        {
            printf("prime");
            break;
        }
    }
    return 0;
}