#include<stdio.h>
int main()
{
	int n,i,k,a,j;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
	
	a= x[0];
	for(i=0;i<n-1;i++)
	{
     x[i]=x[i+1];
	}
	x[i]=a;
}
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
