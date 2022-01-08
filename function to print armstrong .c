#include<stdio.h>
void armstrong(void)
{
int x,sum,num,a,b;
scanf("%d",&x);
num=x;
{
	a=x%10;
	x=x/10;
	b=x%10;
	x=x/10;
	
	sum=x*x*x+a*a*a+b*b*b;
	
}
if(sum==num)
{
	printf("Enter number is armstrong");
	
}
else
{
	printf("Enter number is not armstrong");
}
	
}
int main()
{
	armstrong();
	return 0;
}
