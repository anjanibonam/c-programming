#include<stdio.h>
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	printf("a is %d",a);
	printf("\nb is %d",b);
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	swap(x,y);
}
