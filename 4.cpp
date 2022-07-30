#include<stdio.h>
int main()
{
	int n;
	printf("enter a no\n");
	scanf("%d",&n);
	if(n&1)
	{
		printf("given no is odd");
	}
	else
	printf("given no is even");
	
	return 0;
}
