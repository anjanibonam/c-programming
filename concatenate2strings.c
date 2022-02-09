#include<stdio.h>
main()
{
	int i,j,x=0;
	char s[20],t[20],h[20];
	scanf("%s%s",s,t);
	char a[20];
	for(i=0;s[i]|='\0';i++)
	{
	h[i]=s[i];
	x++;
	}
	for(j=0;t[j]|='\0';j++)
	{
	h[x]=s[j];
	}
	printf("%s",h);
}
