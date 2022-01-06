#include<stdio.h>
int main()
{
int i;
	char ch[15];
	for(i=0;i<=14;i++)
	{
		scanf("%c",&ch[i]);
	}
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
