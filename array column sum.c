#include<stdio.h>
int main()
{
	int n,i,j,sum = 0 ;
	scanf("%d",&n);
	int x[n][n];
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Sum of coumn = \n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
	{
		sum = sum + x[j][i];
		
	}
	printf("%d\n",sum);
	sum =0;
	}

	return 0;
}
