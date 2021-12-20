#include<stdio.h>
main()
{
	int i=1,p,n;
	scanf("%d",&n);
	while(i<=12)
	{
	p=i*n;
	printf("\n%d*%d=%d",n,i,p);
	i++;
	}
}
