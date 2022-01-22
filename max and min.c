#include<stdio.h>
void maxmin(int*,int*,int*,int*);
int main(void)
{
	int x,y,l,g;
	scanf("%d%d",&x,&y);
	maxmin(&x,&y,&l,&g);
	printf("\nthe max is %d and min is %d",l,g);
	return 0;
}
void maxmin(int*a,int*b,int*max,int*min)
{
	if(*a>*b)
	{
		*max=*a;
		*min=*b;
	}
	else
	{
		*max=*b;
		*min=*a;
	}
}
