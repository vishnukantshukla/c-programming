#include<stdio.h>
int main()
{
	int n,i,rem , sum =0 ;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		rem = x[i]%i;
		if(rem == 0)
		{
			sum = sum + i;
		}
	}
	if(sum==x[i])
	{
		printf("The given number is perfect square = %d",x[i]);
		
	}
	else
	{
		printf("the given number is not perfec number = %d",x[i]);
	}
	return 0;
}
