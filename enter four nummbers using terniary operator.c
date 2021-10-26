#include<stdio.h>
int main()
{ 
int x,y,z,g;
scanf("%d%d%d%d",&x,&y,&z,&g);
(x>y&&y>z&&x>z&&g>x)?printf("it is true"):printf("it is false");
return 0;
}
