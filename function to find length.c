#include<stdio.h>
#include<string.h>
int main()
{
 int length;
 
	char x[100];
	gets(x);
    length=strlen(x);
	printf("%d",length);
	return 0;	
}
