#include<stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&a);
	for(j=n-1;a<x[j];j--)
	{
		x[j+1]=x[j];
	}
	x[j+1]=a;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	return 0;
}
