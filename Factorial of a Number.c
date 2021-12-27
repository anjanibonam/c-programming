#include<stdio.h>
main()
{
    int n,i=1,f=1;
    scanf("%d",&n);
    do
    {
        f=f*i;
        i++;
    }while(i<=n);
    printf("\n The Factorial of %d is %d",n,f);
}
