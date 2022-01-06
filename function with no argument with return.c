#include<stdio.h>
int sum(void)
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}
int main()
{
	printf("%d",sum());
	return 0;
}
