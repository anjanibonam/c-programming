#include<stdio.h>
main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	while(c<=n)
	{
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
	}
}
