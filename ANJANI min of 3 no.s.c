#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a<b && a<c)
	printf("a is min");
	if(b<a && b<c)
	printf("b is min");
	if(c<a && c<b)
	printf("c is min");
}
