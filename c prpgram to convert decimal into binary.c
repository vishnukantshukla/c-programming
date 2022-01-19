#include<stdio.h>
int main()
{
	int  x[100], n,i;
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		x[i]=n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",x[i]);
	}
	return 0;
}
