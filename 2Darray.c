#include<stdio.h>
int main()
{
	int a[2][3]={12,23,34,45,56,67};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
