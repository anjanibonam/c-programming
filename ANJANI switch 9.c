#include<stdio.h>
main()
{
	int a,b;
	scanf("%d\n%d",&a,&b);
	switch(a>b)
	{
		case 0:printf("b is max");break;
		case 1:printf("a is max");break;
	}
}
