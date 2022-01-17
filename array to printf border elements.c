#include<stdio.h>
int main()
{
	int n,i,j,sum =0 ;
	scanf("%d",&n);
	int x[n][n];
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
			if(i==0||j==0||i==2||j==2)
			{
				printf("%d\t",x[i][j]);
			}
			else 
			{
				printf(" \t");
			}
			
	}
	printf("\n");
}
			

	return 0;
}
