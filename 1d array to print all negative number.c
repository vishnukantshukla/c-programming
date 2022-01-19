#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(x[i]<0)
		{
			printf("The negative numbers is %d\n",x[i]);
			
		}
		else
		{
			printf("The positive numbers is %d\n",x[i]);
		}
	}
	return 0;
}
