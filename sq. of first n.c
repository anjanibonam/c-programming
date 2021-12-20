#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
	sum=sum+(i*i);
	i=i+1;
	printf("\n%d",sum);
	}
	printf("\ntotal sum is%d",sum);
}
