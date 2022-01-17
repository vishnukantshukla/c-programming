#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int x[n][n] ,y[n][n],z[n][n],sum ;
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
				sum = 0;
			for(k=0;k<=n-1;k++)
			{
				sum = sum+x[i][k]*y[k][j];	
			
		}
				z[i][j]=sum;
			
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
