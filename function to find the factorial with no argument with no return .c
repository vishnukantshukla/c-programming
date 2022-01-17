#include<stdio.h>
void factorial()
{
	int x ,i,fact=1;
	scanf("%d",&x);
	for(i=x;i>=1;i--)
	{
		fact= fact*i;
	}
	printf("%d",fact);
	
}
int main()
{
	factorial();
	return 0;
}
