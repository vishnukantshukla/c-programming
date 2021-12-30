#include<stdio.h>
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	int x[n],j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[j]<x[j+1])
			{
				temp = x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	return 0;
}
