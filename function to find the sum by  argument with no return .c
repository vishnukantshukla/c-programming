#include<stdio.h>
void sum(int a,int b);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	sum(x,y);
	return 0;
}
void sum (int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
	
}
