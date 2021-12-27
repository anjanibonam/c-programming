#include<stdio.h>
main()
{
	int n,p;
	int i=1;
	scanf("%d",&n);
	while(i<=12)
	{
	p=i*n;
	printf("%d*%d=%d",n,i,p);
	i++;
	}
}
