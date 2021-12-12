#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float sum=0.0,mean,SD=0.0,z;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		sum = sum+x[i];
		
	}
	mean = sum/n;
	for(i=0;i<=n-1;i++)
	{
		SD= SD+ pow(x[i]-mean,2);
		
   		 z = sqrt(SD/10);
	}
	printf("%f",z);
	return 0;
}
