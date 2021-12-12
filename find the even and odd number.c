#include<stdio.h>
int main()
{
	int n,i,m,j,even,odd;
	printf("ENTER THE SIZE OF  FIRST ARRAY=\t");
	scanf("%d",&n);
	printf("ENTER THE SIZE OF SECOND ARRAY =\t");
	scanf("%d",&m);
	int x[n];
	printf("ENTER THE ELEMENTS OF FIRST ARRAY=\n");
	for(i=0;i<=n-1;i++)
	{

		scanf("%d",&x[i]);
	}
	printf("THE EVEN NUMBERS ARE = \n");
for(i=0;i<=n-1;i++)
{
	if(x[i]%2==0)
	{
		printf("%d\n",x[i]);
	}
}
int a[m];
printf(" ENTER THE ELEMENTS OF SECOND ARRAY= \n");
for(i=0;i<=m-1;i++)
{
	scanf("%d",&a[i]);
}
printf("The odd numbers are \n");
for(i=0;i<=m-1;i++)
{
	if(a[i]%2!=0)
	{
		printf("%d\n",a[i]);
	}
}

return 0;
}

