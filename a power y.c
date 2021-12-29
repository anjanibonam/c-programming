#include<stdio.h>
main() 
{
    int a,b,x= 1, i = 1;
    scanf("%d%d", &a, &b);
    while(i<=b) 
	{
    x*= a;
    i++;
    }   
    printf("\nResult: %d^%d = %d\n",a,b,x);
}
