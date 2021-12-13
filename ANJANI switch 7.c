#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch (a%2)
	{
       case 0:printf("even");break;
       default:printf("odd");
       }
}

