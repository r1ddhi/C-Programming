/*
This program will implement a one-dimentional array of some fixed size, 
filled with some random numbers, then will sort all the filled elements of the array
*/
#include<stdio.h>
int main()
{
    int l,number[30],numbers[30],tmp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d\n",&number[i]);
    }
    for (int i = 0; i < l; i++)
    {
        printf("n(%d) = %d\n",i,number[i]);
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if (number[i]>number[j])
            {
                tmp = number[i];
                number[i]=number[j];
                number[j]=tmp;
                printf("tmp= %d\n",tmp);
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        printf("n(%d)=%d\n",i,number[i]);
    }
    return 0;
}