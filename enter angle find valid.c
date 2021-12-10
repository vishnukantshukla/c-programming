#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	sum = (angle1+angle2+angle3);
	if(sum==180)
	printf("triangle is valid");
	else
	printf("it is not valid triangle");
	return 0;
}

