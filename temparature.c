#include<stdio.h>
int main()
{
	char x;
	printf("Enter Grade:");
	scanf("%c",&x);
	if(x=='E' | x=='e')
	printf("Excellent");
	if(x=='V' | x=='v')
	printf("Very Good");
	if(x=='G' | x=='g')
	printf("Good");
	if(x=='A' | x=='a')
	printf("Average");
	if(x=='F' | x=='f')
	printf("Fail");
}
