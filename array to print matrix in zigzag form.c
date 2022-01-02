#include<stdio.h>
int main()
{
	int n,i,j;
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
		if(i%2==0)
		{
		
		for(j=0;j<=n-1;j++)
		{
			
				printf("%d\t",x[i][j]);
		}
		
	}
	else
	for(j=n-1;j>=0;j--)
	{
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}
	return 0;
}
