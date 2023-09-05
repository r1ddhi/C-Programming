/*
fo=0 f1=1
f2=f1+f0=1
fn=f(n-1)+f(n-2)
*/
#include<stdio.h>
void Recursion(int n)
{
    int n3,n1,n2;
    n1=0;
    n2=1;
    // for (int i = 0; i < n; i++)
    // {     
        if (n>0)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
            printf("%d",n3);
        }
    }
   
// }
int main()
{
    int Uin,sum,n1,n2;
    printf("Enter the value of n: ");
    scanf("%d",&Uin);
    // n1=0;
    // n2=1;
    // for (int i = 0; i < Uin; i++)
    // {     
    //     if (Uin>0)
    //     {
    //         sum=n1+n2;
    //         printf("%d",sum);
    //         n1=n2;
    //         n2=sum;
    //     }
    // }
    Recursion(Uin);
    return 0;
}