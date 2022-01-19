#include<stdio.h>
int main()
{
	int n,i,count=0;
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
		 count = count +1;
	}
}
printf("The total number of negative elements = %d",count);
	return 0;
}
