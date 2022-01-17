#include<stdio.h>
int factorial(int x)
{ int fact=1,i;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()

{
	int i,x,z;
	scanf("%d",&x);
	z= factorial(x);
	printf("%d",z);
	
	
	
	
	
	
	return 0;
}
