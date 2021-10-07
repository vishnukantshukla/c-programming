#include <stdio.h>
int main()
{
int x,y,z;
x=10;
y=20;
z=0;
z=x;
x=y;
y=z;
printf("%d%d",x,y);
return 0;
}
