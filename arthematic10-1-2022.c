#include<stdio.h>
void arthematic(int a,int b);
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	arthematic(a,b);
	return 0;
}
void arthematic(int a,int b)
{
	int c=a+b;
	int d=a-b;
	int e=a*b;
	float f=a/b;
	int g=a%b;
	printf("\n%d",c);
	printf("\n%d",d);
	printf("\n%d",e);
	printf("\n%f",f);
	printf("\n%d",g);
}
