#include<stdio.h>
int main()
{
int x=0, y=1,term , sum =0 , i=1;
scanf("%d",&term);
printf("%d%d",x,y);
while(i<=(term -2))
{
sum = x+y;
printf("%d",sum);
x=y;
y=sum;
i++;
}
return 0;
}
