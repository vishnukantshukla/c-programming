#include<stdio.h>
int main()
{
int x,b,c ,reverse;
scanf("%d",&x);
b=x%10;
x=x/10;
c=x%10;
x=x/10;
reverse=b*100+c*10+x*1;
printf("reverse of the number is =%d",reverse);
return 0;
}

