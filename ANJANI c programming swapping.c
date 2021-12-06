#include<stdio.h>
main()
{
	int a,b,c;
	printf("entre first no.");
	scanf("%d",&a);
	c=a;
	printf("entre second no.");
	scanf("%d",&b);
	a=b;
	b=c;
	printf("a is %d",a);
	printf("\n b is %d",b);
}
