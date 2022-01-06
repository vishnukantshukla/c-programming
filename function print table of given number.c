#include<stdio.h>
void table (void)
{
	int x,n;
	scanf("%d",&x);
	for(n=1;n<=10;n++)
	printf("%d*%d=%d\n",x,n,x*n);
	
}
int main()
{
	printf("Enter the number whose table you want to print   =  ");
	table();
	printf("enter the number whose you want to print table  =  ");
	table();
	printf("Enter the number whose table you want to print  =  ");
	table();
	return 0;
}
