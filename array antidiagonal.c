#include<stdio.h>
int main()
{
	int n ,i,j,sum =0 ;
	scanf("%d",&n);
	int x[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==2)
			{
				sum = sum + x[i][j];
			}
		}
	}
	printf("sum of antidiagonal  elements = %d",sum);
	printf("\n");
	return 0;
}
