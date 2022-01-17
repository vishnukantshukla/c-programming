#include<stdio.h>

int main()
{
	int x,i,factorial1;
	scanf("%d",&x);
	factorial(x);
	
	return 0;
}
void factorial(x)
{
	int i,factorial1;
	for(i=x;i>=1;i--)
	{
		factorial1=factorial1*i;
	}
	
	printf("%d",factorial1);
}
