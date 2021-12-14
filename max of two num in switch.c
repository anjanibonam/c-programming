#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the Number:");
	scanf("%d",&x);
	printf("Enter the Number:");
	scanf("%d",&y);
	switch(x>y)
	{
		case 1:printf("x is max");
		break;
		case 0:printf("y is max");
	}
}
