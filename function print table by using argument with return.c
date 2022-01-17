#include<stdio.h>
int main()
{
	int x,i,z;
	scanf("%d",&x);
	z=table(x);
	printf("%d*%d=%d",x,i,z);
	return 0;
	
}
int table(int x)
{
	int i,z;
	for(i=0;i<=10;i++)
	{
		z= x*i;
	}
}
