#include<stdio.h>
struct date
{
	int dd,mm,yyyy;
};
struct employee
{
	int eid;
	char name[20];
	float esal;
	struct date dob;
	struct date doj;
	char dept[20];
};
main()
{
	struct employee e[10];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d%s%f%d%d%d%d%d%d%s",&e[i].eid,&e[i].name,&e[i].esal,&e[i].dob.dd,&e[i].dob.mm,&e[i].dob.yyyy,&e[i].doj.dd,&e[i].doj.mm,&e[i].doj.yyyy,&e[i].dept);

	}
	for(i=0;i<5;i++)
	{
		printf("%d%s%f%d%d%d%d%d%d%s",e[i].eid,e[i].name,e[i].esal,e[i].dob.dd,e[i].dob.mm,e[i].dob.yyyy,e[i].doj.dd,e[i].doj.mm,e[i].doj.yyyy,e[i].dept);

	}
}
