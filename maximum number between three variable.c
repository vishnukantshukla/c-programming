#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
x>y?((x>z)?printf("x is greater"):printf("y is greater")):((y>z)?printf("y is graeter "):printf("z is greater"));
return 0;
}
