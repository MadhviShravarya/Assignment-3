//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
	int a,b,c,x,y,z;
	printf("enter the length of three sides\n");
	scanf("%d%d%d",&a,&b,&c);
	x=b+c;
	y=c+a;
	z=a+b;
	if(a<x && b<y && c<z)
	printf("triangle is valid");
	else
	printf("triangle is not valid");
	
	return 0;
}
