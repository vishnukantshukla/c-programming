#include<stdio.h>
int main()
{
	int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
(a>b?(a>c?(a>d?printf("a is greater"):printf("d is greater")):c>d?printf("c is greater"):printf("d is greater")):b>c?(b>d?printf("b is greater"):printf("d is greater")):c>d?printf("c is greater"):printf("d is greater"));

return 0;
}


