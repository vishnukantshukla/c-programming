#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char ch[n];
	scanf("%[^\n]s",ch);
	printf("%s",ch);
	return 0;
}
