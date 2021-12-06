#include<stdio.h>
main()
{
	int x;
	scanf("%c",&x);
	if(64<x&&x<91)
	{
		printf("uppercase");
	}
	else
	{
		if(96<x&&x<123)
		{
			printf("lowercase");
		}
	}
}
