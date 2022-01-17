#include<stdio.h>
int main()
{
	int i,count=0;
	char x[100];
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		count = count +1;
	}
	printf("The length of the words = %d",count);
	return 0;
	
}
