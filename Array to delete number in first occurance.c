#include<stdio.h>
int main()
{
	int j,n,i;
	printf("Enter the size of Array\t=");
	scanf("%d",&n);
	int x[n],pos,k;
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		
	}
	printf("Enter the element which you want to remove from array\t=");
		scanf("%d",&pos);
	
	for(i=0;i<n;i++)
	{
		if(x[i]==pos)
		{
			k = i;
			break;
		}
	}
	printf("The required Array after deletion\t=");
	for(j=k;j<n;j++)
	{
	 	x[j]=x[j+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
	
	
	
	
	

