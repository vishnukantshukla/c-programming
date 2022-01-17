#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	int x[n],j;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&x[i]);
    	
	}
    scanf("%d",&a);
	for(j=n-1;x[j]>a;j--)
	{
		x[j+1]=x[j];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",x[i]);
	}
	return 0 ;
}
