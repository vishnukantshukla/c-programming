#include<stdio.h>
void factorial(int x)
{
	int i,fact=1;
	
	for(i=x;i>=1;i--)
	{
		fact= fact*i;
	}
	printf("%d",fact);#include<stdio.h>
void factorial(int x)
{
	int i,fact=1;
	
	for(i=x;i>=1;i--)
	{
		fact= fact*i;
	}
	printf("%d",fact);
	
}
int main()
{
	int x;
	scanf("%d",&x);
	factorial(x);
	return 0;
}
	
}

