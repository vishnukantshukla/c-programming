#include<stdio.h>
int main()
{
	int n,i,sum=0,odd=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++)
	{
	
	scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
	printf("%d\n",a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
	
	if(a[i]%2==0)
	sum=sum+a[i];
	}
	for(i=0;i<=n-1;i++)

{

	
	if(a[i]%2!=0)
	{
	odd=odd+a[i];
}
}

printf("sum of even numbers = %d\n",sum);
printf("the sum of odd number =%d",odd);
return 0;
}

