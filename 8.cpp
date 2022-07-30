#include<stdio.h>
int main()
{
	int Y;
	printf("enter a year\n");
	scanf("%d",&Y);
	if(Y%400==0)
	{
		printf("%d is a leap year",Y);
	}
	else
	printf("%d is not a leap year",Y);
	return 0;
}
