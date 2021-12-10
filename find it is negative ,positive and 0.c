#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch (x>0)
	{
	case 1 : printf("it is positive number");
	break;
	case 0:
	switch(x<0) 
	{
	case 1 : printf("it is negative number");
	break ;
	case 0 : printf("it is 0");
	break;
		}
	return 0;
}
}
