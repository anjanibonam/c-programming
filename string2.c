#include<stdio.h>
int main()
{
	char s[100]="hello";
	//length of s=5;
	int c=0,i;
	for(i=0;s[i]!=0;i++)
	{
		c++;
	}
	printf("%d",c);
}
