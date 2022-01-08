#include<stdio.h>
void power(void)
{
	int power1,num,i,product=1;
	scanf("%d",&num);
	scanf("%d",&power1);
	for(i=1;i<=power1;i++)
	{
		product= product*num;
	}
	printf("%d",product);
}
int main()
{
	power();
	
	return 0;
}
