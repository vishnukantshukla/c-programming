#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	swap(x,y);
	return 0;
}
void swap (int a, int b)
{
	a= a^b;
	b=b^a;
	a=a^b;
	printf("After the wappping we get = \n %d,%d",a,b);
}

