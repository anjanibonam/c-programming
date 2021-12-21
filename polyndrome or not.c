#include<stdio.h>
main()
{
	int n,x,z,sum=0;
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
	x=n%10;
    sum=(sum*10)+x;
	n=n/10;
	}
	printf("%d",sum);
	if(z==sum)
	{
		printf("\npolyndrome");
	}
	else
	{
		printf("\nnot polyndrome");
	}
}
