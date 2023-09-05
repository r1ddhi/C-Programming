/*
63. Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case, m is less than or equal to n. Print an appropriate message.
Input a positive number less than 100: 68
Sum of the series is 37361622
*/
#include<stdio.h>
#include<math.h>
// int power(int n)
// {
//     int sum,power;
//     power=pow(n,4);
//     // sum+=power;
//     return 0;
// }
int main()
{
    int num,value=0,power;
    printf("Input a positive number less than 100: ");
    scanf("%d",&num);
    if (num<100 && num>0)
    {
        for (int i = 1; i <=num; i++)
        {
            power=pow(i,4);
            printf("%d\n",power);
            printf("%d\n",i);
            value+=power;
        }
        
    }
    printf("%d",value);
    return 0;
    
}