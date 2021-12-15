#include<stdio.h>
main()
{
	int n,s=0;
	scanf("%d",&n);
	int i=1;
	while(i<n)
	{
	printf("\n%d",i);
	s=s+i;
	i=i+1;
	}
	printf("sum is %d",s);
}
