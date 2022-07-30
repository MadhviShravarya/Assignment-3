//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
	if(n>=1)
	printf("positive number");
	if(n==0)
	printf("zero");
	if(n<0)
	printf("negative number");
	
	return 0;
}
