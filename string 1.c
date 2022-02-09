#include<stdio.h>
int main()
{
	char a[20]="anjani";
	int sum=0,i;
	for(i=0;i<20;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	    sum++;
	}
	printf("no. of vowels are : %d",sum);
}
