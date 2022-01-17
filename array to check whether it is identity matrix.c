#include<stdio.h>
int main()
{
	int n,i,j,count=1;
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
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(x[i][j]!=1&&x[j][i]!=0)
			{
				count = 0;
				break;
		}
		
		
		
	}
}
if(count==1)
{
	printf("It is identity matrix");
}
else
{
	printf("it is not identity matrix");
}

	return 0;
}
