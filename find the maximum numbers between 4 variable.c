#include<stdio.h>
int main()
{
	int x,y,z,w;
	scanf("%d%d%d",&x,&y,&z);
(x>y)&&(y>z)&&(z>w)&&(x>z)&&(x>w)?printf("x is greater than y and z\n"):printf("y and z  is greater than x\n");
(y>x)&&(y>z)&&(y>w)?printf("y is greater than x and  z\n"):printf("x and z is greater than y\n");
(z>x)&&(z>y)&&(z>w)?printf("z is greater than x and y\n"):printf("x and y is greater than z\n");
return 0;
}
