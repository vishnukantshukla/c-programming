#include<stdio.h>
void area(void)
{
	int radius,area;
	float pie=3.14;
	scanf("%d",&radius);
	area=pie*radius*radius;
	printf("%d",area);
	
}
int main()
{
	area();
	return 0;
}
