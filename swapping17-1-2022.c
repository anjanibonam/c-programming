#include<stdio.h>
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("before swapping %d %d",x,y);
	swap(&x,&y);
	printf("after swapping %d %d",x,y);
	return 0;
}
