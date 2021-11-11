#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch (x==1||x==3||x==5|| x==7||x==8||x==10||x==12)
{
case 1 : printf("number of days in month is 31");
break;
case 0 : printf("number of days in month is 30");
break;
}
return 0;
}
