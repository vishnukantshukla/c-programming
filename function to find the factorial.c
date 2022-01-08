#include<stdio.h>
void factorial (void)
{
	int x,i,factorial1=1;
	printf("Enter the value you want to ind the factorial  = ");
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		factorial1 = factorial1 * i;
	}
	printf("The factorial of %d is = %d",x,factorial1);
}
int main()
{
	factorial();
	return 0;
}
