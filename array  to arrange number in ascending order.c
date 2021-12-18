#include<stdio.h>
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(x[i]<x[j])
		
		{
			temp = x[i];
			x[i]= x[j];
			x[j]=temp;
			
		}
		}
	}
	printf("the elements arranged in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
		
	}
	
	return 0;
}
