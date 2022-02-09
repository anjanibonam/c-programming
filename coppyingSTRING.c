#include<stdio.h>
main()
{
	char s[5],t[5];
	int n,i;
	printf("scan string ");
	scanf("%s",s);
	for(i=0;s[i]|=0;i++)
	{
		t[i]=s[i];
	}
	printf("\nt string is %s",t);
}
