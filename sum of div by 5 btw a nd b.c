#include<stdio.h>
main()
{
	int a,b,s=0,p;
	scanf("%d%d",&a,&b);
	for(;a<=b;a++)
	{
		if(a%5==0)
		{
		s=s+a;
		}
	}
	printf("%d",s);
}
