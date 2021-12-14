#include<stdio.h>
int main()
{
	int m;
	printf("Enter the Month:");
	scanf("%d",&m);
	switch(m)
	{
	case 1:printf("31 Days in Jan");
			break;
	case 2:printf("28 Days in Feb");
			break;
	case 3:printf("31 Days in March");
			break;
	case 4:printf("30 Days in April");
			break;
	case 5:printf("31 Days in May");
			break;
	case 6:printf("30 Days in June");
			break;
	case 7:printf("31 Days in July");
			break;
	case 8:printf("31 Days in Aug");
			break;
	case 9:printf("30 Days in Sep");
			break;
	case 10:printf("31 Days in Oct");
			break;
	case 11:printf("30 Days in Nov");
			break;
	case 12:printf("31 Days in Dec");
			break;
	default:printf("Enter Valid Month Num");
	}
}
