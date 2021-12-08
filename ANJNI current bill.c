#include<stdio.h>
main()
{
	int unit;
	float x,total_x,sur_charge;
	scanf("%d",&unit);
	if(unit<=50)
	{
	       x=unit*0.50;	
	}
	else if(unit<=150)
	{
		x=100+((unit-150)*0.75);
	}
	else if (unit<=250)
	{
		x=100+((unit-150)*1.20);
	}
	else
	{
		x=220+((unit-250)*1.50);
	}
	sur_charge=x*0.20;
	total_x=x+sur_charge;
	printf("bill=rs-%2f",total_x);
}
