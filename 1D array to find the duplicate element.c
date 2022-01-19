#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<=n-1;i++)
	{
	
	for(j=i+1;j<=n-1;j++)
	{
		if(x[i]==x[j])
		
		{
			
		  x[j]=count;

			count = count+1;
	}
	}
}
printf("The total number of duplicates are=  %d",count);	
	return 0;
	
	
}
