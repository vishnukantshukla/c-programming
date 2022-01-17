#include<stdio.h>
int main()
{
	int *p,v=10;
	p=&v;
   printf("%d\n",v);
   printf("%d\n",&v);
   printf("%d\n",p);
   printf("%d",*p);
   return 0;
}





