#include <stdio.h>
int main(void) 
{
  int a,b,c,x,y,d,xi,xz;
  scanf("%d\n%d\n%d",&a,&b,&c);
  y=a*(x*x)+(b*x)+c;
  d=(b*b)-(4*a*c);
  xi=(-b+sqrt(d))/(2*a),xz=(-b-sqrt(d))/(2*a);
  printf("Root 1:%d",xi);
  printf("\nRoot 2:%d",xz);
  switch(d>0)
  case 1:printf("\nRoots are Real");
  switch(d==0)
  case 1:printf("\nRoots are equal");
  switch(d<0)
  case 1:printf("\nRoots are Imaginary");
}
  	
