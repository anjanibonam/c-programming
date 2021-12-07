#include<stdio.h>
main()
{
	int a,b,c,d,x,y,xi,xz;
	scanf("%d\n%d\n%d",&a,&b,&c);
	y=a*(x*x)+(b*x)+c;
	d=(b*b)-(4*a*c);
	xi=(-b+sqrt(d))/(2*a);
	xz=(-b-sqrt(d))/(2*a);
	printf("root1:%d",xi);
	printf("\nroot2:%d",xz);
	if(d>0)
       printf("\nroot is real");
       if(d==0)
       printf("\nroots are real");
       if(d<0)
       printf("\nroots are imaginary");
       return 0;

}
