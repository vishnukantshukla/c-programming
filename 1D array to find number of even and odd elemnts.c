#include<stdio.h>
int main()
{
	int n,i,Even =0,odd=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<=n-1;i++)
	{
		if(x[i]%2==0)
	{
		Even = Even +1;
	}
	else
	{
		odd = odd+1;
	}
	}
	printf("The total numbers of Even number is = %d\nThe total number of odd number is = %d",Even,odd);
	return 0;
}
