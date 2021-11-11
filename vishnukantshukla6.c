#include<stdio.h>
int main()
{
int x,y,xor,sum;
scanf("%d%d",&x,&y);
sum=x+y;
xor=x^y;
if(sum==xor)
printf("number is valentne");
else
printf("number is not valentine");
return 0;
}

