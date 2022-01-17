#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int x[n+1][n+1];
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			x[i][j]=0;
		}
	}
	x[0][1]=1;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<i+3;j++)
		{
			x[i][j]=x[i-1][j]+x[i-1][j-1];
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<i+2;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}
