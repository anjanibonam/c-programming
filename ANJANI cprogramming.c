#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("enter first no.");
	scanf("%f",&a);
	printf("enter second no.");
	scanf("%f",&b);
	c=a/b;
	printf("%f",c);
	d=(c*a)-b;
	printf("\n%f",d);
}
