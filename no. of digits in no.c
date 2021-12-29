#include<stdio.h>
main()
{
	int a,s=0;
	scanf("%d",&a);
	for(;a!=0;)
	{
		if(a%10!=0)
		{
		s++;
		a=a/10;
		}
	}
	printf("%d",s);
}
