#include<stdio.h>
int main()
{
	int n,i,flag;
	scanf("%d",&n);
	int x[n],a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(x[i]==a)
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d",i+1);
		
	}
	else
	{
		printf("Element not present ");
	}
	return 0;
}
