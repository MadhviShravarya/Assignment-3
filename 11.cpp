#include<stdio.h>
int main()
{
	int m,s,c,h,e,sum=0,M=500;
	float p;
	printf("enter the marks of science ");
	scanf("%d",&s);
	printf("enter the marks of maths ");
	scanf("%d",&m);
	printf("enter the marks of computer ");
	scanf("%d",&c);
	printf("enter the marks of hindi ");
	scanf("%d",&h);
	printf("enter the marks of english ");
	scanf("%d",&e);
	sum=s+m+c+h+e;
	p=sum*100/M;
    if(p>=33)
	printf("passed");
	else 
	printf("failed");	
	return 0;
}
