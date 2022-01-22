#include<stdio.h>
int temp(int f)
{
	int c=(f-32)*5/9;
	return c;
}
int main(void)
{
	int f;
	scanf("%d",&f);
	int t=temp(f);
	printf("%d",t);
	return 0;
}
