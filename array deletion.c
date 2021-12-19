#include<stdio.h>
int main()
{
	int n,i,pos,j;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&pos);
	for(j=pos-1;j<n-1;j++)
	{
		x[j]=x[j+1];
	}
	x[j]=pos;
	for(i=0;i<n-1;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
