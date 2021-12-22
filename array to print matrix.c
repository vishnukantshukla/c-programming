#include<stdio.h>
int main()
{
	int n,i,j;
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
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}
return 0;
}

