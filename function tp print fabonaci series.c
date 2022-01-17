#include<stdio.h>
void fabonaci(void)
{
	int x=0,y=1,term,sum=0,i;
	scanf("%d",&term);
	printf("%d%d",x,y);
	for(i=0;i<term-2;i++)
	{
		sum=x+y;
		printf("%d",sum);
		x=y;
		y=sum;
		
	}
	
}
int main()
{
	fabonaci();
	return 0;
}
