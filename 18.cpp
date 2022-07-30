//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
	int n;
	printf("enter the month number :\n");
	scanf("%d",&n);
	if(n==1 ||n==3 ||n==5 ||n==7 ||n==8 ||n==10 ||n==12)
	printf("number of days in %d th month are 31",n);
	if(n==4 ||n==6 ||n==9 ||n==11)
	printf("number of days in %d th month are 30",n);
	if(n==2)
	printf("number of days in %d th month are 28",n);
	
	return 0;
}
