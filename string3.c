#include<stdio.h>
int main()
{
	char s[100]="hello";
	int c=0,i;
	for(i=0;i<100;i++)
	{
		if(s[i]=='\0')
		break;
		else
		c++;
	}
	printf("%d",c);
}
