#include<stdio.h>
int main()
{
	int a,b,c,D;
	printf("enter the values of variables in the quadratic equation\n");
	scanf("%d%d%d",&a,&b,&c);
	D=(b*b)-(4*a*c);
	if(D>0)
	{
		printf("eqation has real and distinct roots");
	}
	if(D<0)
	{
		printf("eqation has imaginary roots");
	}
	if(D==0)
	{
		printf("eqation has real and equal roots");
	}
	return 0;
}
