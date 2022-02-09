#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k,sum=0;
	printf("entre no. of coulmns and rows for a \n");
	scanf("%d%d",&m,&n);
	printf("entre no. of coulmns and rows for b \n");
	scanf("%d%d",&p,&q);
	printf("entre elements in a \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matris is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("entre elements in b \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matris is \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	if(m==q)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
	}
	printf("product of matrices : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
