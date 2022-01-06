#include<stdio.h>
int area(void)
{
	int radius,area;
	float pie=3.14;
	scanf("%d",&radius);
	area = pie *radius*radius;
	return area;
}
int main()
{
	printf("%d",area());
  return 0;	
}

