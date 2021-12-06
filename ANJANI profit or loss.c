#include<stdio.h>
main()
{
	int sp,cp,z;
	scanf ("%d%d",&sp,&cp);
	if(sp>cp)
	{
		z=sp-cp;
		printf("profit of %d",z);
	}
	else
	{
		z=cp-sp;
		printf("loss of %d",z);
	}
}
