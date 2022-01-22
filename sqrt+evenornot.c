#include<stdio.h>
int sq(int a)
{
	return a*a;
}
void even(int b)
{
	if(b%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int z=sq(n);
	even(z);
}
