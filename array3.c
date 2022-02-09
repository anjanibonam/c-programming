#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("the given no. are ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nthe array elements are ");
	for(i=0;i<5;i++)
	{
	printf("\n%d",a[i]);
    }
}
