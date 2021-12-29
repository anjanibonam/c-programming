#include<stdio.h>  
main()
{
	int a,p,s=0;
	scanf("%d",&a);
	for(;a!=0;)
	{
	p=a%10;
	a=a/10;
	s=s+(p*p);
	}
	printf("%d",s);
}
