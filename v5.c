#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch (x)
{
case 1 : printf("Sunday");
break;
case 2 : printf("Monday");
break;
case 3 : printf("Wednesday");
break ;
case 4 : printf("Thursday");
break ;
case 5 : printf("friday");
break;
case 6 : printf("saturday");
break ;
default : printf(" it is invalid choice");
break;
} 
return 0;
}


