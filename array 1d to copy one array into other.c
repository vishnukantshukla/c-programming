#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int x[n];
	int y[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<=n-1;i++)
	{
	 y[i]=x[i];	
		
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
