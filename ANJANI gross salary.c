#include<stdio.h>
main()
{
	float basic,hri,da,gross_salary;
	scanf("%f",&basic);
	if(basic<=1000)
	{
		hri=(basic*20/100);
		da=(basic*80/100);
		gross_salary=basic+hri+da;
		printf("%f",gross_salary);
	}
	else if (basic<=2000)
	{
		hri=(basic*25/100);
		da=(basic*90/100);
		gross_salary=basic+hri+da;
		printf("%f",gross_salary);
	}
	else if (basic>2000)
	{
		hri=(basic*30/100);
		da=(basic*95/100);
		gross_salary=basic+hri+da;
		printf("%f",gross_salary);
	}
	else
	{
		printf("nothing");
	}
}
