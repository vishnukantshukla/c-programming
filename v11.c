#include<stdio.h>
int main ()
{
int x, r,sq,sum=0,num ;

scanf("%d",&x);
sq=x*x;
num =x;
while(sq!=0)
{
 r= sq%10;
sum = sum +r;
  sq =sq/10;
}
if(num==sum)
printf("the number is neon");
else
printf("the number is not neon");
return 0;
}

