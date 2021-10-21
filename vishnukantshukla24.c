#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
(x>y&&y>z&&x>z)?printf("x is greater than y and y is greater than z and x is greater than z"):printf("x is not greater than x and y is not greater than z and x is not greater than z");
return 0;
}
