#include<stdio.h>
void number(int a)
{
	if(a%4==0)
	{
		printf("%d is leap",a);
	}
	else
	{
		printf("%d is not leap",a);
	}
}
int main(void)
{
	int a;
	scanf("%d",&a);
	number(a);
}
