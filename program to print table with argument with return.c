#include<stdio.h>
int table(int a,int i);
int main()
{
	int x,i,product,z;
	scanf("%d",&x);
	 z=table(x,i);
		printf("%d\n",product);
	
	return 0;
	
}
int table(int x , int i)
{
	int product;
	for(i=1;i<=10;i++)
	
		product=x*i;
		
	return product;
}
