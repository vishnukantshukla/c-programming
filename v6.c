#include<stdio.h>
int main()
{

int x = 1,sum = 0;
while (x<=10)
{
sum = x + sum;
 x = x+1;
}
printf("%d",sum);
return 0;
}
