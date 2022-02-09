#include<stdio.h>
int main()
{
	int a[5];
	int s=0;
	int i;
	for(i=0;i<5;i++)
	{
	scanf("\n%d",&a[i]);
	s=s+a[i];
    }
    printf("%d",s);
}
