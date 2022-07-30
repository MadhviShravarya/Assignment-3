//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabet\n");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z') 
	{
		printf("a upper case alphabet");
	}
	if(ch>='a' && ch<='z') 
	printf("a lowercase alphabet");
	if(ch>='0' && ch<='9')
	printf("a digit");
	if(ch>=':' && ch<='@')
	printf("a special character");
	return 0;
}
