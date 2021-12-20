#include<stdio.h>
main()
{
	int i=1,j=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
	j=j*i;
	i=i+1;
	}
	printf("the factorial of %d is : %d",n,j);
}
