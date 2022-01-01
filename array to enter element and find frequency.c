#include<stdio.h>
int main()
{
	int n,i,j,c,count ;
	scanf("%d",&n);
	int x[n] , freq[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		freq[i]=-1;
	}
	for(i=0;i<=n-1;i++)
	{
		count=1;
		for(j=i+1;j<=n-1;j++)
		{
			if(x[i]==x[j])
			{
				count = count + 1;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
			
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d is present %d times\n",x[i],freq[i]);
		}
		
	}
	return 0;
}
