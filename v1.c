#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
switch(x>y)
{
case 1:printf("x is greater ");
break;
case 0:printf("y is greater");
}
return 0;
}
