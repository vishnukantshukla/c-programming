#include<stdio.h>
int main()
{
	int i,n,min,max,a,b,c;
	printf("enter the size of array");
	scanf("%d",&n);
	int x[n];
	printf("Enter the elements");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	min = x[0];
	max= x[0];
	for(i=0;i<=n-1;i++)
	{
		if(x[i]<min)
		{
			min=x[i];
		}
		if(max<x[i])
		{
			max=x[i];
		}
}
scanf("%d%d",&a,&b);
c=x[a];
x[a]=x[b];
x[b]=c;
for(i=0;i<=n-1;i++)
{
	printf("%d",x[i]);
}
return 0;
}
