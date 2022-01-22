#include<stdio.h>
void gcd(int a,int b)
{
	int i;
	for(i=1;i<=a*b;i++)
	{
	if(i%a==0&&i%b==0)
	{
		printf("gcd is %d",(a*b)/i);
		break;
	}
	}
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	gcd(x,y);
}
