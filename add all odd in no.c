#include<stdio.h>
main()
{
	int a,s=0,p;
	scanf("%d",&a);
	for(;a!=0;)
	{
	p=a%10;
	if(p%2!=0)
	{
	s=s+p;
	}
	a=a/10;
	}
	printf("%d",s);
}
