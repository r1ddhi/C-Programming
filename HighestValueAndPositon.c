/*
33. Write a C program that accepts some integers from the user and finds the highest value and the input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5
*/
#include<stdio.h>
int main()
{
    int number[5],max,num_pos;
    int i;
    printf("Input 5 integers : ");
    for (int t = 0; t < 5; t++)
    {
        scanf("%d",&number[t]);
    }
    
    for (i = 0; i < 5; i++)
    {
        if (number[i]>max)
        {
            max=number[i];
            num_pos=i;
        }   
    }
    printf("Highest value : %d\n",max);
    printf("Position : %d",num_pos+1);
    return 0;
    
}