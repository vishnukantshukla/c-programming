#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int x[n][n] ,y[n][n],z[n][n];
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
		scanf("%d",&y[i][j]);	
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			z[i][j]= x[i][j]+y[i][j];
		}
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",z[i][j]);
		}
		printf("\n");
	}
	return 0;
}
