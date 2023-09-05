/*
 Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/
#include <stdio.h>
int main()
{
    int amount,total;
    int hundred,fifty,twenty,ten,five,two,one;
    printf("Input the amount: ");
    scanf("%d",&amount);
    if (amount >= 0)
    {
        hundred = amount/100;
        fifty = (amount-(hundred*100))/50;
        twenty = (amount-(hundred*100)-(fifty*50))/20;
        ten = (amount-(hundred*100)-(fifty*50)-(twenty*20))/10;
        five = (amount-(hundred*100)-(fifty*50)-(twenty*20)-(ten*10))/5;
        two = (amount-(hundred*100)-(fifty*50)-(twenty*20)-(ten*10)-(five*5))/2;
        one= (amount-(hundred*100)-(fifty*50)-(twenty*20)-(ten*10)-(five*5)-(two*2))/1;
        printf("%d 100.00 \n%d 50.00 \n%d 20.00\n%d 10.00 \n%d 5.00 \n%d 2.00 \n%d 1.00\n" , hundred,fifty,twenty,ten,five,two,one);
    }
    else
    {
        printf("!!enter valid input!!");
    }
    return 0;
    
}