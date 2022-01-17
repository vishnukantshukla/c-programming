#include<stdio.h>
void table(int x);
int main()
{
	int x,y;
	printf("enter the number whose table you want to print");
	scanf("%d",&x);
	
	table(x);
	return 0;
}
void table (int x)
{
	int n,product;
	for(n=1;n<=10;n++)
	{
		product=x*n;
		printf("%d*%d=%d\n",x,n,product);
}
}
