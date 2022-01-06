#include<stdio.h>
int sum (int a, int b);
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z = sum(x,y);
	printf("%d",z);
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
