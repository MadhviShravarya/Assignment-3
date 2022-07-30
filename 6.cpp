#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two nos:\n");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("both no are same");
	}
	a>b?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
	
	
	return 0;
}
