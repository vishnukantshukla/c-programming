#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the size of array");
	scanf("%d",&n);
	int x[n][n],y[n][n],z[n][n];
	printf("Enter the elements of matrix 1");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Enter the elements of matrix 2 ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			z[i][j]= x[i][j]*y[i][j];
		}
	}
	printf("Hence multiplication of two matrix is = \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",z[i][j]);
		}
	printf("\n");
	}

}

