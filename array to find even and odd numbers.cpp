#include<stdio.h>
int main()
{ 
int m,n,i ,even ,odd ;
scanf("%d%d",&m);
int x[m];

for(i=0;i<m-1;i++)
{
	scanf("%d",&x[i]);
	if(x[i]%2==0)
	{
		even=x[i];
	}
} 
for(i=0;i<=m-1;i++)
{
	printf("%d",even);
}
scanf("%d",&n);
int a[n];
for(i=0;i<=n-1;i++)
{
	scanf("%d",&a[i]);
	if(a[i]%2 !=0)
	{
	  odd=a[i];
	}
}
for(i=0;i<=n-1;i++)
{

printf("%d",odd);
}
for(i=0;i<=n-1;i++)
{
	if(even=x[i])
	printf("%d",even);
	if(odd=a[i])
	printf("%d",odd);
}
return 0;
}
