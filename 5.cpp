#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a no\n");
	scanf("%d",&n);
	i=n/100;
	if(n/100)
	{
		if(i<=9)
		printf("given no is 3 digit no");
		else
		printf("given no is not 3 digit no");
	}
	else
	{
		printf("given no is not 3 digit no");
	}
	return 0;
}
