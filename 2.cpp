#include<stdio.h>
int main()
{
	int n;
	printf("enter a no:\n");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf("%d is divisible by 5",n);
	}
	else
	{
		printf(" given no is not divible by 5");
	}
	
	return 0;
}
