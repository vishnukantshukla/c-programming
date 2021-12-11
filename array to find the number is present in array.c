#include<stdio.h>
int main()
{
	int i,a,n,count;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&a);
	for(i=0;i<=n-1;i++)
	{
		if(x[i]==a)
		count =1;
		else
		count=0;
	}
	if(count=1)
	{
		printf("number is present");
	}
	else
	{
		printf("number is not present");
	}
	return 0;
}
