#include<stdio.h>
int main()
{
	int n,i ,sum=0,Average;
	printf("Enter the size of array");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	 sum=sum+x[i];
	 Average=sum/n;
}
printf("The total sum = %d\n The average = %d",sum,Average);
return 0;
}

