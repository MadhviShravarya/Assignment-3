#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabet\n");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z') 
	{
		printf("upper case");
	}
	else 
	printf("lowercase");
	
	return 0;
}
