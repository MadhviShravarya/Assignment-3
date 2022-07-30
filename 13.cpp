//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a no:\n");
	scanf("%d",&n);
	if(n%2==0 && n%3==0)
	{ 
		printf("%d divisible by 2 and 3\n",n);
	}
	if(n%2!=0&&n%3==0)
	printf("%d is divisible by 3 but not by 2\n",n);
	if(n%2==0&&n%3!=0)
	printf("%d is divisible by 2 but not by 3\n",n);
	if(n%2!=0&&n%3!=0)
	printf("%d is neither divisible by 2 nor 3 both\n",n);
	
	
	return 0;
}
