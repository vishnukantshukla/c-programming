#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	char y[100];
	gets(x);
	gets(y);
	strcpy(x,y);
	printf("%s",x);
	return 0;
}
