#include<stdio.h>
void swap (void)
{
	int x,y;
	scanf("%d\n%d",&x,&y);
	x=x^y;
	y=y^x;
	x=x^y;
	printf("After  swapping \n %d,%d",x,y);
}
int main()
{
	swap();
	return 0;
}
