#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter 3 nos:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
		{
			printf(" %d is the greatest no",a);
		}
		else
		printf(" %d is the greatest no",c);
	}
	if(b>a)
	{
		if(b>=c)
		{
			printf(" %d is the greatest no",b);
		}
		else
		printf(" %d is the greatest no",c);
	}
	
	return 0;
}
