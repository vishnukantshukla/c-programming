#include<stdio.h>
int main()
{
int x,b,c;
int num,n;
scanf("%d",&x);
num=x;
b=x%10;
x=x/10;
c=x%10;
x=x/10;
n=(x*x*x+b*b*b+c*c*c);
if(num==n)
printf("x is armstrong numbrer");
else
printf("x is not armstrong number");
return 0;
}

