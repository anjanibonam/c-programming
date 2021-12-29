#include<stdio.h>
main()
{
	int i,n,f=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("%d is not prime",n);
	}
	else 
	{
		printf("%d is prime",n);
	}
}
