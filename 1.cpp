#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if(n>=1)
	{
		printf("%d is a positive number",n);
	}
	else
	{
		printf("%d is a non positive number",n);
	}
	return 0;
}
