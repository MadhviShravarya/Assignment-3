#include<stdio.h>
int main()
{
	float c,s,p,l;
	printf("enter the cost price\n");
	scanf("%f",&c);
	printf("enter the selling price\n");
	scanf("%f",&s);
	if(c>s)
	{
		l=(c-s)*100/c;
		printf("the loss percent is %f",l);
	}
	if(s>c)
	{
		p=(s-c)*100/c;
		printf("the profit percent is %f",p);
	}
	if(s==c)
	{
		printf("no loss no gain");
	}
	return 0;
}
