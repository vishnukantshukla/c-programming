#include<stdio.h>
int main()
{
	int n,i,j,k;
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
			if(i==j)
			{
				printf("%d\t",1);
				
		}
		
		else
		 {
			printf("%d\t",0);
		}
		
	}
	printf("\n");
}

	return 0;
}
