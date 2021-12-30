#include<stdio.h>
int main()
{
	int n,i,a,pos,j;
	printf("Enter the size of Array = ");
	scanf("%d",&n);
	int x[n];
	printf("Enter the elements = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	printf("Enter the element which want to delete  = ");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		if(x[i]==pos)
		{
			a=i;
		}
	}
	printf("The required array after deletion  = ");
	for(j=a;j<n;j++)
	{
	x[j]=x[j+1];
		
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
