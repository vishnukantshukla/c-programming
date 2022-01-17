#include<stdio.h>
int factorial(void)
{
	int x,i,z,fact=1;
	scanf("%d",&x);
  for(i=x;i>=1;i--)
  {
  	fact=fact*i;
  }
  
    return fact;
}
int main()
{
	
    printf("%d",factorial());
	
	return 0;
}
