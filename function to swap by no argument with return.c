#include<stdio.h>
int swap (void)
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	x = x^y;
	y=y^x;
	x=x^y;
  z= x,y;
  return z;
}
int main()
{
	printf("%d",swap());
	return 0;
}
