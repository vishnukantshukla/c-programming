#include<stdio.h>
int main()
{
	int n,i,a,flag;
	printf("Enter the size of Array");
	scanf("%d",&n);
	int x[n];
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&a);
		for(i=0;i<n;i++)
	{
		if(x[i]==a)
		
		{
		
		flag=flag+1;	
		printf("The position of elements = %d\n",i+1);
	}
	}
	
	if(flag==0)
	{
		printf("Element not present");
	}
	return 0;
}
