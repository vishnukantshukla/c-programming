#include<stdio.h>

int main()
{
	int x,i,factorial1;
	scanf("%d",&x);
	
	for(i=x;i>=1;i--)
	{
		factorial1=factorial1*i;
	}
	factorial(factorial1);
	return 0;
	
}
void factorial(factorial1)
{
	
	
	printf("%d",factorial1);
}
