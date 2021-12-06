#include<stdio.h>
main()
{
	int earning,weeklyhours,hourlyrate;
	scanf("%d%d",&weeklyhours,&hourlyrate);
	if (weeklyhours<=40)
	{
		earning=hourlyrate*weeklyhours;
		printf("%d",earning);
	}
	else
	{
		earning=40*hourlyrate+(weeklyhours-40)*hourlyrate*1.5;
		printf("%d",earning);
	}
}
