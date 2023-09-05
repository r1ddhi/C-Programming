/*
60. Write a C program to create enumerated data types for 7 days and display their values in integer constants.
Sun = 0
Mon = 1
Tue = 2
Wed = 3
Thu = 4
Fri = 5
Sat = 6
*/
#include <stdio.h>
int main()
{
/*
Enumeration or Enum in C is a special kind of data type defined by the user. It consists of constant integrals or integers that are given names by a user.
The use of enum in C to name the integer values makes the entire program easy to learn, understand, and maintain by the same or even different programmer.
*/
enum week{Sun, Mon, Tue, Wed, Thu, Fri, Sat};
printf("Sun = %d", Sun);
printf("\nMon = %d", Mon);
printf("\nTue = %d", Tue);
printf("\nWed = %d", Wed);
printf("\nThu = %d", Thu);
printf("\nFri = %d", Fri);
printf("\nSat = %d", Sat);
return 0;
}
