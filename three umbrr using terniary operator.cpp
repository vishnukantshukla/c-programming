#include<stdio.h>
int main()
{ 
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
(x>y&&y>z&&x>z)?printf("it is true"):printf("it is false");
return 0;
}
