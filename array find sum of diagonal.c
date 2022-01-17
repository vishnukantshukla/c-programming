#include<stdio.h>
int main()
{
	int n,j,sum =0,i;
	scanf("%d",&n);
	int x[n][n];
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(i==j)
			{
				sum = sum + x[i][j];
			}
			
		}
		
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}
