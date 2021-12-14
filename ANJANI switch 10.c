#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch(a>0)
	{
	case 1:printf("positive");break;
	case 0:printf("negative");break;
	default:printf("zero");
	}
}
	
