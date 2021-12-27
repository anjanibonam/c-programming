#include <stdio.h>
main()
{
int Number,a,b;
scanf("%d", & Number);
for(b= 1; Number > 0; Number = Number / 10)
{
a= Number % 10;
b= b*a;
}
printf(" \n The Product of Digits of a Given Number =  %d",b);
}
