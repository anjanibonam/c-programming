#include<stdio.h>
main()
{
	int math,sci,soc,lang,eng,s,p;
	scanf("%d\n%d\n%d\n%d\n%d",&math,&sci,&soc,&lang,&eng);
	s=eng+math+soc+sci+lang;
	p=s*100/500;
	printf("%d",s);
	printf("\n%d",p);
	if(p>90)
	{
		printf("\ngrade A");
	}
	else if (p>80)
	{
		printf("\ngrade B");
	}
	else if (p>70)
	{
		printf("\ngrade C");
	}
	else if (p>40)
	{
		printf("\ngrade D");
	}
	else 
	{
		printf("\ngrade E");
	}
}
