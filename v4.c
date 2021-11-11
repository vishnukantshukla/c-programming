#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch (x>0)
{
case 1 : printf(" Number is positive");
break;
case 0 :
switch (x<0)
{
case 1 :
printf("Number is negative");
break;
case 0 : printf(" Number  is equals to  zero");
break ;
}
}
return 0;
}
