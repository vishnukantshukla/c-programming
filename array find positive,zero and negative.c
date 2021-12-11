#include<stdio.h>
int main()
{
	int n ,i ,count_positive=0,count_negative=0,count_zero=0;
scanf("%d",&n);
int x[i];
for(i=0;i<=n-1;i++)
{
	scanf("%d",&x[i]);
}
for(i=0;i<=n-1;i++)
{
	if(x[i]>0)
	{
		count_positive=count_positive+1;
	}
}
for(i=0;i<=n-1;i++)
{
	if(x[i]<0)
	{
		count_negative =count_negative+1;
	}
}
for(i=0;i<=n-1;i++)
{
	if(x[i]==0)
	{
		count_zero=count_zero+1;
	}
}
printf("The total positive number = %d\n The total negative number= %d \n The total number of zeros =%d",count_positive,count_negative,count_zero);
	return 0;
}

